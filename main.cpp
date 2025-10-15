#include <iostream>
#include "engine.hpp"

int main() {
    GameEngine game;
    game.Init();

    std::cout << "Snake head: (" 
              << game.getSnake().Head().x << ", " 
              << game.getSnake().Head().y << ")\n";

    std::cout << "Apple: (" 
              << game.getApple().pos.x << ", " 
              << game.getApple().pos.y << ")\n";

    std::cout << "Board size: " 
              << game.getBoard().width << "x" 
              << game.getBoard().height << "\n";

    game.Run();

    return 0;
}