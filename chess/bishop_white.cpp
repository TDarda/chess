#include "bishop_white.h"

bishop_white::bishop_white()
{
    is_black=false;
    skin=QPixmap(":/resource/bishop_white");
    start_pos={58,61};
    move_possibility={-8};
}
