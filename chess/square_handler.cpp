#include "square_handler.h"


square_handler::square_handler()
{

}

void square_handler::set_gameboard(std::vector<game_square *> gs)
{
gameboard=gs;
}

void square_handler::show_moves(game_square * gs)
{
auto temp = (std::find(std::begin(gameboard), std::end(gameboard), gs));
    for(uint i = 0; i < gs->direct_pieces->move_possibility.size(); i++)
    {
        possible_move.push_back(*(temp+gs->direct_pieces->move_possibility[i]));
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

void square_handler::mark_and_show_moves(game_square * gs)
{
    if(gs->is_occupied){

    if(handler!=nullptr&& handler->is_clicked)
        {
            handler->setStyleSheet(handler->style);
            handler->is_clicked=false;
            hide_moves();

        }
      handler = *(std::find(std::begin(gameboard), std::end(gameboard), gs));

      handler->is_clicked=true;
      handler->setStyleSheet("background-color : black;");
      show_moves(handler);
}
}









