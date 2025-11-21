#include "RaylibPainter.hpp"
#include "raylib.h"
#include <cmath>

RaylibPainter::RaylibPainter(int width, int height) {
    InitWindow(width * PIXEL_SIZE, height * PIXEL_SIZE, "Snake Game");
    SetTargetFPS(12);
}

RaylibPainter::~RaylibPainter() {
    CloseWindow();
}

void RaylibPainter::ClearScreen() {
    // fundal moale checkerboard, exact ca în Google Snake
    Color lightGreen = (Color){187, 220, 114, 255};
    Color darkGreen  = (Color){167, 205, 102, 255};
    int w = GetScreenWidth();
    int h = GetScreenHeight();

    for (int y = 0; y < h; y += PIXEL_SIZE) {
        for (int x = 0; x < w; x += PIXEL_SIZE) {
            bool even = ((x / PIXEL_SIZE) + (y / PIXEL_SIZE)) % 2 == 0;
            DrawRectangle(x, y, PIXEL_SIZE, PIXEL_SIZE, even ? lightGreen : darkGreen);
        }
    }
}

void RaylibPainter::RenderSprite(const Point& from, const Point& to, const Sprite& sprite) {
    for (size_t y = 0; y < sprite.size(); ++y) {
        for (size_t x = 0; x < sprite[y].size(); ++x) {
            char pixel = sprite[y][x];
            float px = static_cast<float>(x * PIXEL_SIZE);
            float py = static_cast<float>(y * PIXEL_SIZE);
            float cx = px + PIXEL_SIZE / 2.0f;
            float cy = py + PIXEL_SIZE / 2.0f;

            switch (pixel) {
                // 🍎 Măr rotund, lucios, cu frunză mică
                case '@': {
                    // umbră
                    DrawCircle(cx + 2, cy + 3, PIXEL_SIZE * 0.38f, (Color){0, 0, 0, 40});
                    // corp măr
                    DrawCircle(cx, cy, PIXEL_SIZE * 0.38f, (Color){230, 45, 35, 255});
                    // luciu
                    DrawCircle(cx - 5, cy - 5, PIXEL_SIZE * 0.1f, (Color){255, 255, 255, 160});
                    // codiță
                    DrawRectangle(cx - 1, cy - PIXEL_SIZE * 0.4f - 3, 2, 5, (Color){100, 60, 20, 255});
                    // frunză mică
                    DrawTriangle(
                        (Vector2){cx + 1, cy - PIXEL_SIZE * 0.4f - 2},
                        (Vector2){cx + 5, cy - PIXEL_SIZE * 0.4f - 5},
                        (Vector2){cx + 3, cy - PIXEL_SIZE * 0.4f + 1},
                        (Color){50, 160, 50, 255});
                    break;
                }

                // 🟦 Cap șarpe – formă netedă, cu ochi mari
                case 'O': {
                    // umbră
                    DrawCircle(cx + 2, cy + 2, PIXEL_SIZE * 0.42f, (Color){0, 0, 0, 35});
                    // corp
                    DrawRectangleRounded(
                        (Rectangle){px, py, PIXEL_SIZE, PIXEL_SIZE},
                        0.9f, 10, (Color){70, 120, 255, 255});

                    // ochi
                    DrawCircle(cx - 6, cy - 5, 3.5f, WHITE);
                    DrawCircle(cx + 6, cy - 5, 3.5f, WHITE);
                    DrawCircle(cx - 6, cy - 5, 1.7f, BLACK);
                    DrawCircle(cx + 6, cy - 5, 1.7f, BLACK);
                    break;
                }

                // 🔵 Corp șarpe – rotunjit perfect, fără goluri
                case 'o': {
                    DrawCircle(cx + 2, cy + 2, PIXEL_SIZE * 0.42f, (Color){0, 0, 0, 30});
                    DrawRectangleRounded(
                        (Rectangle){px, py, PIXEL_SIZE, PIXEL_SIZE},
                        0.9f, 10, (Color){70, 130, 255, 255});
                    break;
                }

                default:
                    break;
            }
        }
    }
}

void RaylibPainter::DisplayText(const Point& at, const std::string& message) {
    DrawText(message.c_str(), at.GetX(), at.GetY(), 20, BLACK);
}
