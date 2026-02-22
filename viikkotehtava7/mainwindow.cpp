#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_N0Button_clicked(){
    if(tila == 0)
        ui->num1Edit->setText(ui->num1Edit->text() + "0");
    else
        ui->num2Edit->setText(ui->num2Edit->text() + "0");
}

void MainWindow::on_N1Button_clicked(){
    if(tila == 0)
        ui->num1Edit->setText(ui->num1Edit->text() + "1");
    else
        ui->num2Edit->setText(ui->num2Edit->text() + "1");
}

void MainWindow::on_N2Button_clicked(){
    if(tila == 0)
        ui->num1Edit->setText(ui->num1Edit->text() + "2");
    else
        ui->num2Edit->setText(ui->num2Edit->text() + "2");
}

void MainWindow::on_N3Button_clicked(){
    if(tila == 0)
        ui->num1Edit->setText(ui->num1Edit->text() + "3");
    else
        ui->num2Edit->setText(ui->num2Edit->text() + "3");
}

void MainWindow::on_N4Button_clicked(){
    if(tila == 0)
        ui->num1Edit->setText(ui->num1Edit->text() + "4");
    else
        ui->num2Edit->setText(ui->num2Edit->text() + "4");
}

void MainWindow::on_N5Button_clicked(){
    if(tila == 0)
        ui->num1Edit->setText(ui->num1Edit->text() + "5");
    else
        ui->num2Edit->setText(ui->num2Edit->text() + "5");
}

void MainWindow::on_N6Button_clicked(){
    if(tila == 0)
        ui->num1Edit->setText(ui->num1Edit->text() + "6");
    else
        ui->num2Edit->setText(ui->num2Edit->text() + "6");
}

void MainWindow::on_N7Button_clicked(){
    if(tila == 0)
        ui->num1Edit->setText(ui->num1Edit->text() + "7");
    else
        ui->num2Edit->setText(ui->num2Edit->text() + "7");
}

void MainWindow::on_N8Button_clicked(){
    if(tila == 0)
        ui->num1Edit->setText(ui->num1Edit->text() + "8");
    else
        ui->num2Edit->setText(ui->num2Edit->text() + "8");
}

void MainWindow::on_N9Button_clicked(){
    if(tila == 0)
        ui->num1Edit->setText(ui->num1Edit->text() + "9");
    else
        ui->num2Edit->setText(ui->num2Edit->text() + "9");
}

void MainWindow::on_enterButton_clicked(){
    tila = 1;
}

void MainWindow::on_plusButton_clicked(){
    int num1 = ui->num1Edit->text().toInt();
    int num2 = ui->num2Edit->text().toInt();
    ui->resultEdit->setText(QString::number(num1 + num2));
}

void MainWindow::on_minusButton_clicked(){
    int num1 = ui->num1Edit->text().toInt();
    int num2 = ui->num2Edit->text().toInt();
    ui->resultEdit->setText(QString::number(num1 - num2));
}

void MainWindow::on_mulButton_clicked(){
    int num1 = ui->num1Edit->text().toInt();
    int num2 = ui->num2Edit->text().toInt();
    ui->resultEdit->setText(QString::number(num1 * num2));
}

void MainWindow::on_divButton_clicked(){
    int num1 = ui->num1Edit->text().toInt();
    int num2 = ui->num2Edit->text().toInt();

    if(num2 != 0)
        ui->resultEdit->setText(QString::number(num1 / num2));
    else
        ui->resultEdit->setText("Virhe");
}

void MainWindow::on_clearButton_clicked(){
    ui->num1Edit->clear();
    ui->num2Edit->clear();
    ui->resultEdit->clear();
    tila = 0;
}
