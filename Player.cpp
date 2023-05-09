#include "Player.h"

std::string Player::name() const
{
    return _name;
}

int Player::score() const
{
    return _score;
}

bool Player::is_winner() const
{
    return _winner;
}

void Player::set_name(std::string name)
{
    _name = name;
}

void Player::set_score(int score)
{
    _score = score;
}

void Player::set_winner(bool winner)
{
    _winner = winner;
}
