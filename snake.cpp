#include "Snake.hpp"

Snake::Snake() {
    length = 1;
    segments[0] = {0, 0};
}

void Snake::Move(Direction dir) {
    Point head = segments[0];

    if (dir == Up) head.y--;
    else if (dir == Down) head.y++;
    else if (dir == Left) head.x--;
    else if (dir == Right) head.x++;

    
    for (int i = length; i > 0; --i) {
        segments[i] = segments[i - 1];
    }

    segments[0] = head;
}

Point Snake::Head() const {
    return segments[0];
}
