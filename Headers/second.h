#ifndef SECOND_H
#define SECOND_H

#include <QDialog>

namespace Ui {
class Second;
}

class Second : public QDialog
{
    Q_OBJECT

public:
    explicit Second(QWidget *parent = nullptr);
    ~Second();

private:
    Ui::Second *ui;
};

#endif // SECOND_H
