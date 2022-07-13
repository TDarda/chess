#ifndef CHESS_H
#define CHESS_H
#include"board.h"
#include"pawn_white.h"

class chess
{
public:
    chess();
    void set_pieces_on_board();
    board gameboard;
    std::vector<pieces*> Pieces;
};

#endif // CHESS_H
