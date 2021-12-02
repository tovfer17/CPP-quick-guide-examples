
// how to swap two numbers without using a temporary variable

// think about it this way
// x  <-- a
// y  <-- b
// x' <-- x - y   = a - b
// y' <-- x' + y  = ( a - b ) + b = a
// x''<-- y' - x' = a - ( a - b ) = b

#include <iostream>

int x = 5, y = 10;

void swap(int& x, int& y)
{
    x = x - y;
    y = x + y;
    x = y - x;
}

int main ()
{
    std::cout << "x: " << x << " " << "y: " << y << std::endl;
    swap(x, y);
    std::cout << "x: " << x << " " << "y: " << y << std::endl;
}