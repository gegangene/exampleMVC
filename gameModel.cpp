//
// Created by ggn on 17/03/2023.
//

#include "gameModel.h"

gameModel::gameModel()
{
    this->points=0
}

void gameModel::increasePoints(int a)
{
    this->points+=a;
}

int gameModel::getPoints()
{
    return this->points;
}
