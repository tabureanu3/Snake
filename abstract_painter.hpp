#pragma once
#include "Point.hpp"

#include <vector>
#include <string>

using Sprite = std::vector<std::string>;

struct AbstractPainter {
    virtual void ClearScreen() = 0;
    virtual void RenderSprite(const Point& from, const Point& to, const Sprite& sprite) = 0;
    virtual void DisplayText(const Point& at, const std::string& message) = 0;
    virtual ~AbstractPainter() = default;
};
