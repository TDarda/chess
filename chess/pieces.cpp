#include "pieces.h"

pieces::pieces()
{

}

void pieces::put_on_board(game_square *s)
{
    if(!(s->is_occupied))
    {
        s->direct_label->setPixmap(QPixmap(":/resource/empty"));
        s->is_occupied=false;

        s->direct_pieces.reset(this);

        s->direct_label->setPixmap(skin);
        s->direct_label->setScaledContents(true);
        s->is_occupied=true;
        std::cout<<s->is_occupied<<" from pieces.cpp"<<std::endl;
    }
}
