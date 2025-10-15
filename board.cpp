#include "Board.hpp"
#include <iostream>

Board::Board(int w, int h) : width(w), height(h) {}
Board::Board(const Board& b) : width(b.width), height(b.height) {}
Board& Board::operator=(const Board& b) {
    if(this != &b) {
        width = b.width;
        height = b.height;
    }
    return *this;
}

bool Board::operator==(const Board& b) const { return width==b.width && height==b.height; }
bool Board::operator!=(const Board& b) const { return !(*this==b); }

void Board::render() const {
    std::cout << "Board size: " << width << "x" << height << std::endl;
}

std::istream& operator>>(std::istream& in, Board& b) { in >> b.width >> b.height; return in; }
std::ostream& operator<<(std::ostream& out, const Board& b) { out << "[" << b.width << "x" << b.height << "]"; return out; }
