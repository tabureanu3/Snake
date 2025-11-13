#include "Engine.hpp"
#include <iostream>
#include <thread>
#include <chrono>

GameEngine::GameEngine()
    : _snake(std::make_unique<Snake>()),
      _apple(std::make_unique<Apple>(10, 10)),
      _board(std::make_unique<Board>(20, 20)) {}

void GameEngine::Init() {
    std::cout << "Game initialized successfully.\n";
    _painter.DisplayText({2, 2}, "Snake Game Started!");
}

void GameEngine::Run() {
    std::cout << " Running game loop...\n";
    for (int i = 0; i < 3; i++) {
        _snake->Move(Right);
        _painter.RenderSprite(_snake->Head(), _apple->pos, "snake");
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
    std::cout << "Game loop finished.\n";
}

Snake& GameEngine::getSnake() { return *_snake; }
Apple& GameEngine::getApple() { return *_apple; }
Board& GameEngine::getBoard() { return *_board; }
