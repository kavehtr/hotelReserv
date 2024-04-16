/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *topBar;
    QPushButton *newReserv;
    QPushButton *account;
    QPushButton *rooms;
    QPushButton *bookedMenu;
    QStackedWidget *mainContainer;
    QWidget *page;
    QLabel *roomsList;
    QTableView *tableView;
    QWidget *page_2;
    QStackedWidget *leftBar;
    QWidget *page_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *page_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(950, 680);
        MainWindow->setMinimumSize(QSize(950, 680));
        MainWindow->setMaximumSize(QSize(950, 680));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        topBar = new QWidget(centralwidget);
        topBar->setObjectName("topBar");
        topBar->setGeometry(QRect(20, 20, 911, 96));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topBar->sizePolicy().hasHeightForWidth());
        topBar->setSizePolicy(sizePolicy);
        topBar->setStyleSheet(QString::fromUtf8(""));
        newReserv = new QPushButton(topBar);
        newReserv->setObjectName("newReserv");
        newReserv->setGeometry(QRect(380, 10, 150, 101));
        newReserv->setMinimumSize(QSize(150, 78));
        newReserv->setMaximumSize(QSize(150, 16777215));
        account = new QPushButton(topBar);
        account->setObjectName("account");
        account->setGeometry(QRect(560, 10, 150, 101));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(account->sizePolicy().hasHeightForWidth());
        account->setSizePolicy(sizePolicy1);
        account->setMinimumSize(QSize(150, 78));
        account->setMaximumSize(QSize(150, 16777215));
        rooms = new QPushButton(topBar);
        rooms->setObjectName("rooms");
        rooms->setGeometry(QRect(740, 10, 150, 101));
        rooms->setMinimumSize(QSize(150, 78));
        rooms->setMaximumSize(QSize(150, 16777215));
        bookedMenu = new QPushButton(topBar);
        bookedMenu->setObjectName("bookedMenu");
        bookedMenu->setGeometry(QRect(200, 10, 150, 101));
        sizePolicy1.setHeightForWidth(bookedMenu->sizePolicy().hasHeightForWidth());
        bookedMenu->setSizePolicy(sizePolicy1);
        bookedMenu->setMinimumSize(QSize(150, 78));
        bookedMenu->setMaximumSize(QSize(150, 16777215));
        mainContainer = new QStackedWidget(centralwidget);
        mainContainer->setObjectName("mainContainer");
        mainContainer->setGeometry(QRect(170, 139, 751, 511));
        mainContainer->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        roomsList = new QLabel(page);
        roomsList->setObjectName("roomsList");
        roomsList->setGeometry(QRect(30, 20, 151, 31));
        tableView = new QTableView(page);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(150, 90, 521, 351));
        mainContainer->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        mainContainer->addWidget(page_2);
        leftBar = new QStackedWidget(centralwidget);
        leftBar->setObjectName("leftBar");
        leftBar->setGeometry(QRect(30, 130, 121, 521));
        leftBar->setStyleSheet(QString::fromUtf8(""));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 80, 121, 40));
        pushButton->setMinimumSize(QSize(0, 40));
        pushButton->setMaximumSize(QSize(16777215, 40));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 120, 121, 40));
        pushButton_2->setMinimumSize(QSize(0, 40));
        pushButton_2->setMaximumSize(QSize(16777215, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton:focus {\n"
"  background-color: white;\n"
"}"));
        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 160, 121, 40));
        pushButton_3->setMinimumSize(QSize(0, 40));
        pushButton_3->setMaximumSize(QSize(16777215, 40));
        pushButton_4 = new QPushButton(page_3);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 200, 121, 40));
        pushButton_4->setMinimumSize(QSize(0, 40));
        pushButton_4->setMaximumSize(QSize(16777215, 40));
        leftBar->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        leftBar->addWidget(page_4);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        newReserv->setText(QCoreApplication::translate("MainWindow", "New Reserv", nullptr));
        account->setText(QCoreApplication::translate("MainWindow", "Account", nullptr));
        rooms->setText(QCoreApplication::translate("MainWindow", "Rooms", nullptr));
        bookedMenu->setText(QCoreApplication::translate("MainWindow", "Booked Menu", nullptr));
        roomsList->setText(QCoreApplication::translate("MainWindow", "Rooms List : ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
