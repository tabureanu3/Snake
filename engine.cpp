#include "Engine.hpp"
#include "RaylibPainter.hpp"
#include "raylib.h"

#include <iostream>
#include <thread>
#include <chrono>

char _GetKeyPressed() {
    if(IsKeyDown(KEY_UP)) return 'w';
    if(IsKeyDown(KEY_DOWN)) return 's';
    if(IsKeyDown(KEY_LEFT)) return 'a';
    if(IsKeyDown(KEY_RIGHT)) return 'd';
    if(IsKeyDown(KEY_ESCAPE)) return 27;
    return '\0';
}

GameEngine::GameEngine(int width, int height)
    : _snake(),
    _apple(10, 10),
    _board(width, height),
    _painter(std::make_unique<RaylibPainter>(width, height)) {
}

void GameEngine::Init() {
    std::cout << "Game initialized successfully.\n";
    _painter->DisplayText({ 2, 2 }, "Snake Game Started!");
}

void GameEngine::Run() {
    std::cout << " Running game loop...\n";
    auto dir = Direction::Right;
    while(true) {
        _painter->ClearScreen();
        char key = _GetKeyPressed();
        if(key == 27) { // ESC key
            break;
        }

        dir = (key != '\0') ? DirectionFromChar(key) : dir;

        _snake.Move(dir);

        // check collisions
        if(!_board.IsInside(_snake.Head())) {
            std::cout << "Snake hit the wall! Game Over.\n";
            break;
        }

        // try to eat apple
        if(_snake.Head() == _apple.GetPosition()) {
            _snake.Grow();
            _apple = Apple(_board.GetRandomPosition());
        }

        Sprite sprite (_board.GetHeight(), std::string(_board.GetWidth(), '.'));

        // set apple
        sprite[_apple.GetPosition().GetY()][_apple.GetPosition().GetX()] = '@';

        // set snake
        for (const auto& segment : _snake.GetSegments()) {
            sprite[segment.GetY()][segment.GetX()] = 'o';
        }
        sprite[_snake.Head().GetY()][_snake.Head().GetX()] = 'O';

        _painter->RenderSprite(_snake.Head(), _apple.GetPosition(), sprite);
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
    std::cout << "Game loop finished.\n";
}

Snake GameEngine::GetSnake() const { return _snake; }
Apple GameEngine::GetApple() const { return _apple; }
Board GameEngine::GetBoard() const { return _board; }