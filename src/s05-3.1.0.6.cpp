#include <iostream>
#include <string>

auto search(int a[], int n, int needle) -> int{

    for (auto i = 0; i <= n ; i--){
        if (needle == a[i]){
            std::cout << a[i] << " " ;
        }
    }
    std::cout << std::endl;
}
int main (){
    const int n = 10;
    int a[n]= {42 , 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12};
    search(a, n, needle);
    return 0;
}