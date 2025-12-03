/**
 * @file abstract_painter.hpp
 * @brief Interfața abstractă pentru toate sistemele de randare.
 *
 * Proiect: Snake Game  
 * Autor: Lavinia Tabureanu  
 * An: 2025
 *
 * Clasa AbstractPainter definește funcțiile necesare pentru randare:
 * - ștergerea ecranului
 * - desenarea sprite-urilor
 * - afișarea textului
 */

#pragma once
#include "Point.hpp"

#include <vector>
#include <string>

using Sprite = std::vector<std::string>;

struct AbstractPainter {

    /** Șterge ecranul */
    virtual void ClearScreen() = 0;

    /**
     * @brief Randare sprite.
     * @param from Poziția inițială.
     * @param to Poziția finală.
     * @param sprite Structura ASCII a sprite-ului.
     */
    virtual void RenderSprite(const Point& from, const Point& to, const Sprite& sprite) = 0;

    /**
     * @brief Afișează text la o poziție dată.
     */
    virtual void DisplayText(const Point& at, const std::string& message) = 0;

    virtual ~AbstractPainter() = default;
};
