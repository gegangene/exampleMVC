//
// Created by ggn on 17/03/2023.
//

#ifndef EXAMPLEMVC_GAMEMODEL_H
#define EXAMPLEMVC_GAMEMODEL_H


class gameModel {
    public:
        gameModel();
        void increasePoints(int);
        int getPoints();
    private:
        int points;
};


#endif //EXAMPLEMVC_GAMEMODEL_H
