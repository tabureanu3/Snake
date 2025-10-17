#pragma once
#include "Point.hpp"
#include "Direction.hpp"

struct Snake {
    Point segments[20];
    int length;

    Snake();
    Snake(const Snake& other);
    Snake& operator=(const Snake& other);

    void Move(Direction dir);
    Point Head() const;

    bool operator==(const Snake& other) const;
    bool operator!=(const Snake& other) const;
};
