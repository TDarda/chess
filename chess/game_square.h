#ifndef GAME_SQUARE_H
#define GAME_SQUARE_H

#include <QLabel>
#include <QWidget>
#include <QMouseEvent>

class pieces;

class game_square : public QLabel
{
   Q_OBJECT
public:
    game_square(QWidget * parent = 0);
    void mousePressEvent(QMouseEvent * event);
    std::shared_ptr<pieces> direct_pieces;
    std::shared_ptr<QLabel>  direct_label;
    void set_direct_label(QLabel* label);
    bool its_occupied;
signals:

    void clicked();

public slots:
};

#endif // GAME_SQUARE_H
