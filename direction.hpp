/**
 * @file direction.hpp
 * @brief Enumerare direcții pentru deplasarea șarpelui.
 * @details Acest fișier definește enumerarea Direction 
 * care reprezintă cele patru direcții posibile de deplasare ale șarpelui în jocul Snake.
 * Proiect: Snake Game
 * Autor: Lavinia Tabureanu
 * An: 2025
 */

#pragma once

enum class Direction : char {
    Up      = 'w',
    Down    = 's',
    Left    = 'a',
    Right   = 'd'
};

/** Conversie caracter → direcție. 
 * @param c Caracterul de convertit.
 * @return Direcția corespunzătoare caracterului.
*/
Direction DirectionFromChar(char c);

/** Conversie direcție → caracter. 
 * @param dir Direcția de convertit.
 * @return Caracterul corespunzător direcției.
*/
char DirectionToChar(Direction dir);
