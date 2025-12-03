#include <stdio.h>

int main() {

    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int n = 0; n < taille; n++) {

        int valeur = nombres[n];

        printf("Nombre : %d → Binaire : ", valeur);

        /* Affichage des bits de 31 à 0 (int = 32 bits) */
        for (int i = 31; i >= 0; i--) {

            /* Test du bit i avec un masque */
            int bit = (valeur >> i) & 1;
            printf("%d", bit);

            /* Optionnel : espace tous les 4 bits pour lisibilité */
            if (i % 4 == 0) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}




