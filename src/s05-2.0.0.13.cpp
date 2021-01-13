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

    auto const a = ask_user_for_integer("a=");

    char n = '*';

    for (int i = a; i >= 0; i--) {
        for (int j = i; j > 0; j--) {
            std::cout << n;
        }
        std::cout << std::endl;
    }
    std::cout <<"trojkat"<< std::endl;
    return 0;
}