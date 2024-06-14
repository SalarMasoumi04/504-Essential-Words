#ifndef SECOND_H
#define SECOND_H

#include <QDialog>
#include <third.h>

namespace Ui {
class Second;
}

class Second : public QDialog
{
    Q_OBJECT

public:
    explicit Second(QWidget *parent = nullptr);
    ~Second();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Second *ui;
    third* Third;
};

#endif // SECOND_H
