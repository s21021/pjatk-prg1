#include <iostream>
#include <string>

auto iota(int a[], int n, int start) -> void{
    for (auto i = 0; i < n ; i++){
        std::cout << start++ << " " ;
    }
    std::cout << std::endl;
}
int main (){
    int start = 5;
    const int n = 4 ;
    int a[n]= {};
    iota (a, n, start);
    return 0;
}
