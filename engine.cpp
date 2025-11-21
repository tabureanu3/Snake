#include "Engine.hpp"
#include "RaylibPainter.hpp"
#include "raylib.h"

#include <iostream>
#include <thread>
#include <chrono>
#include <string>

char _GetKeyPressed() {
    if (IsKeyPressed(KEY_UP)) return 'w';
    if (IsKeyPressed(KEY_DOWN)) return 's';
    if (IsKeyPressed(KEY_LEFT)) return 'a';
    if (IsKeyPressed(KEY_RIGHT)) return 'd';
    if (IsKeyPressed(KEY_ESCAPE)) return 27;
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
}

void GameEngine::Run() {
    std::cout << "Running game loop...\n";
    auto dir = Direction::Right;
    float elapsedTime = 0.0f;
    int score = 0;
    bool gameOver = false;

    const float moveDelay = 0.18f;
    float moveTimer = 0.0f;

    while (!WindowShouldClose() && !gameOver) {
        float deltaTime = GetFrameTime();
        elapsedTime += deltaTime;
        moveTimer += deltaTime;

        char key = _GetKeyPressed();
        if (key == 27) break;

        Direction newDir = dir;
        if (key != '\0')
            newDir = DirectionFromChar(key);

        
        if (!((dir == Direction::Up && newDir == Direction::Down) ||
              (dir == Direction::Down && newDir == Direction::Up) ||
              (dir == Direction::Left && newDir == Direction::Right) ||
              (dir == Direction::Right && newDir == Direction::Left))) {
            dir = newDir;
        }

    
        if (moveTimer >= moveDelay) {
            _snake.Move(dir);
            moveTimer = 0.0f;

        
            for (size_t i = 1; i < _snake.GetSegments().size(); ++i) {
                if (_snake.Head() == _snake.GetSegments()[i]) {
                    gameOver = true;
                    break;
                }
            }

            
            if (!_board.IsInside(_snake.Head())) {
                gameOver = true;
                break;
            }

            
            if (_snake.Head() == _apple.GetPosition()) {
                _snake.Grow();
                _apple = Apple(_board.GetRandomPosition());
                score++;
            }
        }

        Sprite sprite(_board.GetHeight(), std::string(_board.GetWidth(), '.'));
        sprite[_apple.GetPosition().GetY()][_apple.GetPosition().GetX()] = '@';
        for (const auto& segment : _snake.GetSegments())
            sprite[segment.GetY()][segment.GetX()] = 'o';
        sprite[_snake.Head().GetY()][_snake.Head().GetX()] = 'O';

        BeginDrawing();
        _painter->ClearScreen();
        _painter->RenderSprite(_snake.Head(), _apple.GetPosition(), sprite);

        std::string timeText = "Time: " + std::to_string((int)elapsedTime) + "s";
        std::string scoreText = "Score: " + std::to_string(score);
        DrawText(timeText.c_str(), 10, 10, 20, BLACK);
        DrawText(scoreText.c_str(), 600, 10, 20, DARKBLUE);
        EndDrawing();
    }

   
    BeginDrawing();
    ClearBackground((Color){30, 0, 0, 255});
    std::string finalText = "GAME OVER!";
    std::string scoreText = "Final Score: " + std::to_string(score);
    std::string timeText  = "Time: " + std::to_string((int)elapsedTime) + "s";
    int screenWidth  = GetScreenWidth();
    int screenHeight = GetScreenHeight();
    int textWidth1 = MeasureText(finalText.c_str(), 60);
    int textWidth2 = MeasureText(scoreText.c_str(), 30);
    int textWidth3 = MeasureText(timeText.c_str(), 30);
    DrawText(finalText.c_str(), (screenWidth - textWidth1) / 2, screenHeight / 2 - 100, 60, YELLOW);
    DrawText(scoreText.c_str(), (screenWidth - textWidth2) / 2, screenHeight / 2, 30, WHITE);
    DrawText(timeText.c_str(),  (screenWidth - textWidth3) / 2, screenHeight / 2 + 40, 30, LIGHTGRAY);
    DrawText("Press ESC to exit...", (screenWidth / 2) - 120, screenHeight / 2 + 100, 20, GRAY);
    EndDrawing();

    while (!WindowShouldClose()) {
        if (IsKeyPressed(KEY_ESCAPE)) break;
        BeginDrawing();
        ClearBackground((Color){30, 0, 0, 255});
        DrawText(finalText.c_str(), (screenWidth - textWidth1) / 2, screenHeight / 2 - 100, 60, YELLOW);
        DrawText(scoreText.c_str(), (screenWidth - textWidth2) / 2, screenHeight / 2, 30, WHITE);
        DrawText(timeText.c_str(),  (screenWidth - textWidth3) / 2, screenHeight / 2 + 40, 30, LIGHTGRAY);
        DrawText("Press ESC to exit...", (screenWidth / 2) - 120, screenHeight / 2 + 100, 20, GRAY);
        EndDrawing();
    }

    std::cout << "Game loop finished.\n";
}

Snake GameEngine::GetSnake() const { return _snake; }
Apple GameEngine::GetApple() const { return _apple; }
Board GameEngine::GetBoard() const { return _board; }
