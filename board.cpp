#include "Board.hpp"
#include <cstdlib>  

Board::Board(int w, int h) : width(w), height(h) {
    srand(static_cast<unsigned int>(time(0))); 
}

Point Board::GetRandomPosition() const {
    
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