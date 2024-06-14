#include "third.h"
#include "ui_third.h"
#include "maindatabase.h"
#include "second.h"

third::third(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::third)
{
    ui->setupUi(this);
    ui->lesson->setText("Lesson " + QString::number(MainDataBase::Number));          //lesson number
    ui->lesson->setStyleSheet("font-size:24px;");
    ui->lesson->setAlignment(Qt::AlignCenter);

    ui->label->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][0][0]) +
                       " : " +
                       QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][0][1]) +
                       "\n1. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][0][2]) + "."+
                       "\n2. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][0][3]) + "."+
                       "\n3. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][0][4]) + ".");
    ui->label_2->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][1][0]) +
                       " : " +
                       QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][1][1]) +
                         "\n1. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][1][2]) + "."+
                         "\n2. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][1][3]) + "."+
                         "\n3. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][1][4]) + ".");
    ui->label_3->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][2][0]) +
                       " : " +
                       QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][2][1]) +
                         "\n1. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][2][2]) + "."+
                         "\n2. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][2][3]) + "."+
                         "\n3. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][2][4]) + ".");
    ui->label_4->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][3][0]) +
                       " : " +
                       QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][3][1]) +
                         "\n1. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][3][2]) + "."+
                         "\n2. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][3][3]) + "."+
                         "\n3. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][3][4]) + ".");
    ui->label_5->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][4][0]) +
                       " : " +
                       QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][4][1]) +
                         "\n1. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][4][2]) + "."+
                         "\n2. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][4][3]) + "."+
                         "\n3. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][4][4]) + ".");
    ui->label_6->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][5][0]) +
                       " : " +
                       QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][5][1]) +
                         "\n1. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][5][2]) + "."+
                         "\n2. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][5][3]) + "."+
                         "\n3. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][5][4]) + ".");
    ui->label_7->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][6][0]) +
                       " : " +
                       QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][6][1]) +
                         "\n1. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][6][2]) + "."+
                         "\n2. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][6][3]) + "."+
                         "\n3. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][6][4]) + ".");
    ui->label_8->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][7][0]) +
                       " : " +
                       QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][7][1]) +
                         "\n1. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][7][2]) + "."+
                         "\n2. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][7][3]) + "."+
                         "\n3. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][7][4]) + ".");
    ui->label_9->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][8][0]) +
                       " : " +
                       QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][8][1]) +
                         "\n1. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][8][2]) + "."+
                         "\n2. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][8][3]) + "."+
                         "\n3. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][8][4]) + ".");
    ui->label_10->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][9][0]) +
                       " : " +
                       QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][9][1]) +
                          "\n1. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][9][2]) + "."+
                          "\n2. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][9][3]) + "."+
                          "\n3. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][9][4]) + ".");
    ui->label_11->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][10][0]) +
                       " : " +
                       QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][10][1]) +
                          "\n1. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][10][2]) + "."+
                          "\n2. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][10][3]) + "."+
                          "\n3. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][10][4]) + ".");
    ui->label_12->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][11][0]) +
                       " : " +
                       QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][11][1]) +
                          "\n1. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][11][2]) + "."+
                          "\n2. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][11][3]) + "."+
                          "\n3. " + QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][11][4]) + ".");
}

third::~third()
{
    delete ui;
}
void third::on_pushButton_2_clicked()
{
    this->close();
    Second *Back2sec = new Second;
    Back2sec->show();
}

void third::on_pushButton_clicked()
{
    this->close();
    Fourth = new fourth(this);
    Fourth->show();
}

