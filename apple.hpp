#pragma once
#include "Point.hpp"
#include "Renderable.hpp"
#include <iostream>

struct Apple : public Renderable {
    Point pos;

    Apple();
    Apple(int x, int y);
    Apple(Point p);
    Apple(const Apple& a);
    Apple& operator=(const Apple& a);

    bool operator==(const Apple& a) const;
    bool operator!=(const Apple& a) const;

    void render() const override; // implementare render
};

std::istream& operator>>(std::istream& in, Apple& a);
std::ostream& operator<<(std::ostream& out, const Apple& a);
