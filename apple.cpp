#include "Apple.hpp"
#include <iostream>

Apple::Apple() : pos(0,0) {}
Apple::Apple(int x, int y) : pos(x,y) {}
Apple::Apple(Point p) : pos(p) {}
Apple::Apple(const Apple& a) : pos(a.pos) {}
Apple& Apple::operator=(const Apple& a) {
    if(this != &a) pos = a.pos;
    return *this;
}

bool Apple::operator==(const Apple& a) const { return pos == a.pos; }
bool Apple::operator!=(const Apple& a) const { return !(*this == a); }

void Apple::render() const {
    std::cout << "Apple at " << pos << std::endl;
}

std::istream& operator>>(std::istream& in, Apple& a) { in >> a.pos; return in; }
std::ostream& operator<<(std::ostream& out, const Apple& a) { out << a.pos; return out; }
