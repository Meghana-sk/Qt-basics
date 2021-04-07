#include "mythread.h"
#include <QDebug>
#include<QMutex>

MyThread::MyThread(QObject *parent, bool b, bool c, int d) :
    QThread(parent), Stop(b), restart(c), i(d)
{
}

// run() will be called when a thread starts
void MyThread::run()
{
    //int i=0;
    QMutex mutex;
    if(this->restart)
    {
        qDebug()<<i;
         QMutex mutex;
        for(; i <= 100; i++)
        {

            // prevent other threads from changing the "Stop" value
            mutex.lock();
            if(this->Stop) break;
            mutex.unlock();

            // emit the signal for the count label
            emit valueChanged(i);

            // slowdown the count change, msec
            this->msleep(500);
        }
    }
    else {
        for(; i <= 100; i++)
        {
            QMutex mutex;
            // prevent other threads from changing the "Stop" value
            mutex.lock();
            if(this->Stop) break;
            mutex.unlock();

            // emit the signal for the count label
            emit valueChanged(i);

            // slowdown the count change, msec
            this->msleep(500);
        }

    }


}
