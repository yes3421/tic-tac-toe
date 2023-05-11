#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "Player.h"

class Game {
public:
    void play();

private:
    Board _board{};
};

#endif
