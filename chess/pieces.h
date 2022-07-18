#ifndef PIECES_H
#define PIECES_H

#include<QPixmap>
#include<iostream>
#include "game_square.h"
#include "assets.h"


class pieces
{
    protected:
    QPixmap skin;

public:
    pieces();
    bool is_black;
    std::vector<int> move_possibility;
    virtual void put_on_board(game_square * s);
    std::vector<unsigned>start_pos;

};

#endif // PIECES_H
