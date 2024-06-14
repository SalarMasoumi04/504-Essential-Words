#ifndef FOURTH_H
#define FOURTH_H

#include <QDialog>

namespace Ui {
class fourth;
}

class fourth : public QDialog
{
    Q_OBJECT

public:
    explicit fourth(QWidget *parent = nullptr);
    ~fourth();

    static int score;


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::fourth *ui;
    fourth *Fourth;
};

#endif // FOURTH_H
