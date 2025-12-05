/**
 * @file GameEngine.hpp
 * @brief Motorul principal al jocului Snake.
 * @details Clasa GameEngine gestionează logica jocului Snake, inclusiv mișcarea șarpelui, coliziunile,
 *  generarea merelor și randarea folosind un sistem de pictură abstract.
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
    /** Inițializează jocul cu o tablă de dimensiune dată. 
     * @param width Lățimea tablei.
     * @param height Înălțimea tablei.
     * @return Obiectul GameEngine creat.
    
    */
    GameEngine(int width, int height);

    /** Inițializează starea internă.
     * @return void
     */
    void Init();

    /** Rulează bucla principală a jocului. 
     * @return void
    */
    void Run();
    /**
     * @return Șarpele curent.
     * @return Apple-ul curent.
     * @return Tabla curentă.
   */
    Snake GetSnake() const;
    Apple GetApple() const;
    Board GetBoard() const;
};
