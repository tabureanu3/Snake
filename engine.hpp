#pragma once
#include "apple.hpp"
#include "snake.hpp"
#include "board.hpp"

class GameEngine {
   Apple _apple;
   Snake _snake;
   Board _board;
public:
   GameEngine();
   void Init();
   void Run();
   const Snake& getSnake() const { return _snake; }
   const Apple& getApple() const { return _apple; }
   const Board& getBoard() const { return _board; }
}; 