#ifndef BOARD_H
#define BOARD_H

#include <QLabel>
#include<iostream>
#include<algorithm>
#include "game_square.h"

class board
{

public:
    std::vector<game_square*> gameSquers;
    board();
    void setGameSquares(QList<game_square*> list);
    void wypisz();
    QString marked_piece;
    QString mark_posibility;

};

#endif // BOARD_H
