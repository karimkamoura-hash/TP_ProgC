#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int i, j, temp;

    // Initialisation de la graine du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre -50 et 100
    for (i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 151) - 50; // valeurs entre -50 et 100
    }

    // Affichage du tableau non trié
    printf("Tableau non trié :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Tri à bulles
    for (i = 0; i < TAILLE - 1; i++) {
        for (j = 0; j < TAILLE - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                // Échange des valeurs
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("\nTableau trié par ordre croissant :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
