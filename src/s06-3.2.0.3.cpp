#include <iostream>
#include <string>

auto swap(int *a, int *b)
{
    int pom = *a;
    *a = *b;
    *b = pom;
}

int main()
{
    auto a = int{42};
    auto b = int{64};

    swap(&a , &b);

    std::cout << a << " : "<< b << std::endl;

    return 0;
}