#include "fifth.h"
#include "ui_fifth.h"
#include "maindatabase.h"
#include "fourth.h"
#include "second.h"

fifth::fifth(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fifth)
{
    ui->setupUi(this);
    ui->lesson->setText(QString("Your grade in lesson %1 is :").arg(MainDataBase::Number));
    if (fourth::score == 15)
    {
        ui->grade->setText("A+");
    }
    else if (fourth::score == 13 || fourth::score == 14)
    {
        ui->grade->setText("A");
    }
    else if (fourth::score == 12)
    {
        ui->grade->setText("B+");
    }
    else if (fourth::score == 10 || fourth::score == 11)
    {
        ui->grade->setText("B");
    }
    else if (fourth::score >=6 && fourth::score <10)
    {
        ui->grade->setText("C");
    }
    else if (fourth::score >=4 && fourth::score <6)
    {
        ui->grade->setText("D");
    }
    else
    {
        ui->grade->setText("D-");
    }
}

fifth::~fifth()
{
    delete ui;
}

void fifth::on_backToLessons_clicked()
{
    this->close();
    Second *second = new Second(this);
    second->show();
}


void fifth::on_close_clicked()
{
    this->close();
}

