#include "Game.h"

void Game::play()
{
    set_players_name();

    char option = 'Y';

    while (option == 'Y') {
        board_interaction();

        std::cout << "Would you like to play again? [Y/n] ";
        std::cin >> option;

        if (option == 'n') {
            break;
        }

        _board.clean();
    }
    std::cout << '\n';

    std::cout << "FINISH\n";
}

void Game::set_players_name()
{
    std::string name;

    std::cout << "Enter player's 1 name: ";
    std::cin >> name;
    _player1.set_name(name);

    std::cout << "Enter player's 2 name: ";
    std::cin >> name;
    _player2.set_name(name);
}

void Game::board_interaction()
{
    int row = 0;
    int col = 0;

    while (!_board.win()) {
        if (_board.is_full()) {
            break;
        }
        std::cout << '\n';

        _board.print();

        std::cout << '\n';

        std::cout << "Enter row: ";
        std::cin >> row;

        std::cout << "Enter col: ";
        std::cin >> col;

        _board.write_at(row, col);
    }
    std::cout << '\n';

    _board.print();

    std::cout << '\n';
}
