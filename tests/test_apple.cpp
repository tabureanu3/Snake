#include <cassert>
#include "../Apple.hpp"

int main() {
    Apple a1(5, 5);
    Apple a2(Point(5, 5));
    Apple a3(1, 2);
    assert(a1 == a2);
    assert(a1 != a3);
    /**
     * Test GetPosition method
     * @return void
     */
    assert(a1.GetPosition().GetX() == 5);
    assert(a1.GetPosition().GetY() == 5);

    return 0;
}
