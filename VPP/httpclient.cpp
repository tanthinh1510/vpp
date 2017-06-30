#include "httpclient.h"


HttpClient::HttpClient(QObject* parent)
    : QObject(parent)
{
    QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), this, SLOT(read_data_request(QNetworkReply*)));
    initialize("61.28.226.249",9090);
}

void HttpClient::login_to_server(QString _name, QString _pass)
{
    _method = HttpRequestMethod::POST;
    QByteArray datalogin = "{\"email\":\"";
    datalogin.append(_name);
    datalogin.append("\",\"password\":\"");
    datalogin.append(_pass);
    datalogin.append("\"}");
    QString api_login = "api/user/login";
    sendRequest(api_login,datalogin);
    qDebug() << "packet login" << datalogin;
}

void HttpClient::add_device(QString _name,QString _group,int _type, QString _address)
{
    _method = HttpRequestMethod::POST;
    QByteArray data_add_device = "{\"name\":\"";
    data_add_device.append(_name);
    data_add_device.append("\",\"group\":\"");
    data_add_device.append(_group);
    data_add_device.append("\",\"type\":\"");
    data_add_device.append(QString::number(_type));
    data_add_device.append("\",\"address\":\"");
    data_add_device.append(_address);
    data_add_device.append("\"}");
    QString api_add_device = "api/user/device";
    sendRequestAddevice(api_add_device,data_add_device);
    qDebug() << "packet add device" << data_add_device;
}

void HttpClient::get_all_device_cloud()
{
    QString api_get_device = "api/user/device";
    _method = HttpRequestMethod::GET;
    sendRequestAddevice(api_get_device,"");
}

void HttpClient::delete_devive(int _iddevice)
{
    QString api_get_device = "api/user/device/" + QString::number(_iddevice);
    _method = HttpRequestMethod::DELETE;
    sendRequestAddevice(api_get_device,"");
}

HttpClient::~HttpClient()
{
}

void HttpClient::initialize(const QString& host, int port) {
    QLoggingCategory::setFilterRules("qt.network.ssl.warning=false");
    _host = host;
    _port = port;
    _method = HttpRequestMethod::POST; //defallt
}

void HttpClient::setRequestMethod(HttpRequestMethod requestMethod) {
    _method = requestMethod;
}

void HttpClient::addPostItem(const QString &key, const QString &value) {
    if (!_m_postData.isEmpty()) {
        _m_postData.append(",");
    }

    _m_postData.append(key);
    _m_postData.append(":");
    _m_postData.append(value);
}

void HttpClient::sendRequest(const QString& api, QByteArray m_postData) {
    QString url = "http://" + _host + ":" + QString::number(_port) + "/" + api;
    qDebug() << "Url: " + url;
    //    mgr = new QNetworkAccessManager();
    QNetworkRequest *request = new QNetworkRequest();
    request->setUrl(QUrl(url));
    request->setHeader(QNetworkRequest::ContentTypeHeader, "some/type");


    //    QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), this, SLOT(read_data_request(QNetworkReply*)));

    switch (_method) {
    case HttpRequestMethod::GET:
        _repData = mgr.get(*request);
        break;
    case HttpRequestMethod::POST:
        //        m_postData = "{" + m_postData + "}";
        _repData = mgr.post(*request, m_postData);
        break;
    default:
        break;
    }

}

void HttpClient::sendRequestAddevice(const QString &api, QByteArray m_postData)
{
    QString url = "http://" + _host + ":" + QString::number(_port) + "/" + api;
    qDebug() << "Url: " + url;
    //    mgr = new QNetworkAccessManager();
    QNetworkRequest *request = new QNetworkRequest();
    request->setUrl(QUrl(url));
    request->setHeader(QNetworkRequest::ContentTypeHeader, "some/type");
    request->setRawHeader("Authorization","Bearer " + tokenlogin);


    //    QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), this, SLOT(read_data_request(QNetworkReply*)));

    switch (_method) {
    case HttpRequestMethod::GET:
        _repData = mgr.get(*request);
        break;
    case HttpRequestMethod::POST:
        //        m_postData = "{" + m_postData + "}";
        _repData = mgr.post(*request, m_postData);
        break;
    case HttpRequestMethod::DELETE:
        _repData = mgr.deleteResource(*request);
        break;


    default:
        break;
    }
}

QNetworkReply* HttpClient::replyData() {
    return _repData;
}

void HttpClient::read_data_request(QNetworkReply* reply)
{
    QString data = (QString) reply->readAll();
    process_json(data);
}

void HttpClient::process_json(QString _data)
{
    QJsonDocument doc = QJsonDocument::fromJson(_data.toUtf8());

    QJsonObject jsonObject = doc.object();
    if(!jsonObject["jwt"].toString().isEmpty()){
        tokenlogin.clear();
        tokenlogin.append(jsonObject["jwt"].toString());
    }
    emit update_device_id_from_cloud(jsonObject["group"].toString(),jsonObject["name"].toString(),jsonObject["deviceid"].toInt());

    QJsonArray jsonArray = doc.array();

    foreach (const QJsonValue & value, jsonArray) {
        QJsonObject obj = value.toObject();
//        qDebug () << "name get device " << obj["name"].toString();
//        qDebug () << "name get device " << obj["group"].toString();
//        qDebug () << "name get device " << obj["address"].toString();
//        qDebug () << "name get device " << obj["type"].toInt();
        emit create_group_from_cloud(obj["group"].toString());
        emit creat_device_from_cloud(obj["name"].toString(),obj["group"].toString(),obj["address"].toString(),obj["deviceid"].toInt(),obj["type"].toInt());
    }
//    qDebug () << "jwt" << tokenlogin;
    qDebug () << "reply " << doc;
}
