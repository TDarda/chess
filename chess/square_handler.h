#ifndef SQUARE_HANDLER_H
#define SQUARE_HANDLER_H

#include "chess.h"

class square_handler
{
public:
    square_handler();
    void set_gameboard(std::vector<game_square*> gs);
    game_square* handler = nullptr;
    std::vector<game_square*> gameboard;
    std::vector<game_square*> possible_move;
    void mark_and_show_moves(game_square*);
    void show_moves(game_square*);
    void hide_moves();
};

#endif // SQUARE_HANDLER_H
