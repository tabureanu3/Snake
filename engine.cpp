#include "GameEngine.hpp"

GameEngine::GameEngine() : board(20, 20), apple(5, 5), snake() {}

void GameEngine::Init() {
    snake = Snake();
    apple = Apple(10, 10);
}
