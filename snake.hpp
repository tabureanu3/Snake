#pragma once
#pragma once
#include "Point.hpp"

struct Snake {
    Point segments[50]; // șarpele are max 50 de segmente
    int length;         // câte segmente are acum
};
