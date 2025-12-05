/**
 * @file Painter.hpp
 * @brief Implementare ASCII a sistemului de randare.
 * @details Clasa Painter2D oferă o implementare concretă a interfeței AbstractPainter
 *  pentru randarea grafică în mod text în jocul Snake.
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
    /** Constructor pentru Painter2D.
     * @return Obiectul Painter2D creat.
     */ 
    ~Painter2D() override = default;

    /** Șterge ecranul ASCII.
     * @return void
     */
    void ClearScreen() override;

    /** Desenează sprite-uri în mod text. 
     * @param from Poziția inițială.
     * @param to Poziția finală.
     * @param sprite Structura ASCII a sprite-ului.
     * @return voiD
    */
    void RenderSprite(const Point& from, const Point& to, const Sprite& sprite) override;

    /** Afișează text simplu. 
     * @param at Poziția unde va fi afișat textul.
     * @param message Textul de afișat.
     * @return void
    */
    void DisplayText(const Point& at, const std::string& message) override;
};
