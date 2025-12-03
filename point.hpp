/**
 * @file Point.hpp
 * @brief Clasă pentru coordonate bidimensionale.
 *
 * Proiect: Snake Game
 * Autor: Lavinia Tabureanu
 * An: 2025
 */

#pragma once

#include <iostream>
#include <string>

class Point {
    int x, y;

public:
    Point(int x = 0, int y = 0);
    Point(const Point& other);
    Point& operator=(const Point& other);

    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    int GetX() const;
    int GetY() const;

    std::string ToString() const;
};

std::ostream& operator<<(std::ostream& os, const Point& p);
std::istream& operator>>(std::istream& is, Point& p);
