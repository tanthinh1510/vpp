import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import QtGraphicalEffects 1.0

Component{
    Page {
        id: root
        Row{
            id: hellorow
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: parent.top; anchors.topMargin: 100*size_height
            spacing: 10*size_width
            Text {
                text: "Xin chào: "
                font.pixelSize: 25 *size_scale
                anchors.verticalCenter: parent.verticalCenter
                verticalAlignment: Text.AlignVCenter
                color: "black"
            }
            Text {
                text: current_user
                font.pixelSize: 25 *size_scale
                anchors.verticalCenter: parent.verticalCenter
                verticalAlignment: Text.AlignVCenter
                font.bold: true
                color: "#EF6C00"
            }
            Rectangle{
                width: 10 *size_width
                height: 1
                color: "transparent"
            }

            ToolButton {
                width: 40 *size_scale
                height: width
                contentItem: Image {
                    anchors.fill: parent
                    fillMode: Image.PreserveAspectFit
                    horizontalAlignment: Image.AlignHCenter
                    verticalAlignment: Image.AlignVCenter
                    source: "qrc:/images/logout.png"
                }
                onClicked: {
                    logout()
                }
            }
        }

        Button{
            id: qrscan
            z:10
            height: 100 *size_height
            width: 270 *size_width
            anchors.centerIn: parent
            text: "Quét QR để mở cửa"
            highlighted: true
            Material.accent: Material.Blue
            onClicked: {
                stackView.push(qrScanAddress)
//                loginpu.open()
            }
        }
    }
}
