#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

#include "Board.h"
#include "Player.h"

class Game {
public:
    void play();

private:
    Board _board{};
    Player _player1{};
    Player _player2{};
};

#endif
