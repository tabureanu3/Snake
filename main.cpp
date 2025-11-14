#include "Engine.hpp"
#include <iostream>

int main() {
    int width = 30;
    int height = 20;
    GameEngine game(width, height);
    game.Init();
    game.Run();
    return 0;
}
