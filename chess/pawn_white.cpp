#include "pawn_white.h"
#include <iostream>

pawn_white::pawn_white()
{
is_black=false;
skin=QPixmap(":/resource/pawn_white");
start_pos={8,9,10,11,12,13,14,15};
}
std::vector<int> pawn_white::return_move_possibility()
{
    return std::vector<int>{0};
}






