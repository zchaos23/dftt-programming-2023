#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(onAccepted()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onAccepted()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username == "admin" && password == "admin") {
        MainWindow *mainWindow = new MainWindow(this);
        mainWindow->show();
        this->hide();
    } else {
        QMessageBox::warning(this, tr("登录失败"), tr("用户名或密码不正确，请重试！"));
        ui->usernameLineEdit->clear();
        ui->passwordLineEdit->clear();
        this->show();
    }
}
