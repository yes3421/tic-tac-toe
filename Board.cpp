#include "Board.h"

void Board::print() const
{
    for (int i = 0; i != 3; ++i) {
        std::cout << " " << _board[i].symbol() << " | " << _board[i + 1].symbol() << " | " << _board[i + 2].symbol() << '\n';
        if (i != 2) {
            std::cout << "---+---+---\n";
        }
    }
}
