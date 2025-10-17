#pragma once
#include "Point.hpp"

struct AbstractPainter {
    virtual void RenderSprite(Point from, Point to, char** sprite) = 0;
    virtual void DisplayText(Point at, const char* message) = 0;
    virtual ~AbstractPainter() = default;
};
