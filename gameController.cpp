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
    char input;
    system("/bin/stty raw");
    do
    {
        input=getchar();
        if(input==' ')
        {
            this->model.increasePoints(1*model.getLvl());
            if(this->model.getPoints()/model.getLvl()%100==0)
            {
                model.increaseLvl();
                this->view.papaj();
            }
            else
                this->view.update();
        }
    }
    while(input!=27);
    view.ending();
}
