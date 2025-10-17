#include <iostream>
#include "engine.hpp"

int main() {
    GameEngine game;
    game.Init();

    std::cout << "Snake head: " 
              << game.getSnake().Head() << "\n";

    std::cout << "Apple: " 
              << game.getApple().pos << "\n";

    std::cout << "Board size: " 
              << game.getBoard().width << "x" 
              << game.getBoard().height << "\n";

    game.Run();
    return 0;
}
