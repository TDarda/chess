#include "king_white.h"

king_white::king_white()
{
    is_black=false;
    skin=QPixmap(":/resource/king_white");
    start_pos={60};
    move_possibility={-8};
}
