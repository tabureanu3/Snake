#include "Engine.hpp"
#include <iostream>

int main() {
    GameEngine game;
    game.Init();

    std::cout << "Snake head: " << game.GetSnake().Head() << "\n";
    std::cout << "Apple: " << game.GetApple().GetPosition() << "\n";
    std::cout << "Board size: " 
              << game.GetBoard().GetWidth() << "x" 
              << game.GetBoard().GetHeight() << "\n";
    game.Run();
    return 0;
}
