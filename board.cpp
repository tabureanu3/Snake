#include "Board.hpp"
#include <algorithm>

Board::Board(int w, int h) : width(w), height(h) {}

void Board::AddApple(const Point& p) {
    apples.push_back(p);
}

bool Board::HasApple(const Point& p) const {
    return std::find(apples.begin(), apples.end(), p) != apples.end();
}

void Board::RemoveApple(const Point& p) {
    apples.erase(std::remove(apples.begin(), apples.end(), p), apples.end());
}
