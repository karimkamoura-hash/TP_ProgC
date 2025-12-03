#include <stdio.h>

int main() {
    int d = 0x00080008;  // Exemple : 4ᵉ et 20ᵉ bits à 1

    int bit4  = (d >> 3) & 1;   // Extraction du 4ᵉ bit (position 3)
    int bit20 = (d >> 19) & 1;  // Extraction du 20ᵉ bit (position 19)

    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
