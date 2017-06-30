import QtQuick 2.9
import QtQuick.Window 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.1
import QtMultimedia 5.5
import QtQuick.Controls 2.1
import QtQuick.Controls.Material 2.1
import QtQuick.Layouts 1.3
import QtGraphicalEffects 1.0

import QZXing 2.3
import "qml"

ApplicationWindow
{
    id: window
    visible: true
    width: 640
    height: 480
    title: "VPP"

    QRcodeScanner{
        id: qrScanAddress
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

        height: 70
        Rectangle{
            anchors.fill: parent
            color: "#EF6C00"
            Label {
                id: titleLabel
                text:  "VPP"
                color: "white"
                font.pixelSize: 20
                elide: Label.ElideRight
                anchors.centerIn: parent

            }
        }

        RowLayout {
            spacing: 20
            anchors.fill: parent
            ToolButton {
                contentItem: Image {
                    fillMode: Image.Pad
                    horizontalAlignment: Image.AlignHCenter
                    verticalAlignment: Image.AlignVCenter
                    source: stackView.depth > 1 ? "images/back.png" : ""
                }
                onClicked: {
                    if (stackView.depth > 1) {
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
        Keys.onReleased: if (event.key === Qt.Key_Back && stackView.depth > 1) {
                             stackView.pop();
                             event.accepted = true;
                         }
        initialItem: DashBoard{

        }

    }

}
