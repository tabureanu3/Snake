#include "Point.hpp"

Point::Point(int _x, int _y) : x(_x), y(_y) {}

Point::Point(const Point& p) : x(p.x), y(p.y) {}

Point& Point::operator=(const Point& p) {
    if (this != &p) {
        x = p.x;
        y = p.y;
    }
    return *this;
}

bool Point::operator==(const Point& p) const { return x == p.x && y == p.y; }
bool Point::operator!=(const Point& p) const { return !(*this == p); }

std::istream& operator>>(std::istream& in, Point& p) {
    in >> p.x >> p.y;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << "(" << p.x << "," << p.y << ")";
    return out;
}
