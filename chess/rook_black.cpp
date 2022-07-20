#include "rook_black.h"

rook_black::rook_black()
{
    is_black=true;
    skin=QPixmap(":/resource/rook_black");
    start_pos={0,7};
    //move_possibility={8};
}
