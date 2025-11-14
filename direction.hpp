#pragma once

enum class Direction: char {
    Up      = 'w',
    Down    = 's',
    Left    = 'a',
    Right   = 'd'
};

Direction DirectionFromChar(char c);
char DirectionToChar(Direction dir);
