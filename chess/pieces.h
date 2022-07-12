#ifndef PIECES_H
#define PIECES_H

#include<QPixmap>
#include "square.h"
#include "assets.h"

class pieces
{
    protected:
    QPixmap skin;

public:
    pieces();
    bool is_black;
    std::vector<int> move_possibility;
    virtual std::vector<int> return_move_possibility()=0;
    virtual void put_on_board(square * s)=0;
    virtual void start(std::vector<pieces*>& p, QList<square*> &gameSquers)=0;
    std::vector<unsigned>start_pos;

};

#endif // PIECES_H
