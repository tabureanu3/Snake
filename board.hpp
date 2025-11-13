#pragma once
#include <vector>
#include "point.hpp"

class Board {
private:
    int width, height;
    std::vector<Point> apples;

public:
    Board(int w = 20, int h = 20);

    void AddApple(const Point& p);
    bool HasApple(const Point& p) const;
    void RemoveApple(const Point& p);

    int GetWidth() const { return width; }
    int GetHeight() const { return height; }

    const std::vector<Point>& GetApples() const { return apples; }
};

