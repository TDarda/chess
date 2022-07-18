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
    std::shared_ptr<game_square>  direct_label;
    void set_direct_label(game_square* label);
    QString style;
    bool is_occupied = false;
    bool is_clicked = false;
    bool ready_to_go = false;
signals:

    void clicked();

public slots:
};

#endif // GAME_SQUARE_H
