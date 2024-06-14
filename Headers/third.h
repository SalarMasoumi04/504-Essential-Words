#ifndef THIRD_H
#define THIRD_H

#include <QDialog>
#include "fourth.h"

namespace Ui {
class third;
}

class third : public QDialog
{
    Q_OBJECT

public:
    explicit third(QWidget *parent = nullptr);
    ~third();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();


private:
    Ui::third *ui;
    fourth* Fourth;
};

#endif // THIRD_H
