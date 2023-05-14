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

bool Board::horizontal_check() const
{
    for (int i = 0; i < 9; i += 3) {
        if (
            (!_board[i].is_empty())
            || (!_board[i + 1].is_empty())
            || (!_board[i + 2].is_empty())
        ) {
            return (
                _board[i].symbol()
                == _board[i + 1].symbol()
                == _board[i + 2].symbol()
            );
        }
    }
    return false;
}

bool Board::vertical_check() const
{
    for (int i = 0; i < 3; ++i) {
        if (
            (!_board[i].is_empty())
            || (!_board[i + 3].is_empty())
            || (!_board[i + 6].is_empty())
        ) {
            return (
                _board[i].symbol()
                == _board[i + 3].symbol()
                == _board[i + 6].symbol()
            );
        }
    }
    return false;
}
