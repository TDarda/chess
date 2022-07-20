#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    //, game()
    , ui(new Ui::MainWindow) 
{

    ui->setupUi(this);
    ui->gridLayout->setSpacing(0);
    game.gameboard.setGameSquares(this->findChildren<game_square*>(QRegularExpression("square_\\d+$")));
    game.gameboard.wypisz();
    game.set_pieces_on_board();
    handler.set_gameboard(game.gameboard.gameSquers);

    for(int i = 0; i < 8; i++)
    {
        for(auto square : game.gameboard.gameSquers[i])
        {
            connect(square->direct_label.get(), SIGNAL(clicked()), this, SLOT(mouse_pressed()));
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mouse_pressed()
{
  auto temp = (game_square *)QObject::sender();

  handler.mark_and_show_moves(temp);



}

/* co ma sie dziac po kliknieciu
 reakcja tylko na pole z pionkiem */
