#ifndef BOARD_H
#define BOARD_H

#include <QLabel>
#include<iostream>
#include<algorithm>
#include "game_square.h"

class board
{

public:
    QList<game_square*> gameSquers;
    board();
    void setGameSquares(QList<QLabel*> list);
    void wypisz();


};

#endif // BOARD_H
