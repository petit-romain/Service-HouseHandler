#ifndef PUBSUBCLIENT_H
#define PUBSUBCLIENT_H

#include <qmqtt>
#include <QTimer>
#include <QDebug>
#include <QPointer>

const QString CLR_DOOR_OPENED = "#42ff33";
const QString CLR_DOOR_CLOSED = "#e12709";

const QHostAddress MQTT_HOST = QHostAddress::LocalHost;
//const QHostAddress MQTT_HOST = (QHostAddress)"10.0.0.1";
const quint16 MQTT_PORT = 1883;

const QString HUMI_OUT_TOPIC = "sensor/humi/out";
const QString HUMI_IN_TOPIC = "sensor/humi/in";

const QString TEMP_OUT_TOPIC = "sensor/temp/out";
const QString TEMP_IN_TOPIC = "sensor/temp/in";

const QString PRESS_OUT_TOPIC = "sensor/press/out";
const QString PRESS_IN_TOPIC = "sensor/press/in";

const QString LUMI_OUT_TOPIC = "sensor/lumi/out";

const QString DOOR_TOPIC = "door/handler";

class PubSubClient : public QMQTT::Client
{
    Q_OBJECT
    Q_PROPERTY(float humiIn         MEMBER  m_humiIn            NOTIFY humiInChanged)
    Q_PROPERTY(float humiOut        MEMBER  m_humiOut           NOTIFY humiOutChanged)
    Q_PROPERTY(float tempIn         MEMBER  m_tempIn            NOTIFY tempInChanged)
    Q_PROPERTY(float tempOut        MEMBER  m_tempOut           NOTIFY tempOutChanged)
    Q_PROPERTY(float pressIn        MEMBER  m_pressIn           NOTIFY pressInChanged)
    Q_PROPERTY(float pressOut       MEMBER  m_pressOut          NOTIFY pressOutChanged)
    Q_PROPERTY(float lumiOut        MEMBER  m_lumiOut           NOTIFY lumiOutChanged)
    Q_PROPERTY(bool smeDetected     MEMBER  m_smeDetected       NOTIFY smeDetectedChanged)
    Q_PROPERTY(bool alarmMode       READ    getAlarmMode        WRITE setAlarmMode      NOTIFY alarmModeChanged)
    Q_PROPERTY(QString stateDoor    READ    getStateDoor        WRITE setStateDoor      NOTIFY stateDoorChanged)

public:
    float m_humiIn, m_humiOut;
    float m_tempIn, m_tempOut;
    float m_pressIn, m_pressOut;
    float m_lumiOut;
    bool m_smeDetected, m_alarmMode;
    QString m_stateDoor;
    QTimer * m_timer;
    //QPointer<QTimer> m_timer;

public:
    PubSubClient(const QHostAddress& = MQTT_HOST, const quint16 = MQTT_PORT, QObject* = NULL);
    bool getAlarmMode() const;
    void setAlarmMode(const bool &);
    QString getStateDoor() const;
    void setStateDoor(const QString &);

public slots:
    void onConnected();
    void onPublish(bool, QString);
    void onSubscribed(const QString &);
    void offSubscribed();
    void onReceived(const QMQTT::Message &);
    void onTimeOut();
    void onSdAlarmMode();

public :
    Q_SIGNAL void humiInChanged();
    Q_SIGNAL void humiOutChanged();
    Q_SIGNAL void tempInChanged();
    Q_SIGNAL void tempOutChanged();
    Q_SIGNAL void pressInChanged();
    Q_SIGNAL void pressOutChanged();
    Q_SIGNAL void lumiOutChanged();
    Q_SIGNAL void smeDetectedChanged();
    Q_SIGNAL void alarmModeChanged();
    Q_SIGNAL void alarmModeShutdowned();
    Q_SIGNAL void stateDoorChanged();
};

#endif // PUBSUBCLIENT_H
