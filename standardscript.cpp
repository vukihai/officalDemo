
#include "standardscript.h"
#include "ui_standardscript.h"

StandardScript::StandardScript(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StandardScript)
{
    ui->setupUi(this);
}

StandardScript::~StandardScript()
{
    delete ui;
}

void StandardScript::on_pushButton_clicked()
{
    QString dir = "";
    dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                     "C:/",
                                                     QFileDialog::ShowDirsOnly
                                                     | QFileDialog::DontResolveSymlinks);
    if(dir != "") {
        ScriptCreator scriptCreator;
        scriptCreator.setDir(dir);
        scriptCreator.createStandard();
        Notification notification;
        notification.setText("Tạo thành công");
        notification.setModal(true);
        notification.exec();
    }
}
