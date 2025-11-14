#pragma once
#include "abstract_painter.hpp"
#include <string>

const int PIXEL_SIZE = 40;

class RaylibPainter : public AbstractPainter {
public:
    RaylibPainter(int width, int height);
    ~RaylibPainter() override;
    virtual void ClearScreen() override;
    virtual void RenderSprite(const Point& from, const Point& to, const Sprite& sprite) override;
    virtual void DisplayText(const Point& at, const std::string& message) override;
};
