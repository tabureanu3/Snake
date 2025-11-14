#pragma once
#include <memory>

#include "Snake.hpp"
#include "Apple.hpp"
#include "Board.hpp"
#include "abstract_painter.hpp"

class GameEngine {
private:
    Snake _snake;
    Apple _apple;
    Board _board;
    std::unique_ptr<AbstractPainter> _painter;

public:
    GameEngine(int width, int height);

    void Init();
    void Run();

    Snake GetSnake() const;
    Apple GetApple() const;
    Board GetBoard() const;
};
