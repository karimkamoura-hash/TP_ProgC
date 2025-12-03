#include <stdio.h>

int main() {

    int n = 5;      // Hauteur de la pyramide
    int i, j;

    for (i = 1; i <= n; i++) {

        /* 1. Affichage des espaces avant les nombres */
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        /* 2. Affichage des nombres croissants */
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        /* 3. Affichage des nombres décroissants */
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        /* Saut de ligne pour passer au niveau suivant */
        printf("\n");
    }

    printf("Generation de la pyramide terminee.\n");

    return 0;
}
