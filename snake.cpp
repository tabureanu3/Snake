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
        case Direction::Up:    newHead = Point(newHead.GetX(), newHead.GetY() - 1); break;
        case Direction::Down:  newHead = Point(newHead.GetX(), newHead.GetY() + 1); break;
        case Direction::Left:  newHead = Point(newHead.GetX() - 1, newHead.GetY()); break;
        case Direction::Right: newHead = Point(newHead.GetX() + 1, newHead.GetY()); break;
    }

    // deplasare lină fără spații
    for (size_t i = segments.size() - 1; i > 0; --i)
        segments[i] = segments[i - 1];

    segments[0] = newHead;
}

Point Snake::Head() const { return segments.front(); }

void Snake::Grow() {
    // adăugăm un nou segment exact în spatele ultimului, lipit
    Point tail = segments.back();
    segments.push_back(tail);
}

const std::vector<Point>& Snake::GetSegments() const { return segments; }

bool Snake::operator==(const Snake& other) const { return segments == other.segments; }
bool Snake::operator!=(const Snake& other) const { return !(*this == other); }
