#include <iostream>
#include <string>

auto ask_user_for_integer(std::string const prompt) -> int
{
    if (not prompt.empty()) {
        std::cout << prompt;
    }
    auto value = std::string{};
    std::getline(std::cin, value);
    return std::stoi(value);
}
auto main() -> int {

    auto const a = ask_user_for_integer("wymiary na dlugosc w prawo musi być liczba parzysta=");
    auto const b = ask_user_for_integer("wymiary na dlugosc w gol=");

    char n = '*';

    if (a % 2 == 0 || b % 1 == 0) {

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                std::cout << n;
            }
            std::cout << std::endl;
        }
        std::cout <<"prostokat"<< std::endl;
    }

    return 0;
}