#include "direction.hpp"

#include <stdexcept>

Direction DirectionFromChar(char c) {
    switch (c) {
        case 'w': return Direction::Up;
        case 's': return Direction::Down;
        case 'a': return Direction::Left;
        case 'd': return Direction::Right;
        default: throw std::invalid_argument("Invalid character for Direction");
    }
}

char DirectionToChar(Direction dir) {
    return static_cast<char>(dir);
}