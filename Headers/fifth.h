#ifndef FIFTH_H
#define FIFTH_H

#include <QDialog>

namespace Ui {
class fifth;
}

class fifth : public QDialog
{
    Q_OBJECT

public:
    explicit fifth(QWidget *parent = nullptr);
    ~fifth();

private slots:
    void on_backToLessons_clicked();

    void on_close_clicked();

private:
    Ui::fifth *ui;
};

#endif // FIFTH_H
