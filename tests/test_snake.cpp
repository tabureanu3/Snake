#include <cassert>
#include "../snake.hpp"
#include "../direction.hpp"

int main() {
    Snake s;

    Point oldHead = s.Head();
    s.Move(Direction::Right);
    assert(s.Head().GetX() == oldHead.GetX() + 1);

    s.Grow();
    assert(s.GetSegments().size() == 2);

    return 0;
}
