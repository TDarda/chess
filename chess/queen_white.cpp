#include "queen_white.h"

queen_white::queen_white()
{
    is_black=false;
    skin=QPixmap(":/resource/queen_white");
    start_pos={59};
    move_possibility={-8};
}
