#include "GameEngine.hpp"
#include <windows.h>
#include <algorithm>
#include <iostream>

GameEngine::GameEngine() {
   
}

void GameEngine::Init() {
    
}

void GameEngine::Run() {
    bool running = true;
    while (running) {
       
        Sleep(200); 
    }
}

int main() {
    GameEngine game;
    game.Init();
    game.Run();
    return 0;
}
