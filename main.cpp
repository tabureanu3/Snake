#include "Engine.hpp"
#include <iostream>

int main() {
    GameEngine game;
    game.Init();

    std::cout << "Snake head: " << game.getSnake().Head() << "\n";
    std::cout << "Apple: " << game.getApple().pos << "\n";
    std::cout << "Board size: " 
              << game.getBoard().GetWidth() << "x" 
              << game.getBoard().GetHeight() << "\n";

    game.Run();
    return 0;
}
