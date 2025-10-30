#pragma once
#include "Point.hpp"
#include <iostream>

class Apple {
public:
    Point pos;

    Apple();
    Apple(int x, int y);
    Apple(const Apple& other);
    Apple& operator=(const Apple& other);

    bool operator==(const Apple& other) const;
    bool operator!=(const Apple& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Apple& a);
    friend std::istream& operator>>(std::istream& is, Apple& a);
};
