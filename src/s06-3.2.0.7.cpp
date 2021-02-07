//#include <stddef.h>
//#include <stdio.h>
//
//void memrev( void* s, size_t n)
//{
//    unsigned char* b = (unsigned char*) s;
//    unsigned char* e = b + n;
//
//    while ((b != e) && (b + 1 != e)) {
//        unsigned char c = *b;
//        --e;
//        *b = *e;
//        *e = c;
//        ++b;
//    }
//}
//int main()
//{
//    double pi = 3.1415926535897932384626433832795028841971693993751058209;
//
//    printf( "%f\n", pi);
//    memrev( &pi, sizeof(pi));
//
//    memrev( &pi, 4);
//    memrev( ((unsigned char*) &pi)+4, 4);
//
//    double x = 1995128153082475855805240843511529472.0000000000000000;
//
//    printf( "%f\n", x);
//    memrev( &x, sizeof(x));
//
//    x = -6.0868766365730135e-268;
//
//    return 0;
//}