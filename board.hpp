#pragma once

struct Board {
    int width;
    int height;

    Board(int w = 20, int h = 20);
    Board(const Board& other);
    Board& operator=(const Board& other);

    bool operator==(const Board& other) const;
    bool operator!=(const Board& other) const;
};
