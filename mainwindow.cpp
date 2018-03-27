#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->installEventFilter(this);
    ui->pushButton_2->installEventFilter(this);

}

bool MainWindow::eventFilter(QObject *obj, QEvent *event) {
    if (obj == (QObject*)ui->pushButton) {
            if (event->type() == QEvent::Enter){
                ui->label_2->setText("Tùy chỉnh các thông tin sẽ được thu thập bằng pm");
            }
    }
    if (obj == (QObject*)ui->pushButton_2) {
            if (event->type() == QEvent::Enter){
                ui->label_2->setText("tạo script thu thập tiêu chuẩn, sẽ thu thập các thông tin cần thiết để đánh giá mt.");
            }
    }
    return QWidget::eventFilter(obj, event);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    EditScriptUi editScriptUi;
    editScriptUi.setModal(true);
    editScriptUi.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    StandardScript standardScript;
    standardScript.setModal(true);
    standardScript.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    comprehensiveScript myComScript;
    myComScript.setModal(true);
    myComScript.exec();
}
