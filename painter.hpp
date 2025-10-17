#pragma once
#include "abstract_painter.hpp"
#include <iostream>

class Painter2D : public AbstractPainter {
public:
    void RenderSprite(Point from, Point to, char** sprite) override;
    void DisplayText(Point at, const char* message) override;
};
