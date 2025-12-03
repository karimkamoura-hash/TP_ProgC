#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {
    int tab_int[TAILLE];
    float tab_float[TAILLE];

    // Initialisation de la graine du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage des tableaux avec des valeurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        *(tab_int + i) = rand() % 101;           // Entiers entre 0 et 100
        *(tab_float + i) = ((float)rand() / RAND_MAX) * 10.0f; // Float entre 0.0 et 10.0
    }

    // Affichage avant multiplication
    printf("Tableau d'entiers (avant multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(tab_int + i));
    }
    printf("\n");

    printf("Tableau de nombres flottants (avant multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(tab_float + i));
    }
    printf("\n");

    // Multiplication par 3 des éléments dont l'indice est divisible par 2
    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(tab_int + i) *= 3;
            *(tab_float + i) *= 3.0f;
        }
    }

    // Affichage après multiplication
    printf("\nTableau d'entiers (après multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(tab_int + i));
    }
    printf("\n");

    printf("Tableau de nombres flottants (après multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(tab_float + i));
    }
    printf("\n");

    return 0;
}
