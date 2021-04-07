#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <QDialog>
#include "mythread.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Stopwatch; }
QT_END_NAMESPACE

class Stopwatch : public QDialog
{
    Q_OBJECT

public:
    Stopwatch(QWidget *parent = nullptr);
    ~Stopwatch();
    MyThread *mThread;

private slots:


    void on_start_clicked();

    void on_stop_clicked();

    void on_reset_clicked();

    void on_close_clicked();

public slots:
    void onValueChanged(int);// response to signal

private:
    Ui::Stopwatch *ui;
};
#endif // STOPWATCH_H
