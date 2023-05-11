#ifndef BOARD_H
#define BOARD_H

#include <array>
#include <iostream>

#include "Cell.h"

class Board {
public:
    void print() const;

private:
    std::array<Cell, 9> _board{};
};

#endif
