#include <stdio.h>

int main() {
    int compteur = 5;  // valeur à tester (doit être < 10)

    if (compteur >= 10) {
        printf("Erreur : compteur doit etre strictement inferieur a 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {

            if (i == 1) {
                printf("* ");
            }
            else if (i == 2) {
                printf("* ");
            }
            else if (i < compteur && i > 2) {
                if (j == 1 || j == i)
                    printf("* ");
                else
                    printf("# ");
            }
            else if (i == compteur) {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
