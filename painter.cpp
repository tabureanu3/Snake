#include "Painter.hpp"
#include <iostream>

void Painter2D::ClearScreen() {
    std::cout << "\033[2J\033[1;1H"; 
}

void Painter2D::RenderSprite(const Point& from, const Point& to, const Sprite& sprite) {
    for(const auto& line : sprite) {
        std::cout << line << std::endl;
    }
}

void Painter2D::DisplayText(const Point& at, const std::string& message) {
    std::cout << message << std::endl;
}
