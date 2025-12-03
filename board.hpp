/**
 * @file Board.hpp
 * @brief Gestionarea tablei de joc (dimensiuni și coliziuni).
 *
 * Proiect: Snake Game
 * Autor: Lavinia Tabureanu
 * An: 2025
 */

#pragma once
#include <vector>
#include "point.hpp"

class Board {
private:
    int width, height;

public:
    /** Creează tabla cu dimensiuni date. */
    Board(int w = 20, int h = 20);

    /** Generează o poziție aleatoare pe tablă. */
    Point GetRandomPosition() const;

    /** Verifică dacă punctul este în interiorul tablei. */
    bool IsInside(const Point& p) const;

    int GetWidth() const;
    int GetHeight() const;
};
