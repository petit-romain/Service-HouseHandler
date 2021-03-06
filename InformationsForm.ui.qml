import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Background {
    id: pageInformations

    property alias tempIn: tempIn
    property alias pressIn: pressIn
    property alias humiIn: humiIn
    property alias tempOut: tempOut
    property alias pressOut: pressOut
    property alias humiOut: humiOut
    property alias lumiOut: lumiOut

    Rectangle {
        width: 265
        height: 3
        color: "#e05419"
        x: 272
        y: 179
        rotation: 90
    }

    Rectangle {
        width: 800
        height: 3
        color: "#e05419"
        x: 0
        y: 310
    }

    CustomLabel {
        id: titleInside
        x: 575
        y: 60
        font.pointSize: 11
        font.bold: true
        font.underline: true
        text: "Outside"
    }

    CustomLabel {
        id: titleOutside
        x: 165
        y: 60
        font.pointSize: 11
        font.bold: true
        font.underline: true
        text: "Inside"
    }

    CustomLabel {
        id: txtTempIn
        x: 50
        y: 105
        font.pointSize: 10
        text: "Temperature :"
    }

    CustomLabel {
        id: tempIn
        x: 250
        y: 105
        font.pointSize: 10
    }

    CustomLabel {
        id: txtPressIn
        x: 50
        y: 185
        font.pointSize: 10
        text: "Pressure :"
    }

    CustomLabel {
        id: pressIn
        x: 250
        y: 185
        font.pointSize: 10
    }

    CustomLabel {
        id: txtHumiIn
        x: 50
        y: 265
        font.pointSize: 10
        text: "Humidity :"
    }

    CustomLabel {
        id: humiIn
        x: 250
        y: 265
        font.pointSize: 10
    }

    CustomLabel {
        id: txtTempOut
        x: 450
        y: 105
        font.pointSize: 10
        text: "Temperature :"
    }

    CustomLabel {
        id: tempOut
        x: 650
        y: 105
        font.pointSize: 10
    }

    CustomLabel {
        id: txtPressOut
        x: 450
        y: 185
        font.pointSize: 10
        text: "Pressure :"
    }

    CustomLabel {
        id: pressOut
        x: 650
        y: 185
        font.pointSize: 10
    }

    CustomLabel {
        id: txtHumiOut
        x: 450
        y: 265
        font.pointSize: 10
        text: "Humidity :"
    }

    CustomLabel {
        id: humiOut
        x: 650
        y: 265
        font.pointSize: 10
    }

    CustomLabel {
        id: lumiOut
        text: qsTr("")
        font.pointSize: 10
        x: 100
        y: 370
    }
}
