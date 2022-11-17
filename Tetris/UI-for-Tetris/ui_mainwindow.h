/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>


#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *help;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QPushButton *play_button;
    QPushButton *exit_button;
    QWidget *page_2;
    QFrame *game_window;
    QPushButton *start_button;
    QPushButton *back_button;
    QLabel *label_2;
    QFrame *next_blockwindow;
    QLCDNumber *Timer;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *scoreLcd;
    QLCDNumber *linesLcd;
    QLabel *label_5;
    QLCDNumber *levelLcd;
    QLabel *label_6;
    QPushButton *stop_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        help = new QAction(MainWindow);
        help->setObjectName(QString::fromUtf8("help"));
        help->setCheckable(false);
        help->setChecked(false);
        help->setEnabled(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(40, 0, 801, 581));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        stackedWidget->setFont(font);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 90, 71, 21));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        play_button = new QPushButton(page);
        play_button->setObjectName(QString::fromUtf8("play_button"));
        play_button->setGeometry(QRect(290, 160, 121, 51));
        play_button->setFont(font1);
        play_button->setStyleSheet(QString::fromUtf8("border-image: url(:/IMAGE/blue.png);"));
        exit_button = new QPushButton(page);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        exit_button->setGeometry(QRect(290, 330, 121, 51));
        exit_button->setFont(font1);
        exit_button->setStyleSheet(QString::fromUtf8("image: url(:/IMAGE/orange.png);\n"
"border-image: url(:/IMAGE/orange.png);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        game_window = new QFrame(page_2);
        game_window->setObjectName(QString::fromUtf8("game_window"));
        game_window->setGeometry(QRect(30, 19, 311, 521));
        game_window->setFrameShape(QFrame::StyledPanel);
        game_window->setFrameShadow(QFrame::Plain);
        game_window->setLineWidth(5);
        start_button = new QPushButton(page_2);
        start_button->setObjectName(QString::fromUtf8("start_button"));
        start_button->setGeometry(QRect(570, 390, 121, 41));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        start_button->setFont(font2);
        start_button->setStyleSheet(QString::fromUtf8("border-image: url(:/IMAGE/purple.png);"));
        back_button = new QPushButton(page_2);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setGeometry(QRect(570, 490, 121, 41));
        back_button->setFont(font2);
        back_button->setStyleSheet(QString::fromUtf8("border-image: url(:/IMAGE/red.png);"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(590, 10, 71, 41));
        next_blockwindow = new QFrame(page_2);
        next_blockwindow->setObjectName(QString::fromUtf8("next_blockwindow"));
        next_blockwindow->setGeometry(QRect(540, 60, 191, 171));
        next_blockwindow->setFrameShape(QFrame::StyledPanel);
        next_blockwindow->setFrameShadow(QFrame::Plain);
        next_blockwindow->setLineWidth(5);
        Timer = new QLCDNumber(page_2);
        Timer->setObjectName(QString::fromUtf8("Timer"));
        Timer->setGeometry(QRect(590, 340, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font3.setPointSize(20);
        Timer->setFont(font3);
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(460, 350, 91, 31));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(460, 300, 81, 31));
        scoreLcd = new QLCDNumber(page_2);
        scoreLcd->setObjectName(QString::fromUtf8("scoreLcd"));
        scoreLcd->setGeometry(QRect(580, 290, 101, 41));
        linesLcd = new QLCDNumber(page_2);
        linesLcd->setObjectName(QString::fromUtf8("linesLcd"));
        linesLcd->setGeometry(QRect(580, 240, 101, 41));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(460, 250, 81, 41));
        levelLcd = new QLCDNumber(page_2);
        levelLcd->setObjectName(QString::fromUtf8("levelLcd"));
        levelLcd->setGeometry(QRect(380, 30, 101, 41));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(390, 90, 91, 31));
        stop_button = new QPushButton(page_2);
        stop_button->setObjectName(QString::fromUtf8("stop_button"));
        stop_button->setGeometry(QRect(570, 440, 121, 41));
        stop_button->setFont(font2);
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        help->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\270\256\345\212\251", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tetris", nullptr));
        play_button->setText(QCoreApplication::translate("MainWindow", "play", nullptr));
        exit_button->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        start_button->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        back_button->setText(QCoreApplication::translate("MainWindow", "back", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Time\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Score\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "lines:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Level", nullptr));
        stop_button->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
