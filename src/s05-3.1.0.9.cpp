#include <iostream>
#include <string>

auto quicksort(int a[], int n) -> void{

    for (auto i = 0; i < n ; i++){

        std::cout << a[i]<< " ";
    }
    std::cout << std::endl;
}
int main (){
    const int n = 10;
    int a[n]= {42 , 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12};
    quicksort(a ,n - 1);
    quicksort(a , n);
    return 0;
}