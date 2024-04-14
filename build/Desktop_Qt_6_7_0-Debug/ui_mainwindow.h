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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *topBar;
    QHBoxLayout *horizontalLayout;
    QPushButton *bookedMenu;
    QPushButton *newReserv;
    QPushButton *account;
    QPushButton *pushButton_4;
    QStackedWidget *mainContainer;
    QWidget *page;
    QWidget *page_2;
    QStackedWidget *leftBar;
    QWidget *page_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
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
        topBar->setGeometry(QRect(20, 20, 911, 81));
        topBar->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(topBar);
        horizontalLayout->setObjectName("horizontalLayout");
        bookedMenu = new QPushButton(topBar);
        bookedMenu->setObjectName("bookedMenu");

        horizontalLayout->addWidget(bookedMenu);

        newReserv = new QPushButton(topBar);
        newReserv->setObjectName("newReserv");

        horizontalLayout->addWidget(newReserv);

        account = new QPushButton(topBar);
        account->setObjectName("account");

        horizontalLayout->addWidget(account);

        pushButton_4 = new QPushButton(topBar);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout->addWidget(pushButton_4);

        mainContainer = new QStackedWidget(centralwidget);
        mainContainer->setObjectName("mainContainer");
        mainContainer->setGeometry(QRect(170, 119, 751, 531));
        mainContainer->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        mainContainer->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        mainContainer->addWidget(page_2);
        leftBar = new QStackedWidget(centralwidget);
        leftBar->setObjectName("leftBar");
        leftBar->setGeometry(QRect(30, 110, 121, 541));
        leftBar->setStyleSheet(QString::fromUtf8(""));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalLayout = new QVBoxLayout(page_3);
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(page_3);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout->addWidget(pushButton_5);

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
        bookedMenu->setText(QCoreApplication::translate("MainWindow", "Booked Menu", nullptr));
        newReserv->setText(QCoreApplication::translate("MainWindow", "New Reserv", nullptr));
        account->setText(QCoreApplication::translate("MainWindow", "Account", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Rooms", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
