#pragma once
#pragma once
#include "Point.hpp"
#include "Direction.hpp"

struct Snake {
    Point segments[20];  // pozițiile corpului
    int length;          // lungimea curentă

    Snake();             // constructor
    void Move(Direction dir);
    Point Head() const;
};
