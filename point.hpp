#pragma once
#include <iostream>

struct Point {
    int x, y;

    Point(int _x = 0, int _y = 0);       
    Point(const Point& p);               
    Point& operator=(const Point& p);   
    bool operator==(const Point& p) const;
    bool operator!=(const Point& p) const;
};

std::istream& operator>>(std::istream& in, Point& p);
std::ostream& operator<<(std::ostream& out, const Point& p);
