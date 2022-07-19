#ifndef CHESS_H
#define CHESS_H
#include"board.h"
#include"pawn_white.h"
#include"pawn_black.h"
#include"rook_black.h"
#include"knight_black.h"
#include"bishop_black.h"
#include"rook_white.h"
#include"knight_white.h"
#include"bishop_white.h"
#include"king_black.h"
#include"queen_black.h"
#include"king_white.h"
#include"queen_white.h"


class square_handler;

class chess
{
public:
    chess();
    void set_pieces_on_board();
    board gameboard;
    std::vector<pieces*> Pieces;
};

#endif // CHESS_H
