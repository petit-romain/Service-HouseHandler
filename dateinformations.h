#ifndef DATEINFORMATIONS_H
#define DATEINFORMATIONS_H

#include <QDateTime>
#include <QTimer>
#include <QTextStream>

class DateInformations : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString date MEMBER m_date NOTIFY dateChanged)

private:
    QTextStream m_qout{stdout};

public:
    QString m_date;
    QTimer * m_timer;

public:
    DateInformations(QObject * = NULL);
    ~DateInformations();

public slots:
    void onTimeout();

public:
    Q_SIGNAL void dateChanged();
};

#endif // DATEINFORMATIONS_H
