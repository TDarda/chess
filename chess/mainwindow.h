#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QRegularExpression>
#include "chess.h"
#include "game_square.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    chess game;
    ~MainWindow();

private slots:
    void mouse_pressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
