#include "Engine.hpp"
#include <iostream>
#include <thread>
#include <chrono>

GameEngine::GameEngine()
    : _snake(),
      _apple(10, 10),
      _board(20, 20) {}

void GameEngine::Init() {
    std::cout << "Game initialized successfully.\n";
    _painter.DisplayText({2, 2}, "Snake Game Started!");
}

void GameEngine::Run() {
    std::cout << " Running game loop...\n";
    for (int i = 0; i < 3; i++) {
        _snake.Move(Right);
        _painter.RenderSprite(_snake.Head(), _apple.GetPosition(), "snake");
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
    std::cout << "Game loop finished.\n";
}

Snake GameEngine::GetSnake() const { return _snake; }
Apple GameEngine::GetApple() const { return _apple; }
Board GameEngine::GetBoard() const { return _board; }