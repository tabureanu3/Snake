#include "painter.hpp"

void Painter2D::RenderSprite(Point from, Point to, char** sprite) {
    std::cout << "Drawing object between " << from << " and " << to << "\n";
}

void Painter2D::DisplayText(Point at, const char* message) {
    std::cout << "Text: \"" << message << "\" shown at " << at << "\n";
}
