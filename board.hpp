#pragma once

class Board {
   int _width;
   int _height;
public:
   Board(int width = 35, int height = 35);
   int GetWidth() const;
   int GetHeight() const;
};  