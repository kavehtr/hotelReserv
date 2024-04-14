// header imports
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


 /* ######################################################### Styles #######################################################*/

    // top bar styles
    ui->topBar->setStyleSheet(
        "background: #202020;"
        );

    // left bar styles
    ui->leftBar->setStyleSheet(
        "background: #202020;"
        "border-radius: 5px;"
        );

    // central widget styles
    ui->centralwidget->setStyleSheet(
        "background: #000000;"
        );

    // main container styles
    ui->mainContainer->setStyleSheet(
        "background: #202020;"
        "border-radius: 5px;"
        );

 /* ######################################################### Styles #######################################################*/
}


// unknown
MainWindow::~MainWindow()
{
    delete ui;
}
