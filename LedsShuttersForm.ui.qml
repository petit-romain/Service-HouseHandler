import QtQuick 2.0
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4

Background {
    id: pageLedsShutters

    CustomLabel {
        x: 210
        y: 68
        width: 55
        height: 20
        text: qsTr("Terrace")
        font.pointSize: 10
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
        x: 604
        y: 316
        width: 61
        height: 20
    }

    Switch {

        x: 609
        y: 403
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
        x: 609
        y: 70
    }

    Switch {
        x: 740
        y: 183
        rotation: 270
    }

    CustomLabel {
        x: 600
        y: 135
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
        x: 263
        y: 403
    }

    CustomLabel {
        x: 256
        y: 316
        width: 66
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



    CustomLabel {
        x: 286
        y: 166
        width: 78
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
        x: 76
        y: 403
    }

    CustomLabel {
        x: 77
        y: 262
        width: 49
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
