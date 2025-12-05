#include <cassert>
#include "../Snake.hpp"

int main() {
    Snake s;

    Point head = s.Head();
    s.Move(Direction::Right);
    assert(s.Head().GetX() == head.GetX() + 1);
   /**
    * Test Grow method
    * @return void
    */
    s.Grow();
    /**
     * Test GetSegments method
     * @return void
     */
    assert(s.GetSegments().size() == 2);

    return 0;
}
