#include <iostream >
#include "square.h"
int main()
{
    Square sq(5);
    std::cout << "Square with width " << sq.width()
            << " has an area of " << sq.area()
            << " and a perimeter of " << sq.perimeter() << '\n';
}
