#include <iostream>
#include <string>

auto print(){
    std::string a = "Hello, World!";
    std::cout << "wskaznik = " << &a << " : " << a <<std::endl;
}

int main(){
    std::string *a = "hello, World!";
    std::cout << *a << " : " << a << std::endl;
    return 0;

}