#ifndef MAIN504_H
#define MAIN504_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Main504;
}
QT_END_NAMESPACE

class Main504 : public QMainWindow
{
    Q_OBJECT

public:
    Main504(QWidget *parent = nullptr);
    ~Main504();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Main504 *ui;
};
#endif // MAIN504_H
