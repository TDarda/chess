#ifndef GAME_SQUARE_H
#define GAME_SQUARE_H

#include <QLabel>
#include <QWidget>
#include <QMouseEvent>
#include <QDebug>
#include <Qt>
class game_square : public QLabel
{
   Q_OBJECT
public:
    game_square(QWidget * parent = 0);

    void mousePressEvent(QMouseEvent * event);
signals:

    void clicked();

public slots:
};

#endif // GAME_SQUARE_H
