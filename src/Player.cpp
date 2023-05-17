#include "Player.h"

std::string Player::name() const
{
    return _name;
}

void Player::set_name(std::string name)
{
    _name = name;
}
