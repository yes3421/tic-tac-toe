#include "Cell.h"

bool Cell::is_empty() const
{
    return _symbol == '\0';
}

void Cell::print() const
{
    
}

char Cell::symbol() const
{
    return _symbol;
}

void Cell::set_symbol(char symbol)
{
    _symbol = symbol;
}
