#include "Point.hpp"

enum Direction { Up, Down, Left, Right };

class Snake {
public:
    Snake();
    void Move(Direction dir);
    Point Head() const;

private:
    static const int MAX_LENGTH = 100; // să definim un maxim
    Point segments[MAX_LENGTH];
    int length;
};
