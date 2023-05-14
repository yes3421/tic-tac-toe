#ifndef BOARD_H
#define BOARD_H

#include <array>
#include <iostream>

#include "Cell.h"

class Board {
public:
    void print() const;
    void write_at(int i, int j, char c);
    bool win() const;
    bool tie() const;

private:
    bool horizontal_check() const;
    bool vertical_check() const;
    bool diagonal_check() const;
    bool is_full() const;

    std::array<Cell, 9> _board{};
};

#endif
