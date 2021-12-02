// How do you print the first non-repeated character from a string?

#include <iostream>
#include <string>

std::string my_str = "aaaaaaabccccccc";

int main ()
{
    int index;
    for (index = 0; index < my_str.size() - 1; ++index)
        if ( my_str[index] != my_str[index + 1] ) break;
    std::cout << my_str[index + 1] << std::endl;
}