#include "Board.hpp"

Board::Board(int w, int h) : width(w), height(h) {}
Board::Board(const Board& other) : width(other.width), height(other.height) {}

Board& Board::operator=(const Board& other) {
    if (this != &other) {
        width = other.width;
        height = other.height;
    }
    return *this;
}

bool Board::operator==(const Board& other) const {
    return width == other.width && height == other.height;
}

bool Board::operator!=(const Board& other) const {
    return !(*this == other);
}
