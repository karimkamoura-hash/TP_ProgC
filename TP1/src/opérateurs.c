#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    /* Opérateurs arithmétiques */
    printf("Addition : a + b = %d\n", a + b);
    printf("Soustraction : a - b = %d\n", a - b);
    printf("Multiplication : a * b = %d\n", a * b);
    printf("Division : a / b = %d\n", a / b);
    printf("Modulo : a %% b = %d\n\n", a % b);

    /* Opérateurs logiques / comparaison */
    printf("a == b ? %d\n", a == b);  // 0 = faux, 1 = vrai
    printf("a > b ? %d\n", a > b);    // 0 = faux, 1 = vrai

    return 0;
}
