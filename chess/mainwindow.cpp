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
    connect(ui->square_1, SIGNAL(clicked()), this, SLOT(mouse_pressed()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mouse_pressed()
{
    ui->square_40->setPixmap(QPixmap(":/resource/pawn_white"));
    ui->square_40->setScaledContents(true);

}

