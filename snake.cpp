#include "snake.hpp"

Snake::Snake()
{
    length = 1;
    segments[0] = {5, 5}; // poziția inițială a capului
}

void Snake::Move(Direction dir) {}

Point Snake::Head() const {
    return segments[0];
}