#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initUI();

private:
    QLabel *m_player1Label;
    QLabel *m_player2Label;
    QLabel *m_betLabel;
    QLineEdit *m_play1BetText;
    QLineEdit *m_play2BetText;
    QLabel *m_chipLabel;
    QLineEdit *m_play1ChipText;
    QLineEdit *m_play2ChipText;
    QLabel *m_startTimeLabel;

    QLabel *m_endTimeLabel;
    QLabel *m_remainTimeLabel;
    QPushButton *m_player1StartBtn;
    QPushButton *m_player2StartBtn;
    QPushButton *m_player1FailBtn;
    QPushButton *m_player2FailBtn;
    QPushButton *m_player1DropBtn;
    QPushButton *m_player2DropBtn;
};

#endif // MAINWINDOW_H
