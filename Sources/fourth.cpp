#include "fourth.h"
#include "ui_fourth.h"
#include "maindatabase.h"
#include "third.h"
#include <QMessageBox>
#include "fifth.h"

using namespace std;

static int extraStep = 0;   // -> if(step>11)

static int step=0;          // -> else


fourth::fourth(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fourth)
{
    ui->setupUi(this);
    ui->lesson->setText("Lesson " + QString::number(MainDataBase::Number));

    if(step>11){
        string word= MainDataBase::words504[MainDataBase::Number-1][extraStep][0];
        QString lower = QString::fromStdString(word).toLower();
        string word2 = lower.toStdString();
        string sentence =MainDataBase::words504[MainDataBase::Number-1][extraStep][rand()%3+2];
        sentence.replace(sentence.find(word2),word2.length(), " _______ ") ;
        QString text ="(" + (QString::fromStdString(sentence) )+ ")" ;
        ui->label->setText( "Fill in the Blanks! \n" + text);

        int randLesson;

        for (int i=1; i<=4; i++)
        {
            do
            {
                randLesson = rand()%42;
            }
            while (randLesson == MainDataBase::Number-1);

            findChild<QRadioButton*>(QString("radioButton_%1").arg(i))->setText(QString::fromStdString(MainDataBase::words504[randLesson][rand()%12][0]));
        }

        int randCorrect = rand()%4+1;
        findChild<QRadioButton*>(QString("radioButton_%1").arg(randCorrect))->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][extraStep][0]));
    }

    else if(step>9){
        string word= MainDataBase::words504[MainDataBase::Number-1][step][0];
        QString lower = QString::fromStdString(word).toLower();
        string word2 = lower.toStdString();
        string sentence =MainDataBase::words504[MainDataBase::Number-1][step][rand()%3+2];
        sentence.replace(sentence.find(word2),word2.length(), " _______ ") ;
        QString text ="(" + (QString::fromStdString(sentence) )+ ")" ;
        ui->label->setText( "Fill in the Blanks! \n" + text);

        int randLesson;

        for (int i=1; i<=4; i++)
        {
            do
            {
                randLesson = rand()%42;
            }
            while (randLesson == MainDataBase::Number-1);

            findChild<QRadioButton*>(QString("radioButton_%1").arg(i))->setText(QString::fromStdString(MainDataBase::words504[randLesson][rand()%12][0]));
        }

        int randCorrect = rand()%4+1;
        findChild<QRadioButton*>(QString("radioButton_%1").arg(randCorrect))->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][step][0]));
    }

    else if(step>4){
        ui->label->setText("Which Word means   ' "+ QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][step][0])+" '   in Persian ? ");

        int randLesson;

        for (int i=1; i<=4; i++)
        {
            do
            {
                randLesson = rand()%42;
            }
            while (randLesson == MainDataBase::Number-1);

            findChild<QRadioButton*>(QString("radioButton_%1").arg(i))->setText(QString::fromStdString(MainDataBase::words504[randLesson][rand()%12][1]));
        }

        int randCorrect = rand()%4+1;
        findChild<QRadioButton*>(QString("radioButton_%1").arg(randCorrect))->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][step][1]));
    }
    else{
        ui->label->setText("Which Word means   ' "+ QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][step][1])+" '   in English ? ");

        int randLesson;

        for (int i=1; i<=4; i++)
        {
            do
            {
                randLesson = rand()%42;
            }
            while (randLesson == MainDataBase::Number-1);

            findChild<QRadioButton*>(QString("radioButton_%1").arg(i))->setText(QString::fromStdString(MainDataBase::words504[randLesson][rand()%12][0]));
        }

        int randCorrect = rand()%4+1;
        findChild<QRadioButton*>(QString("radioButton_%1").arg(randCorrect))->setText(QString::fromStdString(MainDataBase::words504[MainDataBase::Number-1][step][0]));
    }

}
fourth::~fourth()
{
    delete ui;
}

void fourth::on_pushButton_clicked()
{
    fourth::score = 0;
    step = 0;
    this->close();
    third *Back2thd = new third;
    Back2thd->show();
}




int fourth::score = 0;

void fourth::on_pushButton_2_clicked()
{
    if(ui->radioButton_1->isChecked())
    {
        if(step>11)
        {
            QString answer = ui->radioButton_1->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][extraStep][0];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            extraStep+=3;
            if (step ==14)
            {
                QMessageBox::warning(this, "Message", "Congratulations, Your Exam has been Finished!!");
                this->close();
                fifth *Fifth = new fifth(this);
                Fifth->show();

            }
            else
            {
                step += 1;
                this->close();
                Fourth = new fourth();
                Fourth->show();
            }
        }
        else if(step>9)
        {
            QString answer = ui->radioButton_1->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][step][0];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
        }
        else if(step>4)
        {
            QString answer = ui->radioButton_1->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][step][1];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
        }
        else
        {
            QString answer = ui->radioButton_1->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][step][0];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
        }
    }
    else if(ui->radioButton_2->isChecked())
    {
        if(step>11)
        {
            QString answer = ui->radioButton_2->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][extraStep][0];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            extraStep+=3;
            if (step ==14)
            {
                QMessageBox::warning(this, "Message", "Congratulations, Your Exam has been Finished!!");
                this->close();
                fifth *Fifth = new fifth(this);
                Fifth->show();
            }
            else
            {
                step += 1;
                this->close();
                Fourth = new fourth();
                Fourth->show();
            }
        }
        else if(step>9)
        {
            QString answer = ui->radioButton_2->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][step][0];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
        }
        else if(step>4)
        {
            QString answer = ui->radioButton_2->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][step][1];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
        }
        else
        {
            QString answer = ui->radioButton_2->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][step][0];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
        }
    }
    else if(ui->radioButton_3->isChecked())
    {
        if(step>11)
        {
            QString answer = ui->radioButton_3->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][extraStep][0];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            extraStep+=3;
            if (step ==14)
            {
                QMessageBox::warning(this, "Message", "Congratulations, Your Exam has been Finished!!");
                this->close();
                fifth *Fifth = new fifth(this);
                Fifth->show();
            }
            else
            {
                step += 1;
                this->close();
                Fourth = new fourth();
                Fourth->show();
            }
        }
        else if(step>9)
        {
            QString answer = ui->radioButton_3->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][step][0];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
        }
        else if(step>4)
        {
            QString answer = ui->radioButton_3->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][step][1];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
        }
        else
        {
            QString answer = ui->radioButton_3->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][step][0];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
        }
    }
    else if(ui->radioButton_4->isChecked())
    {
        if(step>11)
        {
            QString answer = ui->radioButton_4->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][extraStep][0];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            extraStep+=3;
            if (step ==14)
            {
                QMessageBox::warning(this, "Message", "Congratulations, Your Exam has been Finished!!");
                this->close();
                fifth *Fifth = new fifth(this);
                Fifth->show();
            }
            else
            {
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
            }
        }
        else if(step>9)
        {
            QString answer = ui->radioButton_4->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][step][0];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
        }
        else if(step>4)
        {
            QString answer = ui->radioButton_4->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][step][1];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
        }
        else
        {
            QString answer = ui->radioButton_4->text();
            string word = MainDataBase::words504[MainDataBase::Number-1][step][0];
            if(answer == QString::fromStdString(word))
            {
                fourth::score +=1;
            }
            step += 1;
            this->close();
            Fourth = new fourth();
            Fourth->show();
        }
    }
    else
    {
        QMessageBox::warning(this,"Message","You didn't Choose anything, Please Select one of the Answers!");
    }
}

