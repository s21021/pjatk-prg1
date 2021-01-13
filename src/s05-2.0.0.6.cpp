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
void relation(int a, int b)
{
    if (a > b) {
        std::cout << a << ">" << b << std::endl;
    } else if (a < b) {
        std::cout << a << "<" << b << std::endl;
    } else if (a == b) {
        std::cout << a << "==" << b << std::endl;
    }
}
auto main() -> int
{
    int b;
    int tab[10];

    auto const n = ask_user_for_integer("długosc relaci:");
    auto const a = ask_user_for_integer("podaj liczba :");


    for (int i = 0; i < n; i++) {
        b = ask_user_for_integer("liczby relacji:");
        tab[i] = b;
    }

    for (int i = 0; i < n; i++) {
        b = tab[i];
        relation(a, b);
    }
    return 0;
}