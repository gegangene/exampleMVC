//
// Created by ggn on 17/03/2023.
//

#ifndef EXAMPLEMVC_GAMECONTROLLER_H
#define EXAMPLEMVC_GAMECONTROLLER_H

#include <iostream>
#include <cstdio>
#include "gameModel.h"

class gameController {
    public:
        explicit gameController(gameModel&);
        void launch();
        void update();

    private:
        gameModel& model;

};


#endif //EXAMPLEMVC_GAMECONTROLLER_H
