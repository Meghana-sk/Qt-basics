#include "utitlities.h"

Utitlities::Utitlities(QObject *parent) : QObject(parent)
{

}


void Utitlities::print(){
    QElapsedTimer timer;
    timer.start();
    //qDebug() << "The slow operation took" << timer.elapsed() << "milliseconds";
    qDebug() << "The operation took" << timer.nsecsElapsed() << "nanoseconds";
    qDebug() << "clicked from C++ utility function\n" ;
}

void Utitlities::setAuthor(const QString &a) {
    if (a != m_author) {
        m_author = a;
        emit authorChanged();
    }
}

QString Utitlities::getAuthor() const {
    return m_author;
}
