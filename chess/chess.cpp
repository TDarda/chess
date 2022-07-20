#include "chess.h"

chess::chess()
{

}

void chess::set_pieces_on_board()
{

    for(int j=0;j<8;j++)
    {
    Pieces.push_back(new class pawn_black());
    Pieces[j]->put_on_board(gameboard.gameSquers[1][j]);
    }

    for(int j=0;j<8;j++)
    {
    Pieces.push_back(new class pawn_white());
    Pieces[j+8]->put_on_board(gameboard.gameSquers[6][j]);
    }


    for(int i = 0; i < 2; i++)
    {
        Pieces.push_back(new class rook_black());
        Pieces.push_back(new class knight_black());
        Pieces.push_back(new class bishop_black());
        Pieces[Pieces.size()-1]->put_on_board(gameboard.gameSquers[0][Pieces[Pieces.size()-1]->start_pos[i]]);
        Pieces[Pieces.size()-2]->put_on_board(gameboard.gameSquers[0][Pieces[Pieces.size()-2]->start_pos[i]]);
        Pieces[Pieces.size()-3]->put_on_board(gameboard.gameSquers[0][Pieces[Pieces.size()-3]->start_pos[i]]);
    }

    for(int i = 0; i < 2; i++)
    {
        Pieces.push_back(new class rook_white());
        Pieces.push_back(new class knight_white());
        Pieces.push_back(new class bishop_white());
        Pieces[Pieces.size()-1]->put_on_board(gameboard.gameSquers[7][Pieces[Pieces.size()-1]->start_pos[i]]);
        Pieces[Pieces.size()-2]->put_on_board(gameboard.gameSquers[7][Pieces[Pieces.size()-2]->start_pos[i]]);
        Pieces[Pieces.size()-3]->put_on_board(gameboard.gameSquers[7][Pieces[Pieces.size()-3]->start_pos[i]]);
    }

    Pieces.push_back(new class king_white());
    Pieces.push_back(new class king_black());
    Pieces.push_back(new class queen_black());
    Pieces.push_back(new class queen_white());


    Pieces[28]->put_on_board(gameboard.gameSquers[7][Pieces[28]->start_pos[0]]);
    Pieces[29]->put_on_board(gameboard.gameSquers[0][Pieces[29]->start_pos[0]]);
    Pieces[30]->put_on_board(gameboard.gameSquers[0][Pieces[30]->start_pos[0]]);
    Pieces[31]->put_on_board(gameboard.gameSquers[7][Pieces[31]->start_pos[0]]);
};
