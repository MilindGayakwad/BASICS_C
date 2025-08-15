#include <stdio.h>
#include <stdbool.h>   // for bool type in C99+
#include <string.h>    // for string operations

int main() {
    printf("===== BASIC DATA TYPES =====\n");

    // Integer types
    int a = 10;
    short int s = -32000;
    long int l = 123456789;
    long long int ll = 9223372036854775807;
    unsigned int ua = 4000000000U;

    printf("int: %d (size: %zu bytes)\n", a, sizeof(a));
    printf("short int: %hd (size: %zu bytes)\n", s, sizeof(s));
    printf("long int: %ld (size: %zu bytes)\n", l, sizeof(l));
    printf("long long int: %lld (size: %zu bytes)\n", ll, sizeof(ll));
    printf("unsigned int: %u (size: %zu bytes)\n", ua, sizeof(ua));

    // Floating point types
    float f = 3.14159f;
    double d = 2.718281828;
    long double ld = 1.234567890123456789L;

    printf("\nfloat: %.5f (size: %zu bytes)\n", f, sizeof(f));
    printf("double: %.9lf (size: %zu bytes)\n", d, sizeof(d));
    printf("long double: %.18Lf (size: %zu bytes)\n", ld, sizeof(ld));

    // Character type
    char c = 'A';
    unsigned char uc = 255;
    signed char sc = -128;

    printf("\nchar: %c (ASCII: %d) (size: %zu bytes)\n", c, c, sizeof(c));
    printf("unsigned char: %u (size: %zu bytes)\n", uc, sizeof(uc));
    printf("signed char: %d (size: %zu bytes)\n", sc, sizeof(sc));

    // Boolean (C99+)
    bool isCfun = true;
    printf("\nbool: %d (true=1, false=0) (size: %zu bytes)\n", isCfun, sizeof(isCfun));

    printf("\n===== DERIVED DATA TYPES =====\n");

    
    printf("\n===== TYPEDEF (alias) =====\n");
    typedef unsigned int uint;
    uint age = 25;
    printf("typedef unsigned int as uint: %u (size: %zu bytes)\n", age, sizeof(age));

    return 0;
}
