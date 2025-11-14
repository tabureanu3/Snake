#pragma once
#include "abstract_painter.hpp"
#include <string>

class Painter2D : public AbstractPainter {
public:
    ~Painter2D() override = default;
    virtual void ClearScreen() override;
    virtual void RenderSprite(const Point& from, const Point& to, const Sprite& sprite) override;
    virtual void DisplayText(const Point& at, const std::string& message) override;
};
