import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Background {
    id: pageInformations
    property alias tempOut: tempOut
    property alias tempIn: tempIn
    property alias pressOut: pressOut
    property alias pressIn: pressIn
    property alias humiOut: humiOut
    property alias humiIn: humiIn

    Rectangle {
        width: 435
        height: 3
        color: "#e05419"
        x: 183
        y: 261
        rotation: 90
    }
    CustomLabel {
        id: titleInside
        x: 582
        y: 62
        text: "Inside"
        font.pointSize: 13
        font.bold: true
        font.underline: true
    }
    CustomLabel {
        id: titleOutside
        x: 176
        y: 62
        text: "Outside"
        font.pointSize: 13
        font.bold: true
        font.underline: true
    }
    GridLayout {
        x: 20
        y: 85
        width: 90
        height: 355
        rows: 6
        columns: 1
        CustomLabel {
            id: txtTempIn
            text: "Temperature"
            Layout.row: 0
            Layout.column: 0
            anchors.horizontalCenter: parent.horizontalCenter
        }
        CustomLabel {
            id: tempIn
            text: qsTr("")
            Layout.row: 1
            Layout.column: 0
            anchors.horizontalCenter: parent.horizontalCenter
        }
        CustomLabel {
            id: txtPressIn
            text: "Pressure"
            Layout.row: 2
            Layout.column: 0
            anchors.horizontalCenter: parent.horizontalCenter
        }
        CustomLabel {
            id: pressIn
            text: qsTr("")
            Layout.row: 3
            Layout.column: 0
            anchors.horizontalCenter: parent.horizontalCenter
        }
        CustomLabel {
            id: txtHumiIn
            text: "Humidity"
            Layout.row: 4
            Layout.column: 0
            anchors.horizontalCenter: parent.horizontalCenter
        }
        CustomLabel {
            id: humiIn
            text: qsTr("")
            Layout.row: 5
            Layout.column: 0
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

    /*Item {
        x: 110
        y: 90
        width: 290
        height: 120
        CustomChart {

        }
    }

    Item {
        x: 110
        y: 205
        width: 290
        height: 120
        CustomChart {

        }
    }

    Item {
        x: 110
        y: 320
        width: 290
        height: 120
        CustomChart {

        }
    }*/

    GridLayout {
        x: 425
        y: 85
        width: 90
        height: 355
        rows: 6
        columns: 1
        CustomLabel {
            id: txtTempOut
            text: "Temperature"
            Layout.row: 0
            Layout.column: 0
            anchors.horizontalCenter: parent.horizontalCenter
        }
        CustomLabel {
            id: tempOut
            text: qsTr("")
            Layout.row: 1
            Layout.column: 0
            anchors.horizontalCenter: parent.horizontalCenter
        }
        CustomLabel {
            id: txtPressOut
            text: "Pressure"
            Layout.row: 2
            Layout.column: 0
            anchors.horizontalCenter: parent.horizontalCenter
        }
        CustomLabel {
            id: pressOut
            text: qsTr("")
            Layout.row: 3
            Layout.column: 0
            anchors.horizontalCenter: parent.horizontalCenter
        }
        CustomLabel {
            id: txtHumiOut
            text: "Humidity"
            Layout.row: 4
            Layout.column: 0
            anchors.horizontalCenter: parent.horizontalCenter
        }
        CustomLabel {
            id: humiOut
            text: qsTr("")
            Layout.row: 5
            Layout.column: 0
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
    /*Item {
        x: 515
        y: 90
        width: 290
        height: 120
        CustomChart {

        }
    }

    Item {
        x: 515
        y: 205
        width: 290
        height: 120
        CustomChart {

        }
    }

    Item {
        x: 515
        y: 320
        width: 290
        height: 120
        CustomChart {

        }
    }*/
}
