#include "knight_black.h"

knight_black::knight_black()
{
    is_black=true;
    skin=QPixmap(":/resource/knight_black");
    start_pos={1,6};
    //move_possibility={8};
}
