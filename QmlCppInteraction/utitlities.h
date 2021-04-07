#ifndef UTITLITIES_H
#define UTITLITIES_H

#include <QObject>
#include <QDebug>
#include <QTime>
#include <QElapsedTimer>
class Utitlities : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString author READ author WRITE setAuthor NOTIFY authorChanged)
public:
    explicit Utitlities(QObject *parent = nullptr);
    Q_INVOKABLE void print();

    void setAuthor(const QString &a);

    QString getAuthor() const;


signals:
    void authorChanged();

private:
    QString m_author;

};

#endif // UTITLITIES_H
