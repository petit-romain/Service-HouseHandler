import QtQuick 2.0

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
}
