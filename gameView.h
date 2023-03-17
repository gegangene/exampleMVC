//
// Created by ggn on 17/03/2023.
//

#ifndef EXAMPLEMVC_GAMEVIEW_H
#define EXAMPLEMVC_GAMEVIEW_H

#include <iostream>
#include <stdlib.h>
#include "gameModel.h"

class gameView
{
    public:
        explicit gameView(gameModel&);
        void update();
    private:
        gameModel& model;
};


#endif //EXAMPLEMVC_GAMEVIEW_H
