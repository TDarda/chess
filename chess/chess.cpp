#include "chess.h"

chess::chess()
{

}

void chess::set_pieces_on_board()
{
    int count = 0;
    for(int j=0;j<8;j++)
    {
    Pieces.push_back(new class pawn_black());
    Pieces[j]->put_on_board(gameboard.gameSquers[Pieces[j]->start_pos[count++]]);
    }
    count=0;
    for(int j=8;j<16;j++)
    {
    Pieces.push_back(new class pawn_white());
    Pieces[j]->put_on_board(gameboard.gameSquers[Pieces[j]->start_pos[count++]]);
    }
    count=0;
    for(int j = 0; j < 2; j++)
    {
        Pieces.push_back(new class rook_black());
        Pieces.push_back(new class knight_black());
        Pieces.push_back(new class bishop_black());
        Pieces.push_back(new class rook_white());
        Pieces.push_back(new class knight_white());
        Pieces.push_back(new class bishop_white());

        Pieces[Pieces.size()-1]->put_on_board(gameboard.gameSquers[Pieces[Pieces.size()-1]->start_pos[count]]);
        Pieces[Pieces.size()-2]->put_on_board(gameboard.gameSquers[Pieces[Pieces.size()-2]->start_pos[count]]);
        Pieces[Pieces.size()-3]->put_on_board(gameboard.gameSquers[Pieces[Pieces.size()-3]->start_pos[count]]);
        Pieces[Pieces.size()-4]->put_on_board(gameboard.gameSquers[Pieces[Pieces.size()-4]->start_pos[count]]);
        Pieces[Pieces.size()-5]->put_on_board(gameboard.gameSquers[Pieces[Pieces.size()-5]->start_pos[count]]);
        Pieces[Pieces.size()-6]->put_on_board(gameboard.gameSquers[Pieces[Pieces.size()-6]->start_pos[count]]);
        ++count;
    }

    Pieces.push_back(new class king_white());
    Pieces.push_back(new class king_black());
    Pieces.push_back(new class queen_black());
    Pieces.push_back(new class queen_white());


    Pieces[28]->put_on_board(gameboard.gameSquers[Pieces[28]->start_pos[0]]);
    Pieces[29]->put_on_board(gameboard.gameSquers[Pieces[29]->start_pos[0]]);
    Pieces[30]->put_on_board(gameboard.gameSquers[Pieces[30]->start_pos[0]]);
    Pieces[31]->put_on_board(gameboard.gameSquers[Pieces[31]->start_pos[0]]);
};
