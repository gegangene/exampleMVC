//
// Created by ggn on 17/03/2023.
//

#include "gameModel.h"

gameModel::gameModel():points(0),lvl(1)
{
}

void gameModel::increasePoints(int a)
{
    this->points+=a;
}
void gameModel::increaseLvl()
{
    this->lvl++;
}

int gameModel::getPoints()
{
    return this->points;
}
int gameModel::getLvl()
{
    return this->lvl;
}
