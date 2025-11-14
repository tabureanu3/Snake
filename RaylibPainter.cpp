#include "RaylibPainter.hpp"

#include "raylib.h"

RaylibPainter::RaylibPainter(int width, int height) {
    InitWindow(width * PIXEL_SIZE, height * PIXEL_SIZE, "Snake Game");
}

RaylibPainter::~RaylibPainter() {
    CloseWindow();
}

void RaylibPainter::ClearScreen() {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    EndDrawing();
}

void RaylibPainter::RenderSprite(const Point& from, const Point& to, const Sprite& sprite) {
    BeginDrawing();
    for (size_t y = 0; y < sprite.size(); ++y) {
        for (size_t x = 0; x < sprite[y].size(); ++x) {
            char pixel = sprite[y][x];
            Color color;
            switch (pixel) {
                case 'O': color = RED; break;      // Snake head
                case 'o': color = DARKGREEN; break; // Snake body
                case '@': color = BLUE; break;     // Apple
                case '.': color = LIGHTGRAY; break; // Empty space
                default: color = BLACK; break;
            }
            DrawRectangle(x * PIXEL_SIZE, y * PIXEL_SIZE, PIXEL_SIZE, PIXEL_SIZE, color);
        }
    }
    EndDrawing();
}

void RaylibPainter::DisplayText(const Point& at, const std::string& message) {
    BeginDrawing();
    DrawText(message.c_str(), at.GetX() * PIXEL_SIZE, at.GetY() * PIXEL_SIZE, PIXEL_SIZE, BLACK);
    EndDrawing();
}