#include "chess.h"

chess::chess()
{
}

void chess::set_pieces_on_board()
{
    for(int i=0;i<8;i++)
    {
        Pieces.push_back(new class pawn_white());
        Pieces[i]->put_on_board(gameboard.gameSquers[Pieces[i]->start_pos[i]]);
    }
};
