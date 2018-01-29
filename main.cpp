#include <QApplication>
#include <QQuickView>
#include <QQmlContext>
#include "pubsubclient.h"
#include "dateinformations.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QQuickView viewer;

    PubSubClient * psc = new PubSubClient();
    DateInformations * d = new DateInformations();

    viewer.rootContext()->setContextProperty("pubsubclient", psc);
    viewer.rootContext()->setContextProperty("dateinformations", d);
    viewer.setSource(QUrl("qrc:/main.qml"));

    return app.exec();
}
