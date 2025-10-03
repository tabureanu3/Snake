@echo off
g++ -c point.cpp -o point.o
g++ -c apple.cpp -o apple.o
g++ -c snake.cpp -o snake.o
g++ -c board.cpp -o board.o
g++ -c engine.cpp -o engine.o
g++ -c main.cpp -o main.o
g++ -o snake.exe point.o apple.o snake.o board.o engine.o main.o
echo Build finished: snake.exe created.
