#include "editscriptui.h"
#include "ui_editscriptui.h"
#include "QVector"
EditScriptUi::EditScriptUi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditScriptUi)
{
    ui->setupUi(this);
}

EditScriptUi::~EditScriptUi()
{
    delete ui;
}

void EditScriptUi::on_buttonBox_accepted()
{
    QVector<bool> options;

}
