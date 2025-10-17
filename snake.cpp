#include "Snake.hpp"

Snake::Snake() {
    length = 1;
    segments[0] = {5, 5};
}

Snake::Snake(const Snake& other) {
    length = other.length;
    for (int i = 0; i < length; i++) segments[i] = other.segments[i];
}

Snake& Snake::operator=(const Snake& other) {
    if (this != &other) {
        length = other.length;
        for (int i = 0; i < length; i++) segments[i] = other.segments[i];
    }
    return *this;
}

void Snake::Move(Direction dir) {
    Point newHead = segments[0];
    switch (dir) {
        case Up:    newHead.y--; break;
        case Down:  newHead.y++; break;
        case Left:  newHead.x--; break;
        case Right: newHead.x++; break;
    }
    for (int i = length - 1; i > 0; i--) segments[i] = segments[i - 1];
    segments[0] = newHead;
}

Point Snake::Head() const {
    return segments[0];
}

bool Snake::operator==(const Snake& other) const {
    if (length != other.length) return false;
    for (int i = 0; i < length; i++)
        if (segments[i] != other.segments[i]) return false;
    return true;
}

bool Snake::operator!=(const Snake& other) const {
    return !(*this == other);
}
