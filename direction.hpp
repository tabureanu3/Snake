/**
 * @file direction.hpp
 * @brief Enumerare direcții pentru deplasarea șarpelui.
 *
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

/** Conversie caracter → direcție. */
Direction DirectionFromChar(char c);

/** Conversie direcție → caracter. */
char DirectionToChar(Direction dir);
