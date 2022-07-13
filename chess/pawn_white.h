#ifndef PAWN_WHITE_H
#define PAWN_WHITE_H
#include "pieces.h"

class pawn_white : public pieces
{
public:
    pawn_white();
    std::vector<int> return_move_possibility() override;
    void put_on_board(game_square * s) override;
    void start(std::vector<pieces*>& p, QList<game_square*> &gameSquers) override;

};

#endif // PAWN_WHITE_H
