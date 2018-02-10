import QtQuick 2.0
import QtQuick.Controls 2.0

LedsShuttersForm {

    Switch {
        id: swBedRoom
        x: 609
        y: 386
        onCheckedChanged: pubsubclient.onPublish(checked, "shutter/bedroom")
    }

    Switch {
        id: swKitchen
        x: 724
        y: 183
        rotation: 270
        onCheckedChanged: pubsubclient.onPublish(checked, "shutter/kitchen")
    }

    Switch {
        id: swBathRoom
        x: 263
        y: 385
        onCheckedChanged: pubsubclient.onPublish(checked, "shutter/bathroom")
    }

    Switch {
        id: swGarage
        x: 76
        y: 386
        onCheckedChanged: pubsubclient.onPublish(checked, "shutter/garage")
    }

    Rectangle {
        x: 425
        y: 389
        width: 30
        height: 30
        color: pubsubclient.stateDoor
        radius: width*0.5
    }
}
