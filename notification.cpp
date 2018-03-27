#include "notification.h"
#include "ui_notification.h"

Notification::Notification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Notification)
{
    ui->setupUi(this);
}
void Notification::setText(QString status) {
    ui->label->setText(status);
}
Notification::~Notification()
{
    delete ui;
}

void Notification::on_pushButton_clicked()
{
    this->close();
}
