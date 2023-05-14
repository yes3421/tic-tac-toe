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

bool horizontal_check() const
{
    return (
        (_board[0].symbol() == _board[1].symbol() == _board[2].symbol()) ||
        (_board[3].symbol() == _board[4].symbol() == _board[5].symbol()) ||
        (_board[6].symbol() == _board[7].symbol() == _board[8].symbol())
    );
}
