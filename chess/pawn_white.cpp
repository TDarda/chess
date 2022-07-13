#include "pawn_white.h"
#include <iostream>

pawn_white::pawn_white()
{
is_black=false;
skin=QPixmap(":/resource/pawn_white");
start_pos={8,9,10,11,12,13,14,15};
}
std::vector<int> pawn_white::return_move_possibility()
{
    return std::vector<int>{0};
}

void pawn_white::put_on_board(game_square * s)
{
    if(!s->its_occupied)
    {
        s->direct_label->setPixmap(QPixmap(":/resource/empty"));
        s->its_occupied=false;

        s->direct_pieces.reset(this);

        s->its_occupied=true;
        s->direct_label->setPixmap(skin);
        s->direct_label->setScaledContents(true);
    }

}

void pawn_white::start(std::vector<pieces*>& p, QList<game_square*> & s)
{
    for(int i=0;i<8;i++)
    {
        p.push_back(new pawn_white());
        p[i]->put_on_board(s[start_pos[i]]);

    }

}


