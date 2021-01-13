#include <iostream>
#include <string>
auto main(int, char* argv[]) -> int
{
    auto const Student = std::string{argv[1]};
    auto haslo         = std::string{};
    std::cout << "Podaj haslo: ";
    std::getline(std::cin, haslo);

    while (haslo != "Student") {
        std::cout << "haslo zle prosze podać jeszcze raz:";
        std::getline(std::cin, haslo);
    }
    if (haslo == "Student") {
        std::cout << "hasło poprawne \n";
    }
    return 0;
}
