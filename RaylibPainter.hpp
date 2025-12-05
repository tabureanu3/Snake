/**
 * @file RaylibPainter.hpp
 * @brief Implementare Raylib a interfeței AbstractPainter.
 * @details Clasa RaylibPainter oferă o implementare concretă a interfeței AbstractPainter
 *  folosind biblioteca Raylib pentru randarea grafică în jocul Snake.
 *
 * Proiect: Snake Game  
 * Autor: Lavinia Tabureanu  
 * An: 2025
 */

#pragma once
#include "abstract_painter.hpp"
#include <string>

inline const int PIXEL_SIZE = 40;

class RaylibPainter : public AbstractPainter {
public:
/**
 * Constructor pentru RaylibPainter.
 * @param width Lățimea ferestrei.
 * @param height Înălțimea ferestrei.
 * @return Obiectul RaylibPainter creat.
 */
    RaylibPainter(int width, int height);
    /** Destructor pentru RaylibPainter. 
     * @return void
    */
    ~RaylibPainter() override;
    /** Curăță ecranul. 
     * @return void
    */
    void ClearScreen() override;
    /** Desenează sprite-uri folosind Raylib. 
     * @param from Poziția inițială.
     * @param to Poziția finală.
     * @param sprite Structura ASCII a sprite-ului.
     * @return void
    */
    void RenderSprite(const Point& from, const Point& to, const Sprite& sprite) override;
    /** Afișează text folosind Raylib. 
     * @param at Poziția unde va fi afișat textul.
     * @param message Textul de afișat.
     * @return void
    */
    void DisplayText(const Point& at, const std::string& message) override;
};
