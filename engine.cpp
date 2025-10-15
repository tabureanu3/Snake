#include "Engine.hpp"
#include <iostream>

// Constructor implicit
Engine::Engine() : board(), snake(), apple() {}

// Constructor cu parametri
Engine::Engine(const Board& b, const Snake& s, const Apple& a)
    : board(b), snake(s), apple(a) {}

// Constructor de copiere
Engine::Engine(const Engine& e) 
    : board(e.board), snake(e.snake), apple(e.apple) {}

// Operator de atribuire
Engine& Engine::operator=(const Engine& e) {
    if(this != &e) {
        board = e.board;
        snake = e.snake;
        apple = e.apple;
    }
    return *this;
}

// Operator de comparare
bool Engine::operator==(const Engine& e) const {
    return board == e.board && snake == e.snake && apple == e.apple;
}

bool Engine::operator!=(const Engine& e) const {
    return !(*this == e);
}

// Renderizare
void Engine::render() const {
    board.render();
    apple.render();
    snake.render();
}

// Operatori de intrare/ieșire
std::istream& operator>>(std::istream& in, Engine& e) {
    in >> e.board >> e.apple >> e.snake;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Engine& e) {
    out << e.board << " " << e.apple << " " << e.snake;
    return out;
}
