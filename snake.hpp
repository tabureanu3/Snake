#pragma once
#include <vector>
#include "Point.hpp"

enum Direction { Up, Down, Left, Right };

class Snake {
private:
    std::vector<Point> segments;
public:
    Snake();
    Snake(const Snake& other);
    Snake& operator=(const Snake& other);

    void Move(Direction dir);
    Point Head() const;

    bool operator==(const Snake& other) const;
    bool operator!=(const Snake& other) const;
};
