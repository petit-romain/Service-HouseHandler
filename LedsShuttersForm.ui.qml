import QtQuick 2.0
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4

Background {
    id: pageLedsShutters

    property alias lumiOut: lumiOut

    CustomLabel {
        x: 178
        y: 8
        width: 55
        height: 20
        text: qsTr("Terrace")
        font.pointSize: 10
    }

    CustomLabel {
        id: lumiOut
        text: qsTr("")
        font.pointSize: 10
        x: 100
        y: 100
    }

    Rectangle {
        width: 770
        height: 370
        color: "#00000000"
        border.color: "#e05419"
        border.width: 3
        x: 16
        y: 59
    }

    CustomLabel {
        text: qsTr("Bedroom")
        font.pointSize: 10
        x: 597
        y: 316
        width: 68
        height: 20
    }

    Switch {

        x: 594
        y: 389
    }

    Rectangle {
        width: 308
        height: 123
        color: "#00000000"
        border.color: "#e05419"
        border.width: 3
        x: 477
        y: 307
    }

    Switch {
        x: 594
        y: 270
    }

    CustomLabel {
        x: 600
        y: 70
        width: 60
        height: 20
        text: qsTr("Kitchen")
        font.pointSize: 10
    }

    Rectangle {
        width: 308
        height: 250
        color: "#00000000"
        border.color: "#e05419"
        border.width: 3
        x: 477
        y: 60
    }

    Rectangle {
        width: 80
        height: 123
        color: "#00000000"
        border.color: "#e05419"
        border.width: 3
        x: 400
        y: 307
    }

    Switch {
        x: 249
        y: 389
    }

    CustomLabel {
        x: 252
        y: 316
        width: 70
        height: 20
        text: qsTr("Bathroom")
        font.pointSize: 10
    }

    Rectangle {
        width: 234
        height: 123
        color: "#00000000"
        border.color: "#e05419"
        border.width: 3
        x: 169
        y: 307
    }

    Switch {
        x: 288
        y: 270
    }

    CustomLabel {
        x: 280
        y: 166
        width: 90
        height: 20
        text: qsTr("Living room")
        font.pointSize: 10
    }

    Rectangle {
        width: 311
        height: 151
        color: "#00000000"
        border.color: "#e05419"
        border.width: 3
        x: 169
        y: 159
    }

    Switch {
        x: 57
        y: 390
    }

    CustomLabel {
        x: 64
        y: 262
        width: 60
        height: 20
        text: qsTr("Garage")
        font.pointSize: 10
    }

    Rectangle {
        width: 156
        height: 175
        color: "#00000000"
        border.color: "#e05419"
        border.width: 3
        x: 16
        y: 255
    }
}
