#include "main504.h"
#include "ui_main504.h"

Main504::Main504(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main504)
{
    ui->setupUi(this);
}

Main504::~Main504()
{
    delete ui;
}

void Main504::on_pushButton_2_clicked()
{
    this->close();
    second = new Second(this);
    second->show();
}

