#include "Game.h"

void Game::play()
{
    std::string name;

    std::cout << "Enter player's 1 name: ";
    std::cin >> name;
    _player1.set_name(name);

    std::cout << "Enter player's 2 name: ";
    std::cin >> name;
    _player2.set_name(name);

    while (!_board.win()) {
        std::cout << '\n';

        _board.print();

        std::cout << '\n';

        int row = 0;
        int col = 0;

        std::cout << "Enter row: ";
        std::cin >> row;

        std::cout << "Enter col: ";
        std::cin >> col;

        _board.write_at(row, col, 'X');
    }
    std::cout << "FINISH\n";
}
