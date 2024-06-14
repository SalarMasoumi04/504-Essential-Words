#include "second.h"
#include "ui_second.h"
#include <QMessageBox>
#include "maindatabase.h"

Second::Second(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Second)
{
    ui->setupUi(this);
}

Second::~Second()
{
    delete ui;
}

void Second::on_pushButton_clicked()
{
    QString lesson = ui->comboBox->currentText();
    QString num = lesson.mid(7);
    int number = num.toInt();
    MainDataBase::Number = number;
    this->close();
    Third = new third(this);
    Third->show();

}

