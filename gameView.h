//
// Created by ggn on 17/03/2023.
//

#ifndef EXAMPLEMVC_GAMEVIEW_H
#define EXAMPLEMVC_GAMEVIEW_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
#include "gameModel.h"

class gameView
{
    public:
        explicit gameView(gameModel&);
        void update();
        void nextLvl();
        void ending();
    private:
        gameModel& model;
        void pointsShow();
        std::string progressBar();
};


#endif //EXAMPLEMVC_GAMEVIEW_H
