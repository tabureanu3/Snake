#include <cassert>
#include "../Board.hpp"

int main() {
    Board b(20, 20);

    Point inside(5, 5);
    Point outside1(-1, 0);
    Point outside2(0, 25);
    /**
     * Test IsInside method
     * @return void
     */
    assert(b.IsInside(inside) == true);
    assert(b.IsInside(outside1) == false);
    assert(b.IsInside(outside2) == false);
    /** 
     * Test GetWidth and GetHeight methods
     * @return void
     */
    Point rnd = b.GetRandomPosition();
    assert(b.IsInside(rnd));

    return 0;
}
