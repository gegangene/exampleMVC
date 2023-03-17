#include <iostream>
#include "gameController.h"

using namespace std;

int main()
{
    gameModel model;
    gameController controller(model);
    controller.launch();
    return 0;
}