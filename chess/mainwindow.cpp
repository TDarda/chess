#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , game()
    , ui(new Ui::MainWindow) 
{

    ui->setupUi(this);
    ui->gridLayout->setSpacing(0);
    game.gameboard.setGameSquares(this->findChildren<game_square*>(QRegularExpression("square_\\d+$")));
    game.gameboard.wypisz();
    game.set_pieces_on_board();

    for(auto square : game.gameboard.gameSquers)
    {
        connect(square->direct_label.get(), SIGNAL(clicked()), this, SLOT(mouse_pressed()));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mouse_pressed()
{
  auto temp = (game_square *)QObject::sender();


  if(temp->is_occupied && !temp->is_clicked)
   {
      if(square_handler!=nullptr&& square_handler->is_clicked)
      {
          square_handler->setStyleSheet(square_handler->style);
          square_handler->is_clicked=false;
      }
    square_handler = temp;
    square_handler->is_clicked=true;
    square_handler->setStyleSheet("background-color : black;");
   }

}

/* co ma sie dziac po kliknieciu
 reakcja tylko na pole z pionkiem */
