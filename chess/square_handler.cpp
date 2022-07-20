#include "square_handler.h"


square_handler::square_handler()
{

}

void square_handler::set_gameboard(std::vector<std::vector<game_square *>> gs)
{
gameboard=gs;
}

void square_handler::show_moves(game_square * gs)
{

    for(uint i = 0; i < gs->direct_pieces->move_possibility.size(); i++)
    {
        int big_vec = position.first + gs->direct_pieces->move_possibility[i].first;
        int small_vec = position.second + gs->direct_pieces->move_possibility[i].second;
        if(find_helper(gameboard, gameboard[big_vec][small_vec])!=nullptr)
        {
        possible_move.push_back(gameboard[big_vec][small_vec]);
        }

    }
    for(auto it : possible_move)
    {
        it->setStyleSheet("background-color : red;");
        it->ready_to_go=true;
    }
}

void square_handler::hide_moves()
{
    for(auto it : possible_move)
    {
        it->setStyleSheet(it->style);
        it->ready_to_go=false;
    }
    possible_move.clear();
}

game_square* square_handler::find_helper(std::vector<std::vector<game_square *>> gs, game_square* wanted)
{

    std::vector<game_square *>::iterator result;
    for(int i = 0; i < 8; i++)
    {
        result = std::find(gs[i].begin(), gs[i].end(), wanted);
        if(result != gs[i].end())
        {
            position.first = i;
            for(uint j = 0; j < gs[i].size(); j++)
            {
                if(gs[i][j]==wanted)
                    position.second=j;
            }
            return *result;
        }
    }
    return nullptr;
}

void square_handler::mark_and_show_moves(game_square * gs)
{
    if(gs->is_occupied){

    if(handler!=nullptr&& handler->is_clicked)
        {
            handler->setStyleSheet(handler->style);
            handler->is_clicked=false;
            hide_moves();

        }
      handler = find_helper(gameboard, gs);

      handler->is_clicked=true;
      handler->setStyleSheet("background-color : blue;");
      show_moves(handler);
}
}









