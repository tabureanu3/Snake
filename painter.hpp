/**
 * @file Painter.hpp
 * @brief Implementare ASCII a sistemului de randare.
 *
 * Proiect: Snake Game  
 * Autor: Lavinia Tabureanu  
 * An: 2025
 */

#pragma once
#include "abstract_painter.hpp"
#include <string>

class Painter2D : public AbstractPainter {
public:
    ~Painter2D() override = default;

    /** Șterge ecranul ASCII. */
    void ClearScreen() override;

    /** Desenează sprite-uri în mod text. */
    void RenderSprite(const Point& from, const Point& to, const Sprite& sprite) override;

    /** Afișează text simplu. */
    void DisplayText(const Point& at, const std::string& message) override;
};
