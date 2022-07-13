#include "game_square.h"

game_square::game_square(QWidget * parent)
    : QLabel(parent)
{

}

void game_square::mousePressEvent(QMouseEvent *event)
{
        emit clicked();
}
