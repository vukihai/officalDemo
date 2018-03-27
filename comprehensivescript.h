#ifndef COMPREHENSIVESCRIPT_H
#define COMPREHENSIVESCRIPT_H

#include <QDialog>
#include <QFileDialog>
#include <QString>
#include "scriptcreator.h"
#include "notification.h"
namespace Ui {
class comprehensiveScript;
}

class comprehensiveScript : public QDialog
{
    Q_OBJECT

public:
    explicit comprehensiveScript(QWidget *parent = 0);
    ~comprehensiveScript();

private slots:
    void on_pushButton_clicked();

private:
    Ui::comprehensiveScript *ui;
};

#endif // COMPREHENSIVESCRIPT_H
