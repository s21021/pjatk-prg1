#include <iostream>
#include <string>

auto amax(int a[], int n ) -> void {

    int najwieksza = a[0];

    for (auto i = 1; i < n ; i++){
        if (a[i] > najwieksza) najwieksza = a[i];
    }
    std::cout << najwieksza << std::endl;
}
int main (){
    const int n = 10;
    int a[n]= {42 , 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12};
    amax (a, n);
    return 0;
}