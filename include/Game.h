#ifndef GAME_H
#define GAME_H

#include <cstdlib>
#include <iostream>
#include <string>

#include "Board.h"
#include "Player.h"

class Game {
public:
    void play();

private:
    void set_players_name();
    void board_interaction();

    Board _board{};
    Player _player1{};
    Player _player2{};
};

#endif
