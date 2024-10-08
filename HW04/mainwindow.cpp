#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(450, 220);

    ui->gb_testBox->setAlignment(Qt::AlignHCenter);
    ui->gb_testBox->setTitle("Тест Прогресс бара");

    ui->rb_comBox->setText("Задать значение");
    this->on_rb_comBox_clicked();

    for (int i = 0; i <= 10; i++) {
        ui->cb_values->addItem((QString("%""%1").arg(i*10)),i);
    }


    ui->rb_pushButton->setText("Увеличит по нажатию");
    ui->pb_increase->setText("Прибавить 10%");
    ui->pb_increase->toggle();

    ui->prb_progressBar->setMaximum(10);
    ui->prb_progressBar->setMinimum(0);
    ui->prb_progressBar->setValue(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_rb_comBox_clicked()
{
    ui->cb_values->setEnabled(true);
    ui->pb_increase->setEnabled(false);
}


void MainWindow::on_rb_pushButton_clicked()
{
    ui->cb_values->setEnabled(false);
    ui->pb_increase->setEnabled(true);
}


void MainWindow::on_cb_values_activated(int index)
{
    this->prbValue = index;
    ui->prb_progressBar->setValue(prbValue);
}


void MainWindow::on_pb_increase_clicked()
{
    if (prbValue < 10) prbValue++;
    else prbValue = 0;

    ui->prb_progressBar->setValue(prbValue);
}

