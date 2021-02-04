#include <stdio.h>
#include <string.h>

auto memrev(void* s, size_t n)
{
    memrev(buf, s);
    memrev(buf + s, n);
    memrev(buf, s + n);
}