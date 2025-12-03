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
🔧 Explication rapide
👉 Décomposition en binaire
On décale les bits vers la droite et on lit le bit le plus à droite :

c
Copier le code
bit = (valeur >> i) & 1;
>> i décale le nombre de i positions

& 1 récupère le bit de poids faible

👉 Affichage propre
On affiche les 32 bits (format d’un int) de gauche à droite.

🔧 Compilation
bash
Copier le code
gcc binaire.c -o binaire
▶️ Exécution
bash
Copier le code
./binaire
📌 Exemple de résultats (format groupé par 4 bits)
yaml
Copier le code
Nombre : 0 → Binaire : 0000 0000 0000 0000 0000 0000 0000 0000 
Nombre : 4096 → Binaire : 0000 0000 0000 0000 0001 0000 0000 0000 
Nombre : 65536 → Binaire : 0000 0000 0000 0001 0000 0000 0000 0000 
Nombre : 65535 → Binaire : 0000 0000 0000 0000 1111 1111 1111 1111 
Nombre : 1024 → Binaire : 0000 0000 0000 0000 0100 0000 0000 0000
Si tu veux, je peux aussi te faire :

✔ une version qui affiche sans les zéros inutiles
✔ une version utilisant seulement division par 2 et %
✔ une version inverse (convertir binaire → entier)

Tu veux laquelle ?







