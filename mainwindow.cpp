// header imports
#include "mainwindow.h"
#include "ui_mainwindow.h"

// qt built in imports



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

    // booked menu button styles
    ui->bookedMenu->setStyleSheet(
        "margin-top: 30px;"
        "border: 1px solid;"
        "border-top-color: #0ab0aa;"
        "border-right-color: #0ab0aa;"
        "border-left-color: #0ab0aa;"
        "background-color: #000000;"
        "border-radius: 20px;"
        "icon: url(:/new/prefix1/icons8-book-24.png);"
        "padding-bottom: 20px;"
        "outline: none;"
        );

    // new reserv button styles
    ui->newReserv->setStyleSheet(
        "margin-top: 30px;"
        "border: 1px solid  ;"
        "border-top-color: #0ab0aa;"
        "border-right-color: #0ab0aa;"
        "border-left-color: #0ab0aa;"
        "background-color: #000000;"
        "border-radius: 20px;"
        "icon: url(:/new/prefix1/icons8-books-2.png);"
        "padding-bottom: 20px;"
        "outline: none;"
        );

    // account button styles
    ui->account->setStyleSheet(
        "margin-top: 30px;"
        "border: 1px solid;"
        "border-top-color: #0ab0aa;"
        "border-right-color: #0ab0aa;"
        "border-left-color: #0ab0aa;"
        "background-color: #000000;"
        "border-radius: 20px;"
        "padding-bottom: 20px;"
        "icon: url(:/new/prefix1/icons8-account-24.png);"
        );

    // rooms button styles
    ui->rooms->setStyleSheet(
        "margin-top: 30px;"
        "border: 1px solid;"
        "border-top-color: #0ab0aa;"
        "border-right-color: #0ab0aa;"
        "border-left-color: #0ab0aa;"
        "background-color: #000000;"
        "border-radius: 20px;"
        "padding-bottom: 20px;"
        "icon: url(:/new/prefix1/icons8-living-room-24.png);"
        );


    ui->roomsList->setStyleSheet(
        "font-size: 15px;"
        );

 /* ######################################################### Styles #######################################################*/
}


// unknown
MainWindow::~MainWindow()
{
    delete ui;
}
