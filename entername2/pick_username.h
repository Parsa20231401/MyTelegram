#ifndef PICK_USERNAME_H
#define PICK_USERNAME_H

#include <QMainWindow>

namespace Ui {
class pick_username;
}

class pick_username : public QMainWindow
{
    Q_OBJECT

public:
    explicit pick_username(QWidget *parent = nullptr);
    ~pick_username();

private slots:
    void on_pushButton_clicked();

    void on_addProfile_clicked();

private:
    Ui::pick_username *ui;
};

#endif // PICK_USERNAME_H
