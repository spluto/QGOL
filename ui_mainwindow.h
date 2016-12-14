/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *mainLayout;
    QFrame *controlsLayout_2;
    QVBoxLayout *controlsLayout;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *tickButton;
    QPushButton *clearButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *gameLayout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 538);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mainLayout = new QHBoxLayout();
        mainLayout->setSpacing(6);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        controlsLayout_2 = new QFrame(centralWidget);
        controlsLayout_2->setObjectName(QStringLiteral("controlsLayout_2"));
        controlsLayout_2->setFrameShape(QFrame::StyledPanel);
        controlsLayout_2->setFrameShadow(QFrame::Raised);
        controlsLayout = new QVBoxLayout(controlsLayout_2);
        controlsLayout->setSpacing(6);
        controlsLayout->setContentsMargins(11, 11, 11, 11);
        controlsLayout->setObjectName(QStringLiteral("controlsLayout"));
        startButton = new QPushButton(controlsLayout_2);
        startButton->setObjectName(QStringLiteral("startButton"));

        controlsLayout->addWidget(startButton);

        stopButton = new QPushButton(controlsLayout_2);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        controlsLayout->addWidget(stopButton);

        tickButton = new QPushButton(controlsLayout_2);
        tickButton->setObjectName(QStringLiteral("tickButton"));

        controlsLayout->addWidget(tickButton);

        clearButton = new QPushButton(controlsLayout_2);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        controlsLayout->addWidget(clearButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        controlsLayout->addItem(verticalSpacer);


        mainLayout->addWidget(controlsLayout_2);

        gameLayout = new QVBoxLayout();
        gameLayout->setSpacing(6);
        gameLayout->setObjectName(QStringLiteral("gameLayout"));

        mainLayout->addLayout(gameLayout);


        horizontalLayout->addLayout(mainLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QGOL", 0));
        startButton->setText(QApplication::translate("MainWindow", "Start", 0));
        stopButton->setText(QApplication::translate("MainWindow", "Stop", 0));
        tickButton->setText(QApplication::translate("MainWindow", "Tick", 0));
        clearButton->setText(QApplication::translate("MainWindow", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
