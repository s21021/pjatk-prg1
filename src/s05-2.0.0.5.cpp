#include <iostream>
#include <string>

auto ask_user_for_integer(std ::string const prompt) -> int
{
    if (not prompt.empty()) {
        std ::cout << prompt;
    }
    auto value = std ::string{};
    std ::getline(std ::cin, value);
    return std ::stoi(value);
}
auto main() -> int
{

    auto const a = ask_user_for_integer("a =");
    for (auto i = 1 ; i < a; i++){
        if (a % i == 0) {
            std::cout <<  "nie jest liczba pierwszą" << i << std::endl;
        }
        else{
            std::cout << "jest liczba pierwszą" << i << std::endl;
        }
    }
    return 0;
}