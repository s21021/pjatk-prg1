#include <iostream>
#include <string>

int n = 0;

auto main(int, char* argv[]) -> int
{
    auto const liczba = std::stoi(argv[1]);
    while (n <= liczba) {
        std::cout << n;
        if (n % 3 == 0 && n % 5 == 0) {
            std::cout << " fizzbuzz";
        } else if (n % 3 == 0) {
            std::cout << " fizz";
        } else if (n % 5 == 0) {
            std::cout << " buzz";
        }
        std::cout << std::endl;

        n++;
    }

    return 0;
}
