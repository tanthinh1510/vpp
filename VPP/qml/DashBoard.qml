import QtQuick 2.9
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.1
import QtGraphicalEffects 1.0

Page {
    Button{
        id: qrscan
        anchors.centerIn: parent
        text: "QR Scanner"
        highlighted: true
        Material.accent: Material.Blue
        onClicked: {
            stackView.push(qrScanAddress)
        }
    }
}
