#include "Snake.hpp"
#include <algorithm>

Snake::Snake() {
    segments.push_back({5, 5});
}

Snake::Snake(const Snake& other) : segments(other.segments) {}
Snake& Snake::operator=(const Snake& other) {
    if (this != &other)
        segments = other.segments;
    return *this;
}

void Snake::Move(Direction dir) {
    Point newHead = segments.front();
    switch (dir) {
        case Up:    newHead = Point(newHead.GetX(), newHead.GetY() - 1); break;
        case Down:  newHead = Point(newHead.GetX(), newHead.GetY() + 1); break;
        case Left:  newHead = Point(newHead.GetX() - 1, newHead.GetY()); break;
        case Right: newHead = Point(newHead.GetX() + 1, newHead.GetY()); break;
    }

    if (segments.size() > 1)
        std::rotate(segments.rbegin(), segments.rbegin() + 1, segments.rend());
    segments[0] = newHead;
}

Point Snake::Head() const {
    return segments.front();
}

bool Snake::operator==(const Snake& other) const {
    return segments == other.segments;
}
bool Snake::operator!=(const Snake& other) const {
    return !(*this == other);
}
