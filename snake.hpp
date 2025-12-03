/**
 * @file Snake.hpp
 * @brief Reprezintă șarpele din joc.
 *
 * Proiect: Snake Game  
 * Autor: Lavinia Tabureanu  
 * An: 2025
 */

#pragma once
#include <vector>
#include "Point.hpp"
#include "direction.hpp"

class Snake {
private:
    std::vector<Point> segments;

public:
    Snake();
    Snake(const Snake& other);
    Snake& operator=(const Snake& other);

    /** Mută șarpele într-o direcție. */
    void Move(Direction dir);

    /** Returnează capul. */
    Point Head() const;

    /** Crește șarpele. */
    void Grow();

    /** Returnează lista segmentelor. */
    const std::vector<Point>& GetSegments() const;

    bool operator==(const Snake& other) const;
    bool operator!=(const Snake& other) const;
};
