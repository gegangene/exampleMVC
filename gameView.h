//
// Created by ggn on 17/03/2023.
//

#ifndef EXAMPLEMVC_GAMEVIEW_H
#define EXAMPLEMVC_GAMEVIEW_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "gameModel.h"

class gameView
{
    public:
        explicit gameView(gameModel&);
        void update();
        void papaj();
        void ending();
    private:
        gameModel& model;
        void pointsShow();
};


#endif //EXAMPLEMVC_GAMEVIEW_H
