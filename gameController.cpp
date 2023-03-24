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
            this->model.increasePoints(1);
            if(this->model.getPoints()%100==0)
                this->view.papaj();
            else
                this->view.update();
        }
    }
    while(input!=27);
    view.ending();
}
