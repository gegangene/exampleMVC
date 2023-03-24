//
// Created by ggn on 17/03/2023.
//

#ifndef EXAMPLEMVC_GAMEMODEL_H
#define EXAMPLEMVC_GAMEMODEL_H


class gameModel
{
    public:
        gameModel();
        void increasePoints(int);
        void increaseLvl();
        void resetClicks();
        long getPoints();
        int getLvl();
        int remainingClicks();
    private:
        long points;
        int lvl;
        int clicks;

};


#endif //EXAMPLEMVC_GAMEMODEL_H
