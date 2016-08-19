/********************************************************************************
** Form generated from reading UI file 'downloadmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADMANAGER_H
#define UI_DOWNLOADMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadManager
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DownloadManager)
    {
        if (DownloadManager->objectName().isEmpty())
            DownloadManager->setObjectName(QStringLiteral("DownloadManager"));
        DownloadManager->resize(672, 470);
        centralWidget = new QWidget(DownloadManager);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 130, 391, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 210, 113, 32));
        DownloadManager->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DownloadManager);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 672, 22));
        DownloadManager->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DownloadManager);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DownloadManager->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DownloadManager);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DownloadManager->setStatusBar(statusBar);

        retranslateUi(DownloadManager);

        QMetaObject::connectSlotsByName(DownloadManager);
    } // setupUi

    void retranslateUi(QMainWindow *DownloadManager)
    {
        DownloadManager->setWindowTitle(QApplication::translate("DownloadManager", "DownloadManager", 0));
        pushButton->setText(QApplication::translate("DownloadManager", "Download", 0));
    } // retranslateUi

};

namespace Ui {
    class DownloadManager: public Ui_DownloadManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADMANAGER_H
