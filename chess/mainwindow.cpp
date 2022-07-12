#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , game()
    , ui(new Ui::MainWindow) 
{

    ui->setupUi(this);
    ui->gridLayout->setSpacing(0);
    game.gameboard.setGameSquares(this->findChildren<QLabel*>(QRegularExpression("square_\\d+$")));
    game.gameboard.wypisz();
    game.set_pieces_on_board();

}

MainWindow::~MainWindow()
{
    delete ui;
}

