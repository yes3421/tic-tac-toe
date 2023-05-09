#ifndef CELL_H
#define CELL_H

class Cell {
public:
    bool is_empty() const;
    void print() const;

    char symbol() const;

    void set_symbol(char symbol);

private:
    char _symbol{'\0'};
};

#endif
