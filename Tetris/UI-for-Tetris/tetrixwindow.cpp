#include "tetrixwindow.h"
#include <QFrame>
#include <QWidget>
#include "tetrixboard.h"
#include <QGridLayout>
#include<QSound>
#include<QMediaPlayer>
QT_BEGIN_NAMESPACE
class QLCDNumber;
class QLabel;
class QPushButton;
QT_END_NAMESPACE
class Board;

TetrixWindow::TetrixWindow()
{
    board = new TetrixBoard;
//! [0]

    nextPieceLabel = new QLabel;
    nextPieceLabel->setFrameStyle(QFrame::Box | QFrame::Raised);
    nextPieceLabel->setAlignment(Qt::AlignCenter);
    board->setNextPieceLabel(nextPieceLabel);

//! [1]
    scoreLcd = new QLCDNumber(5);
    scoreLcd->setSegmentStyle(QLCDNumber::Filled);
//! [1]
    levelLcd = new QLCDNumber(5);
    levelLcd->setSegmentStyle(QLCDNumber::Filled);
    linesLcd = new QLCDNumber(5);
    linesLcd->setSegmentStyle(QLCDNumber::Filled);

//! [2]
    startButton = new QPushButton(tr("&Start"));
    startButton->setFocusPolicy(Qt::NoFocus);
    quitButton = new QPushButton(tr("&Quit"));
    quitButton->setFocusPolicy(Qt::NoFocus);
    pauseButton = new QPushButton(tr("&Pause"));
//! [2] //! [3]
    pauseButton->setFocusPolicy(Qt::NoFocus);
//! [3] //! [4]

    startButton->setStyleSheet("border-image:url(:/IMAGE/blue.png)");
    quitButton->setStyleSheet("border-image:url(:/IMAGE/red.png)");
    pauseButton->setStyleSheet("border-image:url(:/IMAGE/purple.png)");
    board->setStyleSheet("background-image: url(:/IMAGE/Russia1.jpeg)");

    connect(startButton, SIGNAL(clicked()), board, SLOT(start()));
//! [4] //! [5]
    connect(quitButton , SIGNAL(clicked()), qApp, SLOT(quit()));
    connect(pauseButton, SIGNAL(clicked()), board, SLOT(pause()));
    connect(board, SIGNAL(scoreChanged(int)), scoreLcd, SLOT(display(int)));
    connect(board, SIGNAL(levelChanged(int)), levelLcd, SLOT(display(int)));
    connect(board, SIGNAL(linesRemovedChanged(int)),
            linesLcd, SLOT(display(int)));
//! [5]

    QCursor cCursor;
    QPixmap cMap(":/IMAGE/RED_MOUSE.jpeg");
    QSize cSize(20, 20);
    QPixmap cScaleMap = cMap.scaled(cSize, Qt::KeepAspectRatio);
    cCursor = QCursor(cScaleMap);
    setCursor(cCursor);
    menuBar = new QMenuBar(this);
    QMenu* help = new QMenu("帮助");
    menuBar->addMenu(help);
    QAction* help_new = new QAction("《俄罗斯方块》的基本规则是移动、旋转和摆放游戏自动输出的各种方块，使之排列成完整的一行或多行并且消除得分");
    help->addAction(help_new);
    box = new QSpinBox(this);
    slider = new QSlider(Qt::Horizontal,this);
    spacer = new QSpacerItem(20, 20);
    spacer2 = new QSpacerItem(20, 20);
    box->setMinimum(1);

//! [6]

    QHBoxLayout *loyout = new QHBoxLayout;
    loyout->addItem(spacer);
    loyout->addWidget(box);
    loyout->addWidget(slider);
    loyout->addItem(spacer2);

    void (QSpinBox:: *box_signal ) (int) = &QSpinBox::valueChanged;
    connect(box ,box_signal , slider, &QSlider::setValue);
    connect(slider, &QSlider::valueChanged, box, &QSpinBox::setValue);

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(board, 1, 0, 12, 2);
    layout->addWidget(createLabel(tr("NEXT")), 0, 2, 1 ,1);
    layout->addWidget(nextPieceLabel, 1, 2, 1, 1);
    layout->addWidget(createLabel(tr("LEVEL")), 2, 2, 1 ,1);
    layout->addWidget(levelLcd, 3, 2, 1, 1);
    layout->addWidget(createLabel(tr("SCORE")), 4, 2, 1, 1);
    layout->addWidget(scoreLcd, 5, 2, 1, 1);
    layout->addWidget(createLabel(tr("LINES REMOVED")), 6, 2, 1, 1);
    layout->addWidget(linesLcd, 7, 2, 1, 1);
    layout->addWidget(startButton, 8, 2, 1, 1);
    layout->addWidget(quitButton, 10, 2, 1, 1);
    layout->addWidget(pauseButton, 12, 2, 1 , 1);
    layout->addLayout(loyout,13,0,1,1);
    setLayout(layout);

    setWindowTitle(tr("Tetrix"));
    resize(550,900);


QSound *startsound=new QSound("url(:/IMAGE/bgm.wav)",this);
startsound->play();
startsound->setLoops(-1);





}
//! [6]

//! [7]
QLabel *TetrixWindow::createLabel(const QString &text)
{
    QLabel *lbl = new QLabel(text);
    lbl->setAlignment(Qt::AlignHCenter | Qt::AlignBottom);
    return lbl;
}
//! [7]


