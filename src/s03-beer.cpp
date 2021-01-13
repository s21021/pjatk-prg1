/*
beer
*/


#include <iostream>

auto main() -> int
{
    for (auto i = 99; i > 0; --i) {
        std::cout << i << " bottles of beer on the wall, " << i
                  << " bottles of beer. \n"
                  << "Take one down, pass it around. \n\n ";
    }
    std::cout << "No more bottles of beer on the wall, no more bottles "
                 "of beer.\n";
    std::cout << "Go to the store and buy some more. \n";

    return 0;
}
