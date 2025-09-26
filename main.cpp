#include <iostream>
#include "GameEngine.hpp"

int main() {
    GameEngine game;
    game.Init();

    std::cout << "Snake head: (" 
              << game.snake.Head().x << ", " 
              << game.snake.Head().y << ")\n";

    std::cout << "Apple: (" 
              << game.apple.pos.x << ", " 
              << game.apple.pos.y << ")\n";

    std::cout << "Board size: " 
              << game.board.width << "x" 
              << game.board.height << "\n";

    return 0;
}
