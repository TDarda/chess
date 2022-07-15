#include "board.h"




board::board()
{

}
void board::setGameSquares(QList<QLabel*> list)
{
    for(int i = 0;i<list.size();i++)
    {
        gameSquers.push_back(new game_square());
        gameSquers[i]->set_direct_label(list[i]);

    }


}

bool labelLessThan( game_square *l1,  game_square *l2)
{
    auto leftStr = l1->direct_label->objectName().toStdString();
    auto rightStr = l2->direct_label->objectName().toStdString();
    int leftInt, rightInt;
    if(leftStr.size()==9)
    {
         leftInt = std::stoi(leftStr.substr(7,8).c_str());
    }
    else
    {
         leftInt = std::stoi(leftStr.substr(7,7).c_str());
    }
    if(rightStr.size()==9)
    {
        rightInt = std::stoi(rightStr.substr(7,8).c_str());
    }
    else
    {
         rightInt = std::stoi(rightStr.substr(7,7).c_str());
    }
    return leftInt <rightInt;
}

void board::wypisz()
{
    std::sort(gameSquers.begin(), gameSquers.end(), labelLessThan);

    for(auto i = 0;i<gameSquers.size(); i++)
    {
        auto temp = gameSquers.at(i)->direct_label->objectName().toStdString();
        std::cout<<temp<<std::endl;
    }
}
