#pragma once
#include <vector>
#include "point.hpp"

class Board {
private:
    int width, height;

public:
    Board(int w = 20, int h = 20);

    Point GetRandomPosition() const;
    bool IsInside(const Point& p) const;

    int GetWidth() const;
    int GetHeight() const;
};

