#include <stdio.h>
#include <stdlib.h>

#define TAILLE 100

// Recherche dichotomique dans un tableau trié
int recherche_dichotomique(int tab[], int n, int valeur) {
    int gauche = 0;
    int droite = n - 1;

    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;

        if (tab[milieu] == valeur) {
            return 1; // trouvé
        } else if (tab[milieu] < valeur) {
            gauche = milieu + 1; // chercher dans la moitié droite
        } else {
            droite = milieu - 1;  // chercher dans la moitié gauche
        }
    }

    return 0; // pas trouvé
}

int main() {
    int tab[TAILLE];

    // Initialisation du tableau trié avec des valeurs croissantes
    for (int i = 0; i < TAILLE; i++) {
        tab[i] = i; // par exemple : 0,1,2,...,99
    }

    // Affichage du tableau trié
    printf("Tableau trié :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Demande de l'entier à chercher
    int valeur;
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Recherche dichotomique
    if (recherche_dichotomique(tab, TAILLE, valeur)) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
