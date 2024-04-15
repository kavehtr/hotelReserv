// header imports
#include "mainwindow.h"
#include "ui_mainwindow.h"

// qt built in imports
#include <QTableView>
#include <QStandardItemModel>
#include <QStringList>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Declare and initialize the verticalHeader variable as a QStringList
    QStringList verticalHeader;
    verticalHeader << "Row 1" << "Row 2" << "Row 3";

    // Create a QStandardItemModel and set its horizontal and vertical headers
    QStandardItemModel *model = new QStandardItemModel();
    QStringList horizontalHeader;
    horizontalHeader << "Column 1" << "Column 2" << "Column 3";
    model->setHorizontalHeaderLabels(horizontalHeader);
    model->setVerticalHeaderLabels(verticalHeader);

    // Create a QTableView widget and set the model
    QTableView *tableView = new QTableView();
    tableView->setModel(model);

    // Optionally, set other properties like visibility of the vertical header, grid style, etc.
    tableView->verticalHeader()->setVisible(false);
    tableView->verticalHeader()->setDefaultSectionSize(10);
    tableView->setShowGrid(false);

    // Add data to the table by creating QStandardItem instances and appending them to the model
    QStandardItem *col1 = new QStandardItem("Text 1");
    QStandardItem *col2 = new QStandardItem("Text 2");
    model->appendRow(QList<QStandardItem*>() << col1 << col2);

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

    ui->pushButton->setStyleSheet(
        "background: #2e2e2e;"
        "border-radius: 10px;"
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
