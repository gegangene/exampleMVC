#include <iostream>
#include "gameController.h"

using namespace std;

int main()
{
    gameModel model;
    gameView view(model);
    gameController controller(model, view);
    controller.launch();
    //view.papaj();
    return 0;
}