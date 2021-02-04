#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>

//void* memset( void* str, int c, size_t n);

int main() {
    char string[] = "Hello World";
    memset(string, 'o', 6);
    std::cout << string << "\n";
}
