/**
 * @file Apple.hpp
 * @brief Reprezintă obiectul "măr" din joc.
 * @details Clasa Apple gestionează poziția și comportamentul unui măr în cadrul jocului Snake.
 *
 * Proiect: Snake Game
 * Autor: Lavinia Tabureanu
 * An: 2025
 */

#pragma once

#include "Point.hpp"
#include <iostream>
#include <string>

class Apple {
    Point pos;

public:
    /** Constructor implicit: creează un măr la poziția (0,0).
     * @return Obiectul Apple creat.
     */
    Apple();

    /** Creează un măr la coordonatele (x,y). 
     * @param x Coordonata x a mărului.
     * @param y Coordonata y a mărului.
     * @return Obiectul Apple creat.

    */
    Apple(int x, int y);

    /** Creează un măr pe baza unui Point. 
     * @param point Poziția mărului.
     * @return Obiectul Apple creat.
    */
    Apple(const Point& point);

    /** Constructor de copiere.
     * @param other Mărul de copiat.
     * @return Obiectul Apple creat.
     */
    Apple(const Apple& other);

    /** Operator de atribuire. 
     * @param other Mărul de atribuit.
     * @return Referința la obiectul curent.
    */
    Apple& operator=(const Apple& other);
    /** Compară doi meri pentru egalitate. 
     * @param other Mărul cu care se compară.
     * @return true dacă sunt egali, false altfel.
    */

    bool operator==(const Apple& other) const;
    /** Compară două mere pentru inegalitate. 
     * @param other Mărul cu care se compară.
     * @return true dacă sunt diferiți, false altfel.
    */
    bool operator!=(const Apple& other) const;

    /** 
     * Returnează poziția mărului.
     * @return Poziția mărului ca un obiect Point.
     */
    Point GetPosition() const;

    /** Convertă mărul la string.
     * @return Reprezentarea string a mărului.
     */
    std::string ToString() const;
};
    /** Supraincarcă operatorul de flux pentru afișarea mărului. 
     * @param os Fluxul de ieșire.
     * @param a Mărul de afișat.
     * @return Referința la fluxul de ieșire.
    */
std::ostream& operator<<(std::ostream& os, const Apple& a);
    /** Supraincarcă operatorul de flux pentru citirea mărului. 
     * @param is Fluxul de intrare.
     * @param a Mărul în care se citește.
     * @return Referința la fluxul de intrare.
    */
std::istream& operator>>(std::istream& is, Apple& a);
