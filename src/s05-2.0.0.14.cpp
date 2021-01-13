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
auto main () -> int {

    auto const a = ask_user_for_integer("wysokosc");
    auto const b = ask_user_for_integer("szerokosc ");

    char n = '*';

    for (int i = 1; a >= i; i++) {
        for (int j = 1; b >= j; j++) {
            if (j == 1 || j == b || i == 1 || i == a) {
                std::cout << n;
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}