#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "pubsubclient.h"
#include "dateinformations.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    //QObject *item = engine.rootObjects();

    PubSubClient * psc = new PubSubClient();
    DateInformations * d = new DateInformations();

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("pubsubclient", psc);
    engine.rootContext()->setContextProperty("dateinformations", d);

    //QObject::connect(item, SIGNAL(swClicked(QString, QString)), psc, SLOT(onPublish(QString, QString)));
    return app.exec();
}
