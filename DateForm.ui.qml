import QtQuick 2.0
import QtQuick.Controls 2.0

Item {
    id: dateInf
    property alias date: date
    x: 140
    y: 7
    CustomLabel {
        id: date
        text: qsTr("")
        font.pointSize: 15
    }
}
