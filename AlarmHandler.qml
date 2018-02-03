import QtQuick 2.0
import QtQuick.Controls 2.0

Item {
    Rectangle {
        x: 365
        y: -235
        width: 70
        height: 950
        color: "#f32727"
        rotation: 60
        visible: (pubsubclient.smeDetected ) ? true : false
    }

    Rectangle {
        x: 365
        y: -235
        width: 70
        height: 950
        color: "#f32727"
        rotation: 120
        visible: (pubsubclient.smeDetected) ? true : false
    }
}
