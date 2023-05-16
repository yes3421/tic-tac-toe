#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    std::string name() const;
    int score() const;
    bool is_winner() const;

    void set_name(std::string name);
    void set_score(int score);
    void set_winner(bool winner);

private:
    std::string _name{};
    int _score{0};
    bool _winner{false};
};

#endif
