#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Stopwatch; }
QT_END_NAMESPACE

class Stopwatch : public QDialog
{
    Q_OBJECT

public:
    Stopwatch(QWidget *parent = nullptr);
    ~Stopwatch();

private:
    Ui::Stopwatch *ui;
};
#endif // STOPWATCH_H
