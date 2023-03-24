//
// Created by ggn on 17/03/2023.
//

#ifndef EXAMPLEMVC_GAMECONTROLLER_H
#define EXAMPLEMVC_GAMECONTROLLER_H

#include "gameModel.h"
#include "gameView.h"

class gameController
{
    public:
    explicit gameController(gameModel&, gameView&);
    void launch();

    private:
        gameModel& model;
        gameView& view;

};


#endif //EXAMPLEMVC_GAMECONTROLLER_H
