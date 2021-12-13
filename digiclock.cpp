#include <QTimer>
#include <QTime>
#include <QMouseEvent>

#include "digiclock.h"

DigiClock::DigiClock(QWidget *parent):QLCDNumber(parent)
{
    QPalette p = palette();
    p.setColor(QPalette::Background, Qt::blue);
    setPalette(p);
    setWindowFlags(Qt::FramelessWindowHint);
    setWindowOpacity(0.5);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timerout()), this, SLOT(showTime()));
    timer->start(1000);
    showTime();
    resize(150, 60);
    showColon = true;
}

void DigiClock::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if (showColon)
    {
        text[2] = ':';
        showColon = false;
    }
    else
    {
        text[2] = ' ';
        showColon = true;
    }
    display(text);
}
