//
// Created by ggn on 17/03/2023.
//

#include "gameController.h"

gameController::gameController(gameModel& model):model(model)
{
}

void gameController::launch()
{
    update();
    std::string input;
    do
    {
        input=getchar();
        if(input=="\n")
        {
            this->model.increasePoints(1);
            this->update();
        }
    }
    while(input=="\n");

}


void gameController::update()
{
    system("clear");
    std::cout<<"Kliker konsolowy wersja wczesna alpha niewazne naprawde idz sobie stad czlowieku"<<std::endl;
    std::cout<<"Points: "<<this->model.getPoints()<<"\n";

}
