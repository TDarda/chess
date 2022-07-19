#include "knight_white.h"

knight_white::knight_white()
{
    is_black=false;
    skin=QPixmap(":/resource/knight_white");
    start_pos={57,62};
    move_possibility={-17,-15,-10,-6,6,10,15,17};
}
