#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImageReader>
#include <QPicture>

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


void MainWindow::on_radioButton_4_toggled(bool checked)
{
    QPixmap s ("../interfaz/QtImagen/Coca-Cola.png");

    if(checked == true)
    {
        ui->Imagen2->setPixmap(s);
    }
    else
    {
        ui->Imagen2->clear();
    }

}
