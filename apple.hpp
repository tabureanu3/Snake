#pragma once

#include "Point.hpp"

#include <iostream>
#include <string>

class Apple {
    Point pos;
public:

    Apple();
    Apple(int x, int y);
    Apple(const Point& point);
    Apple(const Apple& other);
    Apple& operator=(const Apple& other);

    bool operator==(const Apple& other) const;
    bool operator!=(const Apple& other) const;

    Point GetPosition() const;
    std::string ToString() const;
};

std::ostream& operator<<(std::ostream& os, const Apple& a);
std::istream& operator>>(std::istream& is, Apple& a);
