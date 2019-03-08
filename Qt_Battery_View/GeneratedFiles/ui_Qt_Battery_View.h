/********************************************************************************
** Form generated from reading UI file 'Qt_Battery_View.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_BATTERY_VIEW_H
#define UI_QT_BATTERY_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt_Battery_ViewClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt_Battery_ViewClass)
    {
        if (Qt_Battery_ViewClass->objectName().isEmpty())
            Qt_Battery_ViewClass->setObjectName(QStringLiteral("Qt_Battery_ViewClass"));
        Qt_Battery_ViewClass->resize(824, 515);
        centralWidget = new QWidget(Qt_Battery_ViewClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 54, 12));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(600, 10, 54, 12));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(19, 29, 361, 371));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 369));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(centralWidget);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(430, 30, 361, 371));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 359, 369));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 410, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 410, 75, 23));
        Qt_Battery_ViewClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Qt_Battery_ViewClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 824, 23));
        Qt_Battery_ViewClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qt_Battery_ViewClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Qt_Battery_ViewClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Qt_Battery_ViewClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Qt_Battery_ViewClass->setStatusBar(statusBar);

        retranslateUi(Qt_Battery_ViewClass);
        QObject::connect(pushButton, SIGNAL(clicked()), Qt_Battery_ViewClass, SLOT(on_OpenFig_clicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Qt_Battery_ViewClass, SLOT(on_Progress_clicked()));

        QMetaObject::connectSlotsByName(Qt_Battery_ViewClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qt_Battery_ViewClass)
    {
        Qt_Battery_ViewClass->setWindowTitle(QApplication::translate("Qt_Battery_ViewClass", "Qt_Battery_View", Q_NULLPTR));
        label->setText(QApplication::translate("Qt_Battery_ViewClass", "Origin", Q_NULLPTR));
        label_2->setText(QApplication::translate("Qt_Battery_ViewClass", "Result", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Qt_Battery_ViewClass", "OpenFig", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Qt_Battery_ViewClass", "Progress", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Qt_Battery_ViewClass: public Ui_Qt_Battery_ViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_BATTERY_VIEW_H
