#include <iostream>
#include <string>

auto amin(int a[], int n ) -> void {

    int najwieksza = a[0];

    for (auto i = 0; i < n ; i++){
        if (a[i] < najwieksza) {
            std::cout << a[i] << " ";
        }
    }
    std::cout << std::endl;
}
int main (){
    const int n = 10;
    int a[n]= {42 , 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12};
    amin (a, n);
    return 0;
}