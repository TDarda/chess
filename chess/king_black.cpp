#include "king_black.h"

king_black::king_black()
{
    is_black=true;
    skin=QPixmap(":/resource/king_black");
    start_pos={3};
    move_possibility={8};
}
