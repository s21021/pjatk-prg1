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

    do{
        silnia *= i;
        i++;
    } while (i <= a);
    std::cout << a << "!= " << silnia << std::endl;
    return 0;
}