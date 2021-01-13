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

    long silnia = 1;
    auto i = 1;

    auto const a = ask_user_for_integer("a=");

    while (i <= a){
        silnia *= i;
        i++;
    }
    std::cout << a << "!= " << silnia << std::endl;
    return 0;
}