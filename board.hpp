/**
 * @file Board.hpp
 * @brief Gestionarea tablei de joc (dimensiuni și coliziuni).
 * @details Clasa Board oferă funcționalități pentru crearea și gestionarea tablei de joc, 
 * inclusiv verificarea coliziunilor și generarea pozițiilor aleatoare pentru obiecte precum merele.
 *
 * Proiect: Snake Game
 * Autor: Lavinia Tabureanu
 * An: 2025
 */

#pragma once
#include <vector>
#include "point.hpp"

class Board {
private:
    int width, height;

public:
    /** Creează tabla cu dimensiuni date.
     * @param w Lățimea tablei.
     * @param h Înălțimea tablei.
     * @return Obiectul Board creat.
     */
    Board(int w = 20, int h = 20);

    /** Generează o poziție aleatoare pe tablă. 
     * @return Un obiect Point reprezentând poziția aleatoare.
    */
    Point GetRandomPosition() const;

    /** 
     * Verifică dacă punctul este în interiorul tablei.
     * @param p Punctul de verificat.
     * @return true dacă punctul este în interior, false altfel.
     */
    bool IsInside(const Point& p) const;
     /** Returnează lățimea tablei.
      * @return Lățimea tablei.
      */
    int GetWidth() const;
    /** Returnează înălțimea tablei.
     * @return Înălțimea tablei.
     */
    int GetHeight() const;
    
};
