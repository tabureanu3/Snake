#include "Apple.hpp"

Apple::Apple() : pos(0, 0) {}
Apple::Apple(int x, int y) : pos(x, y) {}
Apple::Apple(const Point& point) : pos(point) {}
Apple::Apple(const Apple& other) : pos(other.pos) {}
Apple& Apple::operator=(const Apple& other) {
    if (this != &other) pos = other.pos;
    return *this;
}

bool Apple::operator==(const Apple& other) const {
    return pos == other.pos;
}
bool Apple::operator!=(const Apple& other) const {
    return !(*this == other);
}

Point Apple::GetPosition() const {
    return pos;
}

std::string Apple::ToString() const {
    return "Apple at " + pos.ToString();
}

std::ostream& operator<<(std::ostream& os, const Apple& a) {
    os << a.ToString();
    return os;
}
std::istream& operator>>(std::istream& is, Apple& a) {
    Point p;
    std::string str1, str2;
    is >> str1 >> str2 >> p;
    if (str1 == "Apple" && str2 == "at") {
        a = Apple(p);
    } else {
        is.setstate(std::ios::failbit);
    }
    return is;
}
