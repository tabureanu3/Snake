#pragma once
#include "Apple.hpp"
#include "Snake.hpp"
#include "Board.hpp"
#include "painter.hpp"

class GameEngine {
    Apple _apple;
    Snake _snake;
    Board _board;
    Painter2D _painter;

public:
    GameEngine();
    void Init();
    void Run();

    const Snake& getSnake() const { return _snake; }
    const Apple& getApple() const { return _apple; }
    const Board& getBoard() const { return _board; }
};
