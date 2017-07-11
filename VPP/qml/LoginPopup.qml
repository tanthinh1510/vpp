import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2

Page {
    id: loginPage

    onVisibleChanged: {
        if (visible) {
            //            idPassword.focus = idPassword.text === "" ? true : false
            //            idPassword.focusReason = Qt.OtherFocusReason
        }
    }

    Column {
        id: appOptionColumn
        anchors.centerIn: parent
        spacing: 35 *size_height

//        Label {
//            text: "Đăng Nhập"
//            anchors.horizontalCenter: parent.horizontalCenter
//            font.bold: true
//            font.pixelSize: 20 * size_scale//fntsize + 4
//        }
//        Rectangle{
//            height: 5
//            color: "transparent"
//            width: 1
//        }
        Row {
            Label {
                anchors.verticalCenter: parent.verticalCenter
                width: 120 * size_width
                text: "Tài khoản: "
            }

            TextField {
                id: iduser
                width: 220 * size_width
                text: "tamhuy"//mainController.isDebugmode() ? mainController.getConfigUserpwd() : ""

                onDisplayTextChanged: loginErrorMsg.text = ""
            }
        }



        Row {
            Label {
                anchors.verticalCenter: parent.verticalCenter
                width: 120 * size_width
                text: "Mật khẩu: "
            }

            TextField {
                id: idPassword
                width: 220 * size_width
                text: "123456"//mainController.isDebugmode() ? mainController.getConfigUserpwd() : ""
                echoMode: TextInput.Password
                onDisplayTextChanged: loginErrorMsg.text = ""
            }
        }

        Label {
            id: loginErrorMsg
            Layout.alignment: Qt.AlignHCenter
            text: " "
        }
//        Rectangle{
//            height: 1
//            color: "transparent"
//            width: 1
//        }

        Row {
            spacing: 10 * size_width
            Layout.alignment: Qt.AlignHCenter
            anchors.horizontalCenter: parent.horizontalCenter

            Button {
                id: okButton
                text: "Đồng ý"
                width: 150 * size_width
                height: 70 *size_height
                Material.accent: Material.Orange
                onClicked: {
                    _httpClient.login_to_server(iduser.text, idPassword.text)
                    current_user = iduser.text;
                }
            }

            Button {
                id: cancelButton
                text: "Hủy"
                height: 70 *size_height
                width: 150 * size_width
                onClicked: {
                    idPassword.text = ""

                }
            }
        }
    }

}
