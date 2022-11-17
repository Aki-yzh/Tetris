#define TETRIXWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QMenu>
#include "ui_mainwindow.h"
#include "tetrixboard.h"
#include <QMediaPlayer>

#define TETRIXWINDOW_H

#include <QFrame>
#include <QWidget>
#include <QSlider>
#include <QSpinBox>
#include <QSpacerItem>

QT_BEGIN_NAMESPACE
class QLCDNumber;
class QLabel;
class QPushButton;
QT_END_NAMESPACE
class TetrixBoard;

//! [0]
class TetrixWindow : public QWidget
{
    Q_OBJECT

public:
    TetrixWindow();

private:
    QLabel *createLabel(const QString &text);

    TetrixBoard *board;
    QLabel *nextPieceLabel;
    QLCDNumber *scoreLcd;
    QLCDNumber *levelLcd;
    QLCDNumber *linesLcd;
    QPushButton *startButton;
    QPushButton *quitButton;
    QPushButton *pauseButton;
    QMenuBar *menuBar;
    QSlider *slider;
    QSpinBox *box;
    QSpacerItem *spacer;
    QSpacerItem *spacer2;
};
//! [0]

