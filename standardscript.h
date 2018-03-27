#ifndef STANDARDSCRIPT_H
#define STANDARDSCRIPT_H

#include <QDialog>
#include <QFileDialog>
#include <QString>
#include "scriptcreator.h"
#include "notification.h"
namespace Ui {
class StandardScript;
}

class StandardScript : public QDialog
{
    Q_OBJECT

public:
    explicit StandardScript(QWidget *parent = 0);
    ~StandardScript();

private slots:
    void on_pushButton_clicked();

private:
    Ui::StandardScript *ui;
};

#endif // STANDARDSCRIPT_H
