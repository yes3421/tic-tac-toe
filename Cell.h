#ifndef CELL_H
#define CELL_H

class Cell {
public:
    bool is_empty() const;
    
    char symbol() const;

    void set_symbol(char symbol);

private:
    char _symbol{' '};
};

#endif
