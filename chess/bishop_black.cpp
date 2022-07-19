#include "bishop_black.h"

bishop_black::bishop_black()
{
    is_black=true;
    skin=QPixmap(":/resource/bishop_black");
    start_pos={2,5};
    move_possibility={8};
}
