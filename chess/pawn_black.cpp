#include "pawn_black.h"

pawn_black::pawn_black()
{
    is_black=true;
    skin=QPixmap(":/resource/pawn_black");
    start_pos={48,49,50,51,52,53,54,55};
    move_possibility={-8};
}
