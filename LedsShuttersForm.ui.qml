import QtQuick 2.0
import QtQuick.Controls 2.0

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
        x: 585
        y: 316
        width: 61
        height: 20
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

    CustomLabel {
        x: 601
        y: 68
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

    CustomLabel {
        x: 244
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
        x: 269
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

    CustomLabel {
        x: 67
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
