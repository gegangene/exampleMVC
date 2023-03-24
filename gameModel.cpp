//
// Created by ggn on 17/03/2023.
//

#include "gameModel.h"

gameModel::gameModel():points(0), lvl(1), clicks(0)
{
}

void gameModel::increasePoints(int a)
{
    this->points+=a;
    this->clicks++;
}
void gameModel::increaseLvl()
{
    this->lvl++;
}
void gameModel::resetClicks()
{
    this->clicks=0;
}

long gameModel::getPoints()
{
    return this->points;
}
int gameModel::getLvl()
{
    return this->lvl;
}
int gameModel::remainingClicks()
{
    return this->lvl*100-this->clicks;
}