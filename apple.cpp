#include "Apple.hpp"

Apple::Apple() : pos(0, 0) {}
Apple::Apple(int x, int y) : pos(x, y) {}
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

std::ostream& operator<<(std::ostream& os, const Apple& a) {
    os << "Apple at " << a.pos;
    return os;
}

std::istream& operator>>(std::istream& is, Apple& a) {
    is >> a.pos;
    return is;
}
