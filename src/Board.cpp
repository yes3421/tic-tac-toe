#include "Board.h"

void Board::print() const
{
    for (int i = 0; i < 9; i += 3) {
        std::cout << " " << _board[i].symbol() << " | " << _board[i + 1].symbol() << " | " << _board[i + 2].symbol() << '\n';
        if (i < 6) {
            std::cout << "---+---+---\n";
        }
    }
}

void Board::write_at(int i, int j, char symbol)
{
    --i;
    --j;
    _board[i*3 + j].set_symbol(symbol);
}

bool Board::win() const
{
    return (
        horizontal_check()
        || vertical_check()
        || diagonal_check()
    );
}

bool Board::horizontal_check() const
{
    bool flag = false;

    for (int i = 0; i < 9; i += 3) {
        if (
            (!_board[i].is_empty())
            || (!_board[i + 1].is_empty())
            || (!_board[i + 2].is_empty())
        ) {
            flag = (
                (_board[i].symbol() == _board[i + 1].symbol())
                &&
                (_board[i + 1].symbol() == _board[i + 2].symbol())
            );
        }

        if (flag) {
            return flag;
        }
    }
    return flag;
}

bool Board::vertical_check() const
{
    bool flag = false;

    for (int i = 0; i < 3; ++i) {
        if (
            (!_board[i].is_empty())
            || (!_board[i + 3].is_empty())
            || (!_board[i + 6].is_empty())
        ) {
            flag = (
                (_board[i].symbol() == _board[i + 3].symbol())
                &&
                (_board[i + 3].symbol() == _board[i + 6].symbol())
            );
        }

        if (flag) {
            return flag;
        }
    }
    return flag;
}

bool Board::diagonal_check() const
{
    bool flag = false;

    if (
        (!_board[0].is_empty())
        || (!_board[4].is_empty())
        || (!_board[8].is_empty())
    ) {
        flag = (
            (_board[0].symbol() == _board[4].symbol())
            &&
            (_board[4].symbol() == _board[8].symbol())
        );
    }

    if (flag) {
        return flag;
    }

    if (
        (!_board[2].is_empty())
        || (!_board[4].is_empty())
        || (!_board[6].is_empty())
    ) {
        flag = (
            (_board[2].symbol() == _board[4].symbol())
            &&
            (_board[4].symbol() == _board[6].symbol())
        );
    }
    return flag;
}

bool Board::is_full() const
{
    for (const auto& cell : _board) {
        if (cell.is_empty()) {
            return false;
        }
    }
    return true;
}
