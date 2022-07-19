#include "pawn_black.h"

pawn_black::pawn_black()
{
    is_black=true;
    skin=QPixmap(":/resource/pawn_black");
    start_pos={8,9,10,11,12,13,14,15};
    move_possibility={8};
}
