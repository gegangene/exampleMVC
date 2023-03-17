//
// Created by ggn on 17/03/2023.
//


#include "gameView.h"

gameView::gameView(gameModel& model):model(model)
{
}

void gameView::update()
{
    system("clear");
    std::cout<<"Kliker konsolowy wersja wczesna alpha niewazne naprawde idz sobie stad czlowieku"<<"\n";
    std::cout<<"Points: "<<model.getPoints()<<"\n";
}
