import QtQuick 2.0
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.0

ApplicationWindow {
    id: mainWindow
    visible: true
    //visibility: "FullScreen"
    width: 800
    height: 480
    title: qsTr("House handler")

    Background {

    }

    StackLayout {
        id: swipeView
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        currentIndex: tabBar.currentIndex

        Informations {

        }
    }

    TabBar {
        id: tabBar
        width: 800
        height: 35
        anchors.bottom: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        currentIndex: swipeView.currentIndex
        CustomTabButton {
            text: qsTr("Informations")
        }
        CustomTabButton {
            text: qsTr("Music Player")
        }
        CustomTabButton {
            text: qsTr("Shutters and Lights")
        }
    }
}
