#ifndef SQUARE_H
#define SQUARE_H
#include<QLabel>
#include<memory>

class pieces;

struct square
{
    square(QLabel*label);
    std::shared_ptr<pieces> direct_pieces;
    std::shared_ptr<QLabel>  direct_label;
    bool its_occupied;

};

#endif // SQUARE_H
