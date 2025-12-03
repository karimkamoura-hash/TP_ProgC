#include <stdio.h>

int main() {
    /* Types char */
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 250;

    /* Types short */
    short s = 123;
    signed short ss = -123;
    unsigned short us = 65000;

    /* Types int */
    int i = 1000;
    signed int si = -1000;
    unsigned int ui = 4000000000U;

    /* Types long int */
    long int li = 123456L;
    signed long int sli = -123456L;
    unsigned long int uli = 4000000000UL;

    /* Types long long int */
    long long int lli = 123456789LL;
    signed long long int slli = -123456789LL;
    unsigned long long int ulli = 123456789ULL;

    /* Types flottants (pas de signed/unsigned) */
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.618033988749L;

    /* Affichage */
    printf("char                = %c\n", c);
    printf("signed char         = %d\n", sc);
    printf("unsigned char       = %u\n\n", uc);

    printf("short               = %d\n", s);
    printf("signed short        = %d\n", ss);
    printf("unsigned short      = %u\n\n", us);

    printf("int                 = %d\n", i);
    printf("signed int          = %d\n", si);
    printf("unsigned int        = %u\n\n", ui);

    printf("long int            = %ld\n", li);
    printf("signed long int     = %ld\n", sli);
    printf("unsigned long int   = %lu\n\n", uli);

    printf("long long int       = %lld\n", lli);
    printf("signed long long int= %lld\n", slli);
    printf("unsigned long long int= %llu\n\n", ulli);

    printf("float               = %f\n", f);
    printf("double              = %lf\n", d);
    printf("long double         = %Lf\n", ld);

    return 0;
}
