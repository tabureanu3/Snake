#include "Board.hpp"
#include <algorithm>  

Board::Board(int w, int h) : width(w), height(h) {}

void Board::AddApple(const Point& p) {
    apples.push_back(p);

    std::sort(apples.begin(), apples.end(), [](const Point& a, const Point& b) {
        if (a.GetX() == b.GetX())
            return a.GetY() < b.GetY();
        return a.GetX() < b.GetX();
    });
}

bool Board::HasApple(const Point& p) const {
    return std::any_of(apples.begin(), apples.end(),
                       [&](const Point& a) { return a == p; });
}

void Board::RemoveApple(const Point& p) {

    apples.erase(std::remove_if(apples.begin(), apples.end(),
                                [&](const Point& a) { return a == p; }),
                 apples.end());
}
