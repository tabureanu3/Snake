#include <cassert>
#include "../Board.hpp"

int main() {
    Board b(20, 20);

    Point inside(5, 5);
    Point outside1(-1, 0);
    Point outside2(0, 25);

    assert(b.IsInside(inside));
    assert(!b.IsInside(outside1));
    assert(!b.IsInside(outside2));

    Point rnd = b.GetRandomPosition();
    assert(b.IsInside(rnd));

    return 0;
}
