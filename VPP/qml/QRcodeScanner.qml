import QtQuick 2.5
import QtQuick.Window 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.1
import QtMultimedia 5.5

import QZXing 2.3

Component{
    Page
    {
        id: window
        property int  size: 3
        property int detectedTags: 0
        property string lastTag: ""
        property int oneDetect: 0
        property int count: 0

        //    Rectangle
        //    {
        //        id: bgRect
        //        color: "white"
        //        anchors.fill: videoOutput
        //    }

//        Text
//        {
//            id: text1
//            wrapMode: Text.Wrap
//            font.pixelSize: 20
//            anchors.top: parent.top
//            anchors.left: parent.left
//            z: 50
//            text: "Tags detected: " + detectedTags
//        }
        //    Text
        //    {
        //        id: fps
        //        font.pixelSize: 20
        //        anchors.top: parent.top
        //        anchors.right: parent.right
        //        z: 50
        //        text: (1000 / zxingFilter.timePerFrameDecode).toFixed(0) + "fps"
        //    }

        Camera
        {
            id:camera
            focus {
                focusMode: CameraFocus.FocusContinuous
                focusPointMode: CameraFocus.FocusPointAuto
            }
        }

        VideoOutput
        {
            id: videoOutput
            source: camera
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.left: parent.left
            anchors.right: parent.right
            autoOrientation: true
            fillMode: VideoOutput.Stretch
            filters: [ zxingFilter ]
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    camera.focus.customFocusPoint = Qt.point(mouse.x / width,  mouse.y / height);
                    camera.focus.focusMode = CameraFocus.FocusMacro;
                    camera.focus.focusPointMode = CameraFocus.FocusPointCustom;
                }
            }
            Rectangle {
                id: captureZone
                color: "transparent"
                width: parent.width *2 /3
                height: width
                anchors.centerIn: parent

                Rectangle{
                    width: parent.width/10
                    height: size
                    color: "#76FF03"
                    anchors.top: parent.top
                    anchors.topMargin: -1
                }
                Rectangle{
                    width: size
                    height: parent.width/10
                    color: "#76FF03"
                    anchors.top: parent.top
                    anchors.topMargin: -1
                }
                Rectangle{
                    width: parent.width/10
                    height: size
                    color: "#76FF03"
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.topMargin: -1
                }
                Rectangle{
                    width: size
                    height: parent.width/10
                    color: "#76FF03"
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.topMargin: -1
                }
                Rectangle{
                    width: parent.width/10
                    height: size
                    color: "#76FF03"
                    anchors.bottom: parent.bottom
                }
                Rectangle{
                    width: size
                    height: parent.width/10
                    color: "#76FF03"
                    anchors.bottom: parent.bottom
                }
                Rectangle{
                    width: parent.width/10
                    height: size
                    color: "#76FF03"
                    anchors.right: parent.right
                    anchors.bottom: parent.bottom
                }
                Rectangle{
                    width: size
                    height: parent.width/10
                    color: "#76FF03"
                    anchors.right: parent.right
                    anchors.bottom: parent.bottom
                }
            }
            Rectangle {
                id: captureZonetop
                color: "#96000000"
                //            opacity: 0.2
                width: parent.width *2 /3
                height: (parent.height - parent.width *2 /3) / 2
                anchors.top: parent.top
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Rectangle {
                id: captureZonebotom
                color: "#96000000"
                //            opacity: 0.2
                width: parent.width *2 /3
                height: (parent.height - parent.width *2 /3) / 2
                anchors.bottom: parent.bottom
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Rectangle {
                id: captureZoneleft
                color: "#96000000"
                //            opacity: 0.2
                width: parent.width / 6
                height: parent.height
                anchors.left: parent.left
            }
            Rectangle {
                id: captureZoneright
                color: "#96000000"
                //            opacity: 0.2
                width: parent.width / 6
                height: parent.height
                anchors.right: parent.right
            }
        }

        QZXingFilter
        {
            id: zxingFilter
            captureRect: {
                // setup bindings
                videoOutput.contentRect;
                videoOutput.sourceRect;
                return videoOutput.mapRectToSource(videoOutput.mapNormalizedRectToItem(Qt.rect(
                                                                                           0.25, 0.25, 0.5, 0.5
                                                                                           )));
            }

            decoder {
                enabledDecoders: QZXing.DecoderFormat_EAN_13 | QZXing.DecoderFormat_CODE_39 | QZXing.DecoderFormat_QR_CODE

                onTagFound: {
                    window.detectedTags++;
                    window.lastTag = tag;

                    if(window.lastTag.length == 17)  window.oneDetect ++;

                    console.log("ondetect", oneDetect);

                    if(oneDetect == 1){
                        current_address = window.lastTag;
                        _httpClient.send_request_open(current_user,window.lastTag)
                        resetid.running = true
//                        window.oneDetect = 0;
//                        window.count = 0;
                        stackView.pop();
                        busystatus = true
                        console.log("ondetect 1 ", oneDetect);

                    }
                    // ble here
                }


                tryHarder: false
            }


            onDecodingStarted:
            {
                //            console.log("started");
            }

            property int framesDecoded: 0
            property real timePerFrameDecode: 0

            onDecodingFinished:
            {
                timePerFrameDecode = (decodeTime + framesDecoded * timePerFrameDecode) / (framesDecoded + 1);
                framesDecoded++;
                //           console.log("frame finished: " + succeeded, decodeTime, timePerFrameDecode, framesDecoded);
            }
        }
        Timer{
            id: resetid
            interval: 300
            repeat: false
            running: false
            onTriggered: {
                window.oneDetect = 0;
                window.count = 0;
            }
        }

//        Text
//        {
//            id: text2
//            wrapMode: Text.Wrap
//            font.pixelSize: 20
//            anchors.bottom: parent.bottom
//            anchors.left: parent.left
//            z: 50
//            text: "Last tag: " + lastTag
//        }
        //    Switch {
        //        text: "Autofocus"
        //        checked: camera.focus.focusMode === CameraFocus.FocusContinuous
        //        anchors {
        //            right: parent.right
        //            bottom: parent.bottom
        //        }
        //        onCheckedChanged: {
        //            if (checked) {
        //                camera.focus.focusMode = CameraFocus.FocusContinuous
        //                camera.focus.focusPointMode = CameraFocus.FocusPointAuto
        //            } else {
        //                camera.focus.focusPointMode = CameraFocus.FocusPointCustom
        //                camera.focus.customFocusPoint = Qt.point(0.5,  0.5)
        //            }
        //        }
        //        font.family: Qt.platform.os === 'android' ? 'Droid Sans Mono' : 'Monospace'
        //        font.pixelSize: Screen.pixelDensity * 5
        //    }
    }
}
