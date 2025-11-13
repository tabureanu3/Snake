#pragma once
#include "Point.hpp"
#include <string>

class Painter2D {
public:
    void RenderSprite(const Point& from, const Point& to, const std::string& sprite);
    void DisplayText(const Point& at, const std::string& message);
};
