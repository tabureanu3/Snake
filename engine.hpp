#pragma once
#include <memory>
#include "Snake.hpp"
#include "Apple.hpp"
#include "Board.hpp"
#include "Painter.hpp"

class GameEngine {
private:
    Snake _snake;
    Apple _apple;
    Board _board;
    Painter2D _painter;

public:
    GameEngine();

    void Init();
    void Run();

    Snake GetSnake() const;
    Apple GetApple() const;
    Board GetBoard() const;
};
