#include "Board.hpp"
#include <cstdlib>  

Board::Board(int w, int h) : width(w), height(h) {
    srand(static_cast<unsigned int>(time(0))); // Seed for randomness
}

Point Board::GetRandomPosition() const {
    // Simple implementation for demonstration purposes
    return Point(rand() % width, rand() % height);
}

bool Board::IsInside(const Point& p) const {
    return p.GetX() >= 0 && p.GetX() < width 
        && p.GetY() >= 0 && p.GetY() < height;
}

int Board::GetWidth() const {
    return width;
}

int Board::GetHeight() const {
    return height;
}