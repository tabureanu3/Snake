/**
 * @file Apple.hpp
 * @brief Reprezintă obiectul "măr" din joc.
 *
 * Proiect: Snake Game
 * Autor: Lavinia Tabureanu
 * An: 2025
 */

#pragma once

#include "Point.hpp"
#include <iostream>
#include <string>

class Apple {
    Point pos;

public:
    /** Constructor implicit: creează un măr la poziția (0,0). */
    Apple();

    /** Creează un măr la coordonatele (x,y). */
    Apple(int x, int y);

    /** Creează un măr pe baza unui Point. */
    Apple(const Point& point);

    /** Constructor de copiere. */
    Apple(const Apple& other);

    /** Operator de atribuire. */
    Apple& operator=(const Apple& other);

    bool operator==(const Apple& other) const;
    bool operator!=(const Apple& other) const;

    /** Returnează poziția mărului. */
    Point GetPosition() const;

    /** Convertă mărul la string. */
    std::string ToString() const;
};

std::ostream& operator<<(std::ostream& os, const Apple& a);
std::istream& operator>>(std::istream& is, Apple& a);
