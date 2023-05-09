#ifndef BOARD_H
#define BOARD_H

#include <vector>

#include "Cell.h"

class Board {
public:
    void print() const;

private:
    std::vector<Cell> _board{};
};

#endif
