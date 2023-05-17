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

    char turn_symbol = 'X';

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

        if (turn_symbol == 'X') {
            _board.write_at(row, col, turn_symbol);
            turn_symbol = 'O';
        }
        else {
            _board.write_at(row, col, turn_symbol);
            turn_symbol = 'X';
        }
    }
    std::cout << '\n';

    _board.print();

    std::cout << '\n';

    if (turn_symbol == 'X') {
        std::cout << "X's won!\n";
        std::cout << "Congratulations! " << _player1.name() << '\n';
    }
    else {
        std::cout << "O's won!\n";
        std::cout << "Congratulations! " << _player2.name() << '\n';
    }

    char option = '\0';

    std::cout << "Would you like to play again? [Y/n] ";
    std::cin >> option;

    std::cout << '\n';

    if (option == 'Y') {
        play();
    }
    std::cout << "FINISH\n";
}
