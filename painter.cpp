#include "Painter.hpp"
#include <iostream>

void Painter2D::RenderSprite(const Point& from, const Point& to, const std::string& sprite) {
    std::cout << "Drawing from " << from << " to " << to;
    if (!sprite.empty())
        std::cout << " (Sprite: " << sprite << ")";
    std::cout << std::endl;
}

void Painter2D::DisplayText(const Point& at, const std::string& message) {
    std::cout << "Text: \"" << message << "\" shown at " << at << std::endl;
}
