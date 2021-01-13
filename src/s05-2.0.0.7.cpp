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
auto main() -> int
{
    auto const limit = ask_user_for_integer("limit=");
    auto const dzielnik = ask_user_for_integer("dzielnik=");
    if (dzielnik == 0) {
        std::cout << "nie dzielimy przez 0" << std::endl;

        return 1;
    }
    int suma = 0;

    for (auto i = limit ; i >= 1 ; i--){
        if (i % dzielnik == 0){
            suma = suma + i;
        }
    }
    std::cout << suma << std::endl;
    return 0;
}