#include <cassert>
#include "../Point.hpp"

int main() {
    Point p1(3, 4);
    Point p2(3, 4);
    Point p3(1, 2);
    /** 
     * Test Point class methods
     * @return void
     */
    assert(p1 == p2);
    assert(p1 != p3);
    assert(p1.GetX() == 3);
    assert(p1.GetY() == 4);

    return 0;
}
