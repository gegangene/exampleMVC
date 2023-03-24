#include "gameController.h"

using namespace std;

int main()
{
    gameModel model;
    gameView view(model);
    gameController controller(model, view);
    controller.launch();
    return 0;
}