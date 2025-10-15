#pragma once
#include "Renderable.hpp"
#include <iostream>

struct Board : public Renderable {
    int width;
    int height;

    Board(int w = 20, int h = 20);
    Board(const Board& b);
    Board& operator=(const Board& b);

    bool operator==(const Board& b) const;
    bool operator!=(const Board& b) const;

    void render() const override;
};

std::istream& operator>>(std::istream& in, Board& b);
std::ostream& operator<<(std::ostream& out, const Board& b);
