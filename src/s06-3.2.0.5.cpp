#include <stdio.h>
#include <string.h>
#include <iostream>


//void * memcpy (void * dest, const void * src, size_t count);

int main()
{
    int a[10] = {42 , 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12};
    int n[7];

    memcpy(n , a ,sizeof (int)*7);
    for (int i=0; i<5; i++)
        std::cout << n[i] << std::endl;
    return 0;
}