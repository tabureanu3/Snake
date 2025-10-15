#pragma once
#include "Board.hpp"
#include "Snake.hpp"
#include "Apple.hpp"
#include "Renderable.hpp"
#include <iostream>

class Engine : public Renderable {
private:
    Board board;
    Snake snake;
    Apple apple;

public:
    // Constructor implicit
    Engine();

    // Constructor cu parametri
    Engine(const Board& b, const Snake& s, const Apple& a);

    // Constructor de copiere
    Engine(const Engine& e);

    // Operator de atribuire
    Engine& operator=(const Engine& e);

    // Operator de comparare
    bool operator==(const Engine& e) const;
    bool operator!=(const Engine& e) const;

    // Renderizare
    void render() const override;

    // Operatori de intrare/ieșire
    friend std::istream& operator>>(std::istream& in, Engine& e);
    friend std::ostream& operator<<(std::ostream& out, const Engine& e);
};
