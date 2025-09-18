#pragma once
#include "Point.hpp"
#include "Direction.hpp"
#include "Apple.hpp"

class Snake {
public:
    Point segments[100];
    int nr_segments;

    Snake();                    
    Snake(const Point& pos);    

    void Move(Direction dir);  
    int GetSize() const;       
    Point GetPosition() const;  
    void Eat(const Apple& apple);
};
11

