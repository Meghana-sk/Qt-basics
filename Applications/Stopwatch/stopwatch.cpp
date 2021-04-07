#include "stopwatch.h"
#include "ui_stopwatch.h"

Stopwatch::Stopwatch(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Stopwatch)
{
    ui->setupUi(this);

    // create an instance of MyThread mThread is Private Member of mythread
    mThread = new MyThread(this,false,false);

    // connect signal/slot
    connect(mThread, SIGNAL(valueChanged(int)),
            this, SLOT(onValueChanged(int)));
}

Stopwatch::~Stopwatch()
{
    delete ui;
}



void Stopwatch::on_start_clicked()
{
    mThread->Stop = false;
    mThread->start();
}

void Stopwatch::on_stop_clicked()
{
    mThread->stopped=true;
    mThread->Stop = true;
}

void Stopwatch::on_reset_clicked()
{

    mThread->Stop = false;
    mThread->i=0;
    mThread->start();

}

void Stopwatch::onValueChanged(int count)
{
    ui->lineEdit->setText(QString::number(count));

}
