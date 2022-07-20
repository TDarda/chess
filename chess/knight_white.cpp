#include "knight_white.h"

knight_white::knight_white()
{
    is_black=false;
    skin=QPixmap(":/resource/knight_white");
    start_pos={1,6};
    move_possibility={{2,-1},{2,1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
}
