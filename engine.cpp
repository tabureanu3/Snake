#include "Engine.hpp"
#include <iostream>
#include <thread>
#include <chrono>

GameEngine::GameEngine()
    : _snake(),
    _apple(10, 10),
    _board(20, 20) {
}

void GameEngine::Init() {
    std::cout << "Game initialized successfully.\n";
    _painter.DisplayText({ 2, 2 }, "Snake Game Started!");
}

void GameEngine::Run() {
    std::cout << " Running game loop...\n";
    for (int i = 0; i < 10; i++) {
        _painter.ClearScreen();
        _snake.Move(Right);

        Sprite sprite (_board.GetHeight(), std::string(_board.GetWidth(), '.'));

        // set apple
        sprite[_apple.GetPosition().GetY()][_apple.GetPosition().GetX()] = '@';

        // set snake
        for (const auto& segment : _snake.GetSegments()) {
            sprite[segment.GetY()][segment.GetX()] = 'o';
        }
        sprite[_snake.Head().GetY()][_snake.Head().GetX()] = 'O';

        _painter.RenderSprite(_snake.Head(), _apple.GetPosition(), sprite);
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
    std::cout << "Game loop finished.\n";
}

Snake GameEngine::GetSnake() const { return _snake; }
Apple GameEngine::GetApple() const { return _apple; }
Board GameEngine::GetBoard() const { return _board; }