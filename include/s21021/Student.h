#ifndef PJATK_PRG1_STUDENT_H
#define PJATK_PRG1_STUDENT_H

namespace s21021 {
class Student {
    std::string const imie, index, nazwisko;
    int const semestr;
    double const srednia;

    Student(std::string, std::string, std::string, int, double);
    auto to_string() const -> std::string;
}
}  // namespace s21021
#endif  // PJATK_PRG1_STUDENT_H