#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    std::string name() const;

    void set_name(std::string name);

private:
    std::string _name{};
};

#endif
