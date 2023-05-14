#ifndef BOARD_H
#define BOARD_H

#include <array>
#include <iostream>

#include "Cell.h"

class Board {
public:
    void print() const;

private:
    bool empty() const;
    bool horizontal_check() const;
    bool vertical_check() const;
    bool diagonal_check() const;

    std::array<Cell, 9> _board{};
};

#endif
