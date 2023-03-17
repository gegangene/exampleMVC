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
    //system("stty raw");
    do
    {
        input=getchar_unlocked();
        if(input=='\n')
        {
            this->model.increasePoints(1);
            this->view.update();
        }
    }
    while(input=='\n');
}
