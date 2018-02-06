#ifndef DATEINFORMATIONS_H
#define DATEINFORMATIONS_H

#include <QDateTime>
#include <QTimer>
#include <QTextStream>
#include <QLocale>
#include <QDebug>
#include <QPointer>

class DateInformations : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString date MEMBER m_date NOTIFY dateChanged)

public:
    QString m_date;
    QPointer<QTimer> m_timer;

public:
    DateInformations(QObject * = NULL);

public slots:
    void onTimeout();

public:
    Q_SIGNAL void dateChanged();
};

#endif // DATEINFORMATIONS_H
