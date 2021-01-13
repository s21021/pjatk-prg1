#include <curses.h>

#include <iostream>

int klawisz;

auto main() -> int
{
    for (;;) {
        klawisz = getchar();
        std::cout << klawisz << std::endl;
    }
    return 0;
}