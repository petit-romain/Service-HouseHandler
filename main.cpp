#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "pubsubclient.h"
#include "dateinformations.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    PubSubClient * psc = new PubSubClient();
    DateInformations * d = new DateInformations();

    engine.rootContext()->setContextProperty("pubsubclient", psc);
    engine.rootContext()->setContextProperty("dateinformations", d);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
