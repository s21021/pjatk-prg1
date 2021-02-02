#include <iostream>
#include <string>
#include <algorithm>
auto sort_desc(int a[], int n) -> void{

    for (auto i = 0; i < n ; i++){

        std::cout << a[i]<< " ";
    }
    std::cout << std::endl;
}
int main (){
    const int n = 10;
    int a[n]= {42 , 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12};
    std::sort(a , a + 10 , std::greater<int>() );
    sort_desc (a, n);
    return 0;
}
