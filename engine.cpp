#include "engine.hpp"
#include <iostream>
#include <windows.h>

GameEngine::GameEngine() : _apple(10, 10), _board(20, 20) {}

void GameEngine::Init() {
    std::cout << "Game initialized.\n";
    _painter.DisplayText({2, 2}, "Snake Game Started");
}

void GameEngine::Run() {
    bool running = true;
    int step = 0;

    while (running && step < 3) {
        _snake.Move(Right);
        _painter.RenderSprite(_snake.Head(), _apple.pos, nullptr);
        Sleep(300);
        step++;
    }
}
