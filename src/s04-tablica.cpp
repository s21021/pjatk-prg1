#include <array>
#include <iostream>

auto main() -> int
{
    std::array<int, 8> tab;

    for (auto i = 0; i <= 8; i++) {
        tab[i + 1] = i;
        std::cout << i << "\n";
    }
    return 0;
}