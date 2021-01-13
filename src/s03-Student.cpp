#include <s21021/Student.h>

#include <iostream>
#include <sstream>

s21021::Student::Student(std::string imie,
                         nazwisko,
                         index,
                         int semestr,
                         double srednia)
        : imie{imie}
        , nazwisko{nazwisko}
        , index{numer index}
        , semestr{semestr}
        , srednia{srednia}
{}
auto s21021::Student::to_string() const -> std::string
{
    auto out = std::ostringstream{};
    out << "imie: " << imie << "nazwisko: " << nazwisko << "Index: " << index
        << "Semestr: " << semestr << "srednia: " << srednia;

    return out.str();
}

auto main() -> int
{
    auto student = s21021::Student{"J", "M", "s21021", 1, 3.5};
    std::cout << student.to_string() << "\n";
    return 0;
}
