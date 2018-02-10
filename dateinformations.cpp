#include "dateinformations.h"

DateInformations::DateInformations(QObject * parent) : QObject(parent)
{
    m_timer = new QTimer(this);
    m_timer->setInterval(1 * 60 * 1000);
    m_timer->start();

    connect(m_timer, SIGNAL(timeout()), this, SLOT(onTimeout()));
    Q_EMIT onTimeout();
}

void DateInformations::onTimeout()
{
    QDateTime date = QDateTime::currentDateTime();
    QLocale locale = QLocale(QLocale::English);
    m_date = locale.toString(date, "hh:mm, dddd dd MMMM yyyy");

    Q_EMIT dateChanged();
    qDebug() << "Date changed" << endl;
}
