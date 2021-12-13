#include "mainwindow.h"
#include "digiclock.h"

#include <QVBoxLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    initUI();
}

MainWindow::~MainWindow()
{

}

void MainWindow::initUI()
{
    QWidget *window = new QWidget(this);
    QVBoxLayout *mainLayout = new QVBoxLayout;
    QHBoxLayout *playerLayout = new QHBoxLayout;
    QHBoxLayout *betLayout = new QHBoxLayout;
    QHBoxLayout *chipLayout = new QHBoxLayout;
    QHBoxLayout *startTimeLayout = new QHBoxLayout;
    QHBoxLayout *endTimeLayout = new QHBoxLayout;
    QHBoxLayout *remainTimeLayout = new QHBoxLayout;
    QHBoxLayout *btnLayout = new QHBoxLayout;
    m_player1Label = new QLabel;
    m_player2Label = new QLabel;
    m_betLabel = new QLabel;
    m_chipLabel = new QLabel;
    m_startTimeLabel = new QLabel;
    m_endTimeLabel = new QLabel;
    m_remainTimeLabel = new QLabel;
    m_play1BetText = new QLineEdit;
    m_play2BetText = new QLineEdit;
    m_play1ChipText = new QLineEdit;
    m_play2ChipText = new QLineEdit;

    m_player1StartBtn = new QPushButton;
    m_player2StartBtn = new QPushButton;
    m_player1FailBtn = new QPushButton;
    m_player2FailBtn = new QPushButton;
    m_player1DropBtn = new QPushButton;
    m_player2DropBtn = new QPushButton;
    DigiClock *clock = new DigiClock;

    playerLayout->addWidget(m_player1Label);
    playerLayout->addWidget(m_player2Label);
    playerLayout->addWidget(clock);
    betLayout->addWidget(m_betLabel);
    betLayout->addWidget(m_play1BetText);
    betLayout->addWidget(m_play2BetText);
    chipLayout->addWidget(m_chipLabel);
    chipLayout->addWidget(m_play1ChipText);
    chipLayout->addWidget(m_play2ChipText);
    startTimeLayout->addWidget(m_startTimeLabel);
    endTimeLayout->addWidget(m_endTimeLabel);
    remainTimeLayout->addWidget(m_remainTimeLabel);
    btnLayout->addWidget(m_player1StartBtn);
    btnLayout->addWidget(m_player1FailBtn);
    btnLayout->addWidget(m_player1DropBtn);
    btnLayout->addWidget(m_player2StartBtn);
    btnLayout->addWidget(m_player2FailBtn);
    btnLayout->addWidget(m_player2DropBtn);

    mainLayout->addLayout(playerLayout);
    mainLayout->addLayout(betLayout);
    mainLayout->addLayout(chipLayout);
    mainLayout->addLayout(startTimeLayout);
    mainLayout->addLayout(endTimeLayout);
    mainLayout->addLayout(remainTimeLayout);
    mainLayout->addLayout(btnLayout);
    window->setLayout(mainLayout);
    setCentralWidget(window);

    m_player1Label->setText(tr("player1"));
    m_player2Label->setText(tr("player2"));
    m_betLabel->setText(tr("bet"));
    m_chipLabel->setText(tr("chip"));
    m_startTimeLabel->setText(tr("start time"));
    m_endTimeLabel->setText(tr("end time"));
    m_remainTimeLabel->setText(tr("remain time"));
    m_player1StartBtn->setText(tr("start"));
    m_player2StartBtn->setText(tr("start"));
    m_player1FailBtn->setText(tr("fail"));
    m_player2FailBtn->setText(tr("fail"));
    m_player1DropBtn->setText(tr("drop"));
    m_player2DropBtn->setText(tr("drop"));
}
