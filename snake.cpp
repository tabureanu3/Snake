#include "Snake.hpp"
#include <iostream>

// Constructor implicit
Snake::Snake() {
    body.push_back(Point(0,0)); // snake inițial cu un cap la (0,0)
}

// Constructor cu parametri
Snake::Snake(const std::vector<Point>& b) : body(b) {}

// Constructor de copiere
Snake::Snake(const Snake& s) : body(s.body) {}

// Operator de atribuire
Snake& Snake::operator=(const Snake& s) {
    if(this != &s) {
        body = s.body;
    }
    return *this;
}

// Operator de comparare
bool Snake::operator==(const Snake& s) const {
    return body == s.body;
}

bool Snake::operator!=(const Snake& s) const {
    return !(*this == s);
}

// Getter
const std::vector<Point>& Snake::getBody() const {
    return body;
}

// Render
void Snake::render() const {
    std::cout << "Snake: ";
    for(const auto& p : body) {
        std::cout << p << " ";
    }
    std::cout << std::endl;
}

// Operatori de intrare/ieșire
std::istream& operator>>(std::istream& in, Snake& s) {
    int n;
    in >> n; // numărul de segmente
    s.body.clear();
    for(int i=0; i<n; ++i) {
        Point p;
        in >> p;
        s.body.push_back(p);
    }
    return in;
}

std::ostream& operator<<(std::ostream& out, const Snake& s) {
    out << s.body.size() << " ";
    for(const auto& p : s.body) {
        out << p << " ";
    }
    return out;
}
