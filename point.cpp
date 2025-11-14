#include "Point.hpp"

Point::Point(int x, int y) : x(x), y(y) {}
Point::Point(const Point& other) = default;
Point& Point::operator=(const Point& other) = default;

bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

int Point::GetX() const {
    return x;
}

int Point::GetY() const {
    return y;
}

std::string Point::ToString() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << p.ToString();
    return os;
}

std::istream& operator>>(std::istream& is, Point& p) {
    int x, y;
    char ch1, ch2, ch3;
    
    is >> ch1 >> x >> ch2 >> y >> ch3;
    if (ch1 == '(' && ch2 == ',' && ch3 == ')') {
        p = Point(x, y);
    } else {
        is.setstate(std::ios::failbit);
    }
    return is;
}
