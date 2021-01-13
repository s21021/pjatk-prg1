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
auto main () -> int {
    auto const x = ask_user_for_integer("x=");
    if (x < 0)
    {
        std::cout<< -x << std::endl;
    }
    else if (x > 0){
        std::cout<< x << std::endl;
    }

    return 0;
}