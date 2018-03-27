#include "comprehensivescript.h"
#include "ui_comprehensivescript.h"

comprehensiveScript::comprehensiveScript(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::comprehensiveScript)
{
    ui->setupUi(this);
}

comprehensiveScript::~comprehensiveScript()
{
    delete ui;
}

void comprehensiveScript::on_pushButton_clicked()
{
    QString dir = "none";
    dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                     "C:/",
                                                     QFileDialog::ShowDirsOnly
                                                     | QFileDialog::DontResolveSymlinks);
    if(dir != "none") {
        ScriptCreator scriptCreator;
        scriptCreator.setDir(dir);
        scriptCreator.createComprehensive();
        Notification notification;
        notification.setText("Tạo thành công");
        notification.setModal(true);
        notification.exec();
    }
}
