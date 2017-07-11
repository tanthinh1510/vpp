import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import QtGraphicalEffects 1.0

Component{
    Page {
        Button{
            id: qrscan
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
