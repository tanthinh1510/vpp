import QtQuick 2.9
import QtQuick.Window 2.3
import QtQuick.Layouts 1.3
import QtMultimedia 5.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.2
import QtGraphicalEffects 1.0
import Qt.labs.settings 1.0

import QZXing 2.3
import "qml"

ApplicationWindow
{
    id: mainwindows
    width: 480 * size_width
    height: 720 * size_height
    title: "VPP"
    visible: true
    property string current_address: ""
    property double size_width  : Screen.desktopAvailableWidth/480
    property double size_height  : Screen.desktopAvailableHeight/720
    property double size_scale: (size_width + size_height) / 2
    property string current_user: ""
    property string current_password: ""
    property string current_password_change: ""

    property bool busystatus: false

    signal logout();

    Settings {
        id: settings
        property string style: "Material"
    }
    QRcodeScanner{
        id: qrScanAddress
    }
    DashBoard{
        id: dashboard


    }
    ChangePass{
        id: changepass
    }

    Shortcut {
        sequences: ["Esc", "Back"]
        enabled: stackView.depth > 1
        onActivated: {
            stackView.pop()

        }
    }
    header: ToolBar {
        Material.foreground: "white"

        height: 70 *size_height
        Rectangle{
            anchors.fill: parent
            color: "#EF6C00"
            Label {
                id: titleLabel
                text:  "VPP"
                color: "white"
                font.pixelSize: 20 *size_scale
                elide: Label.ElideRight
                anchors.centerIn: parent

            }
        }

        RowLayout {
            spacing: 20 *size_width
            anchors.fill: parent
            ToolButton {
                contentItem: Image {
                    fillMode: Image.Pad

                    horizontalAlignment: Image.AlignHCenter
                    verticalAlignment: Image.AlignVCenter
                    source: stackView.depth > 2 ? "images/back.png" : ""
                }
                onClicked: {
                    if (stackView.depth > 2) {
                        stackView.pop()

                    } else {

                    }
                }
            }
        }

    }
    StackView {
        id: stackView
        anchors.fill: parent
        focus: true
        Keys.onReleased: {
//            if (event.key === Qt.Key_Back && stackView.depth > 2) {
//                             stackView.pop();
//                             event.accepted = true;
//                         }
        }

        initialItem: LoginPopup{

        }

    }
    PopupMsg{
        id: msgid
        modal: true
        focus: true

        x: (stackView.width - width) / 2
        y: Math.abs(stackView.height -  msgid.height)/2


        closePolicy: Popup.NoAutoClose

    }

   Connections{
       target: _httpClient
       onLogin_status:{
          if(_status == 0){
              stackView.push(dashboard)

          }
          else {
              console.log("login dont success")
              msgid.msg = "        Đăng nhập không thành công \n Vui lòng kiểm tra lại tài khoản và mật khẩu";
              msgid.open()
          }
          busystatus = false
       }
       onAccess_status:{
          if(_status == 0){
              console.log("access to open the door", current_address)

//              _bleManager.connect_to_device("00:00:00:00:00:00")
              _bleManager.connect_to_device(current_address)
              // connect to ble and open the door
          }
          else{
              console.log("DO NOT access to open the door", current_address)
              msgid.msg = "Tài khoản không được cấp quyền mở cửa";
              busystatus = false

              msgid.open()
          }
       }
       onChangePass_status:{
           if(_status == 0){
               stackView.pop()
               msgid.msg = "Thay đổi mật khẩu thành công";
               msgid.open();
               _bleManager.save_database(current_user, current_password_change);
           }
           else{
               msgid.msg = "Thay đổi mật khẩu không thành công";
               msgid.open();
           }
       }
   }
   BusyIndicator {
       id: busylogin
       anchors.centerIn: parent

       running: busystatus
   }

   Connections{
       target: _bleManager
       onOpened_door:{
           msgid.msg = "Cửa đã mở";
           busystatus = false
           msgid.open()
       }
   }


}
