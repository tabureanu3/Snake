#include "Engine.hpp"
#include "Board.hpp"
#include "Snake.hpp"
#include "Apple.hpp"
#include "Point.hpp"
#include "Renderable.hpp"
#include <iostream>
#include <vector>

int main() {
    // Creare Board, Snake, Apple
    Board board(20, 20);
    Snake snake;
    Apple apple(5, 5);

    // Creare Engine cu obiectele de joc
    Engine engine(board, snake, apple);

    std::cout << "=== Render engine ===" << std::endl;
    engine.render();  // afișează board, apple și snake

    // Test operator de ieșire
    std::cout << "=== Engine output ===" << std::endl;
    std::cout << engine << std::endl;

    // Test constructor de copiere și operator de atribuire
    Engine engineCopy = engine;   // constructor de copiere
    Engine engineAssign;
    engineAssign = engine;        // operator de atribuire

    // Comparare
    std::cout << "=== Comparare Engines ===" << std::endl;
    if(engine == engineCopy) std::cout << "engine == engineCopy" << std::endl;
    if(engine != engineAssign) std::cout << "engine != engineAssign" << std::endl;
    else std::cout << "engine == engineAssign" << std::endl;

    // Test intrare pentru Snake
    std::cout << "=== Introduceti Snake (numar segmente + coordonate) ===" << std::endl;
    Snake sInput;
    std::cin >> sInput;
    std::cout << "Snake citit: " << sInput << std::endl;

    // Test intrare pentru Engine
    std::cout << "=== Introduceti Engine (Board dimensiune, Apple coordonate, Snake) ===" << std::endl;
    Engine eInput;
    std::cin >> eInput;
    std::cout << "Engine citit: " << eInput << std::endl;

    return 0;
}
