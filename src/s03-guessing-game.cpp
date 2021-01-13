#include <time.h>

#include <cstdlib>
#include <iostream>

int liczba, strzal;

auto main() -> int
{
    std::cout << "wylosuje liczbe od 1 do 100" << std::endl;
    srand(time(NULL));
    liczba = rand() % 100 + 1;

    while (strzal != liczba) {
        std::cout << "zgadnij liczbe:";
        std::cin >> strzal;

        if (strzal == liczba)
            std::cout << "udało sie" << std::endl;

        else if (strzal < liczba)
            std::cout << "za mała liczba" << std::endl;

        else if (strzal > liczba)
            std::cout << "za duża liczba" << std::endl;
    }
    return 0;
}
