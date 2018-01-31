#ifndef PUBSUBCLIENT_H
#define PUBSUBCLIENT_H

#include <qmqtt>

const QHostAddress MQTT_HOST = QHostAddress::LocalHost;
const quint16 MQTT_PORT = 1883;

const QString HUMI_OUT_TOPIC = "sensor/humi/out";
const QString HUMI_IN_TOPIC = "sensor/humi/in";

const QString TEMP_OUT_TOPIC = "sensor/temp/out";
const QString TEMP_IN_TOPIC = "sensor/temp/in";

const QString PRESS_OUT_TOPIC = "sensor/press/out";
const QString PRESS_IN_TOPIC = "sensor/press/in";

const QString LUMI_OUT_TOPIC = "sensor/lumi/out";

const QString SHUTTER_TOPIC = "shutter/";

class PubSubClient : public QMQTT::Client
{
    Q_OBJECT
    Q_PROPERTY(float humiIn     MEMBER m_humiIn     NOTIFY humiInChanged)
    Q_PROPERTY(float humiOut    MEMBER m_humiOut    NOTIFY humiOutChanged)
    Q_PROPERTY(float tempIn     MEMBER m_tempIn     NOTIFY tempInChanged)
    Q_PROPERTY(float tempOut    MEMBER m_tempOut    NOTIFY tempOutChanged)
    Q_PROPERTY(float pressIn    MEMBER m_pressIn    NOTIFY pressInChanged)
    Q_PROPERTY(float pressOut   MEMBER m_pressOut   NOTIFY pressOutChanged)
    Q_PROPERTY(float lumiOut    MEMBER m_lumiOut    NOTIFY lumiOutChanged)

private:
    QTextStream m_qout{stdout};

public:
    float m_humiIn, m_humiOut;
    float m_tempIn, m_tempOut;
    float m_pressIn, m_pressOut;
    float m_lumiOut;

public:
    PubSubClient(const QHostAddress& = MQTT_HOST, const quint16 = MQTT_PORT, QObject* = NULL);
    ~PubSubClient();

public slots:
    void onConnected();
    void onPublish(QString, QString);
    void onSubscribed(const QString &);
    void offSubscribed();
    void onReceived(const QMQTT::Message &);

public:
    Q_SIGNAL void humiInChanged();
    Q_SIGNAL void humiOutChanged();
    Q_SIGNAL void tempInChanged();
    Q_SIGNAL void tempOutChanged();
    Q_SIGNAL void pressInChanged();
    Q_SIGNAL void pressOutChanged();
    Q_SIGNAL void lumiOutChanged();
};

#endif // PUBSUBCLIENT_H
