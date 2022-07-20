#ifndef SQUARE_HANDLER_H
#define SQUARE_HANDLER_H

#include "chess.h"

class square_handler
{
public:
    square_handler();
    void set_gameboard(std::vector<std::vector<game_square*>> gs);
    game_square* handler = nullptr;
    std::vector<std::vector<game_square*>> gameboard;
    std::vector<game_square*> possible_move;
    game_square* find_helper(std::vector<std::vector<game_square *>> gs, game_square* wanted);
    std::pair<int,int> position;
    void mark_and_show_moves(game_square*);
    void show_moves(game_square*);
    void hide_moves();
};

#endif // SQUARE_HANDLER_H
