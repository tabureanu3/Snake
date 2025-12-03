/**
 * @file GameEngine.hpp
 * @brief Motorul principal al jocului Snake.
 *
 * Proiect: Snake Game
 * Autor: Lavinia Tabureanu
 * An: 2025
 *
 * Engine-ul coordonează logica jocului:
 * - mișcarea șarpelui
 * - coliziunile
 * - generarea merelor
 * - randarea
 */

#pragma once
#include <memory>

#include "Snake.hpp"
#include "Apple.hpp"
#include "Board.hpp"
#include "abstract_painter.hpp"

class GameEngine {
private:
    Snake _snake;
    Apple _apple;
    Board _board;
    std::unique_ptr<AbstractPainter> _painter;

public:
    /** Inițializează jocul cu o tablă de dimensiune dată. */
    GameEngine(int width, int height);

    /** Inițializează starea internă. */
    void Init();

    /** Rulează bucla principală a jocului. */
    void Run();

    Snake GetSnake() const;
    Apple GetApple() const;
    Board GetBoard() const;
};
