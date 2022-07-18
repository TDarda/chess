#include "chess.h"

chess::chess()
{
}

void chess::set_pieces_on_board()
{

    for(int j=0;j<8;j++)
    {
    Pieces.push_back(new class pawn_black());
    Pieces[j]->put_on_board(gameboard.gameSquers[Pieces[j]->start_pos[j]]);
    }
    for(int j=8;j<16;j++)
    {
    Pieces.push_back(new class pawn_white());
    Pieces[j]->put_on_board(gameboard.gameSquers[Pieces[j]->start_pos[j-8]]);
    }


};
