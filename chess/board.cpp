#include "board.h"




board::board()
{

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
    return leftInt < rightInt;
}

void board::setGameSquares(QList<game_square*> list)
{
    std::vector<game_square *> sorted_list;
    for(auto i = 0; i < list.size(); i++)
    {
        sorted_list.push_back(list[i]);
        sorted_list[i]->set_direct_label(list[i]);
    }
    std::sort(sorted_list.begin(), sorted_list.end(), labelLessThan);
    std::vector<game_square *> temp;
    int count = 0;
    for(int i = 0;i<8;i++)
    {
        for(int j = 0; j < 8; j++)
        {
        temp.push_back(sorted_list[count]);
        temp[j]->style = sorted_list[count]->styleSheet();
        count++;
        }
        gameSquers.push_back(temp);
        temp.clear();
    }
}

void board::wypisz()
{
    for(auto i = 0;i<8; i++)
    {
        for(auto j = 0; j < 8; j++)
        {
        auto temp = gameSquers[i].at(j)->direct_label->objectName().toStdString();
        std::cout<<temp<<std::endl;
        }
    }
}
