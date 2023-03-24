//
// Created by ggn on 17/03/2023.
//

#include "gameController.h"

gameController::gameController(gameModel &model, gameView &view): model(model), view(view)
{
}

void gameController::launch()
{
    this->view.update();
    int input;
    do
    {
        input=_getch();
        if(input==32)
        {
            this->model.increasePoints(1*model.getLvl());
            if(this->model.remainingClicks()==0)
            {
                model.resetClicks();
                model.increaseLvl();
                this->view.nextLvl();
            }
            else
                this->view.update();
        }
    }
    while(input!=27);
    view.ending();
}
