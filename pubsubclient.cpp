#include "pubsubclient.h"

PubSubClient::PubSubClient(const QHostAddress& host, const quint16 port, QObject* parent) : QMQTT::Client(host, port, parent), m_qout(stdout)
{
    m_humiIn = m_humiOut = 0.0;
    m_tempIn = m_tempOut = 0.0;
    m_pressIn = m_pressOut = 0.0;
    m_lumiOut = 0.0;

    connect(this, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(this, SIGNAL(subscribed(QString,quint8)), this, SLOT(onSubscribed(QString)));
    connect(this, SIGNAL(received(QMQTT::Message)), this, SLOT(onReceived(QMQTT::Message)));
    //connect(this, SIGNAL(swClicked(QString, QString)), this, SLOT(onPublish(QString, QString)));
    connectToHost();
}

PubSubClient::~PubSubClient()
{

}

void PubSubClient::onConnected()
{
    subscribe(HUMI_IN_TOPIC);
    subscribe(HUMI_OUT_TOPIC);
    subscribe(TEMP_IN_TOPIC);
    subscribe(TEMP_OUT_TOPIC);
    subscribe(PRESS_IN_TOPIC);
    subscribe(PRESS_OUT_TOPIC);
    subscribe(LUMI_OUT_TOPIC);
    m_qout << "All topics connected !" << endl;
}

void PubSubClient::onPublish(QString _value, QString _topic)
{
    m_qout << "Value : " << _value << " , topic : " << _topic << endl;
}

void PubSubClient::onSubscribed(const QString& topic)
{
    m_qout << "Subscribed to " << topic << " !" << endl;
}

void PubSubClient::offSubscribed()
{
    disconnectFromHost();
    m_qout << "Disconnected !" << endl;
}

void PubSubClient::onReceived(const QMQTT::Message& message)
{
    m_qout << "Publish received: \"" << QString::fromUtf8(message.payload()) << "\", from topic : " << message.topic() << endl;
    if(message.topic() == HUMI_IN_TOPIC)
    {
        m_humiIn = message.payload().toFloat();
        Q_EMIT humiInChanged();
    }
    else if(message.topic() == HUMI_OUT_TOPIC)
    {
        m_humiOut = message.payload().toFloat();
        Q_EMIT humiOutChanged();
    }
    else if(message.topic() == TEMP_IN_TOPIC)
    {
        m_tempIn = message.payload().toFloat();
        Q_EMIT tempInChanged();
    }
    else if(message.topic() == TEMP_OUT_TOPIC)
    {
        m_tempOut = message.payload().toFloat();
        Q_EMIT tempOutChanged();
    }
    else if(message.topic() == PRESS_IN_TOPIC)
    {
        m_pressIn = message.payload().toFloat();
        Q_EMIT pressInChanged();
    }
    else if(message.topic() == PRESS_OUT_TOPIC)
    {
        m_pressOut = message.payload().toFloat();
        Q_EMIT pressOutChanged();
    }
    else if(message.topic() == LUMI_OUT_TOPIC)
    {
        m_lumiOut = message.payload().toFloat();
        Q_EMIT lumiOutChanged();
    }
}
