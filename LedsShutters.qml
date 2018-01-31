import QtQuick 2.0

LedsShuttersForm {
    lumiOut {
        text: "The outside luminosity is " + pubsubclient.lumiOut.toPrecision(4) + " Lux"
    }
}
