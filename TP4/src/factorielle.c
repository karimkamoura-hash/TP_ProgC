#include <stdio.h>

// Définition de la fonction factorielle
int factorielle(int num) {

    if (num == 0) {
        printf("fact(0): 1\n");
        return 1;
    } 
    else {
        int valeur = num * factorielle(num - 1);
        printf("fact(%d): %d\n", num, valeur);
        return valeur;
    }
}

int main() {

    int n;

    // Test 1 : factorielle de 5
    n = 5;
    printf("\nCalcul de %d! :\n", n);
    printf("Resultat final : %d\n\n", factorielle(n));

    // Test 2 : factorielle de 3
    n = 3;
    printf("Calcul de %d! :\n", n);
    printf("Resultat final : %d\n\n", factorielle(n));

    // Test 3 : factorielle de 7
    n = 7;
    printf("Calcul de %d! :\n", n);
    printf("Resultat final : %d\n\n", factorielle(n));

    return 0;
}
