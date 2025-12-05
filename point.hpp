/**
 * @file Point.hpp
 * @brief Clasă pentru coordonate bidimensionale.
 * @details Clasa Point reprezintă un punct în spațiul bidimensional, 
 * oferind funcționalități pentru gestionarea coordonatelor x și y.
 *
 * Proiect: Snake Game
 * Autor: Lavinia Tabureanu
 * An: 2025
 */

#pragma once

#include <iostream>
#include <string>

class Point {
    int x, y;

public:
/**
 * Constructori și operatori pentru clasa Point.
 * @param x Coordonata x (implicit 0).
 * @param y Coordonata y (implicit 0).
 * @return Obiectul Point creat.
 */
    Point(int x = 0, int y = 0);
    /**
     * Constructor de copiere.
     * @param other Punctul de copiat.
     * @return Obiectul Point creat.
     */
    Point(const Point& other);
    /**
     * Operator de atribuire.
     * @param other Punctul de atribuit.
     * @return Referința la obiectul curent.
     */
    Point& operator=(const Point& other);
    /**
     * Compară două puncte pentru egalitate.
     * @param other Punctul cu care se compară.
     * @return true dacă sunt egale, false altfel.
     */
    bool operator==(const Point& other) const;
    /**
     * Compară două puncte pentru inegalitate.
     * @param other Punctul cu care se compară.
     * @return true dacă sunt diferite, false altfel.
     */
    bool operator!=(const Point& other) const;
    /**
     * Returnează coordonata x.
     * @return Coordonata x.
     */
    int GetX() const;
    /**
     * Returnează coordonata y.
     * @return Coordonata y.
     */
    int GetY() const;
    /**
     * Returnează reprezentarea sub formă de șir a punctului.
     * @return Șirul reprezentând punctul.
     */
    std::string ToString() const;
};
 /**
  * Supraincarcarea operatorilor de flux pentru clasa Point.
  * @param os Fluxul de ieșire.
  * @param p Punctul de afișat.
  * @return Referința la fluxul de ieșire.
  * @param is Fluxul de intrare.
  * @param p Punctul de citit.
  * @return Referința la fluxul de intrare.
  */
std::ostream& operator<<(std::ostream& os, const Point& p);
  /**
   * Supraincarcă operatorul de flux pentru citirea unui Point.
   * @param is Fluxul de intrare. 
   * @return Referința la fluxul de intrare.
   */
std::istream& operator>>(std::istream& is, Point& p);
