#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <QDialog>

namespace Ui {
class Notification;
}

class Notification : public QDialog
{
    Q_OBJECT

public:
    explicit Notification(QWidget *parent = 0);
    ~Notification();
    void setText(QString status);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Notification *ui;
};

#endif // NOTIFICATION_H
