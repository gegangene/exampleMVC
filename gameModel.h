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
        int getPoints();
        int getLvl();
    private:
        long points;
        int lvl;

};


#endif //EXAMPLEMVC_GAMEMODEL_H
