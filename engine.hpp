#pragma once
#include <memory>
#include "Snake.hpp"
#include "Apple.hpp"
#include "Board.hpp"
#include "Painter.hpp"

class GameEngine {
private:
    std::unique_ptr<Snake> _snake;
    std::unique_ptr<Apple> _apple;
    std::unique_ptr<Board> _board;
    Painter2D _painter;

public:
    GameEngine();

    void Init();
    void Run();

    Snake& getSnake();
    Apple& getApple();
    Board& getBoard();
};
