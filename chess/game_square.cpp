#include "game_square.h"

game_square::game_square(QWidget * parent)
    :  QLabel(parent)
{
    style = this->styleSheet();
}

void game_square::mousePressEvent(QMouseEvent *event)
{
    emit clicked();
}

void game_square::set_direct_label(game_square* label)
{
    direct_label.reset(label);
}
