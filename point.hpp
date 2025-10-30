#pragma once
#include <iostream>

class Point {
public:
    int x, y;

    Point(int x = 0, int y = 0);
    Point(const Point& other);
    Point& operator=(const Point& other);

    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Point& p);
    friend std::istream& operator>>(std::istream& is, Point& p);
};
