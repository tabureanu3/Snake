#include <cassert>
#include "../Snake.hpp"

int main() {
    Snake s;

    Point head = s.Head();
    s.Move(Direction::Right);
    assert(s.Head().GetX() == head.GetX() + 1);

    s.Grow();
    assert(s.GetSegments().size() == 2);

    return 0;
}
