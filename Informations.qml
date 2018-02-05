import QtQuick 2.0
import QtQuick.Controls 2.0

InformationsForm {
    humiIn {
        text: pubsubclient.humiIn.toPrecision(4) + " %"
    }
    humiOut {
        text: pubsubclient.humiOut.toPrecision(4) + " %"
    }
    tempIn {
        text: pubsubclient.tempIn.toPrecision(4) + " ° C"
    }
    tempOut {
        text: pubsubclient.tempOut.toPrecision(4) + " ° C"
    }
    pressIn {
        text: pubsubclient.pressIn.toPrecision(4) + " hPa"
    }
    pressOut {
        text: pubsubclient.pressOut.toPrecision(4) + " hPa"
    }
    lumiOut {
        text: "Outside luminosity : " + pubsubclient.lumiOut.toPrecision(4) + " Lux"
    }

    Switch {
        id: swAlarm
        x: 583
        y: 380
        function checkedChanged()
        {
            if(!checked)
                pubsubclient.onSdAlarmMode()
            pubsubclient.alarmMode = checked
        }
        onCheckedChanged: checkedChanged()
    }

    /*Button {c
        onClicked: pubsubclient.onSdAlarmMode()
    }*/

    CustomLabel {
        font.pointSize: 10
        x: 500
        y: 340
        text: (swAlarm.checked) ? "Alarm mode enabled" : "Alarm mode disabled"
    }
}
