#include <cassert>
#include "../board.hpp"

int main() {
    Board b(20, 20);

    assert(b.IsInside(Point(5, 5)) == true);
    assert(b.IsInside(Point(-1, 0)) == false);
    assert(b.IsInside(Point(0, 25)) == false);

    Point rnd = b.GetRandomPosition();
    assert(b.IsInside(rnd));

    return 0;
}
