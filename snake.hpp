#pragma once
#include <vector>
#include "Point.hpp"
#include "Renderable.hpp"
#include <iostream>

class Snake : public Renderable {
private:
    std::vector<Point> body; // corpul șarpelui, primul element = cap

public:
    // Constructor implicit
    Snake();

    // Constructor cu parametri (vector de puncte)
    Snake(const std::vector<Point>& b);

    // Constructor de copiere
    Snake(const Snake& s);

    // Operator de atribuire
    Snake& operator=(const Snake& s);

    // Operator de comparare
    bool operator==(const Snake& s) const;
    bool operator!=(const Snake& s) const;

    // Getter
    const std::vector<Point>& getBody() const;

    // Metodă render
    void render() const override;

    // Operatori de intrare/ieșire
    friend std::istream& operator>>(std::istream& in, Snake& s);
    friend std::ostream& operator<<(std::ostream& out, const Snake& s);
};
