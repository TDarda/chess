#include "rook_white.h"

rook_white::rook_white()
{
    is_black=false;
    skin=QPixmap(":/resource/rook_white");
    start_pos={0,7};
    //move_possibility={-8};
}
