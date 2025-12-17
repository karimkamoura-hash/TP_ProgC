#include <stdio.h>
#include <string.h>
#include "fichier.h"

int main()
{
    int choix;
    char nom_fichier[100];
    char message[255];

    while (1)
    {
        printf("\nQue souhaitez-vous faire ?\n");
        printf("1. Lire un fichier\n");
        printf("2. Ecrire dans un fichier\n");
        printf("3. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        getchar(); // nettoyer buffer entrée clavier

        switch (choix)
        {
            case 1:
                printf("\nEntrez le nom du fichier a lire : ");
                scanf("%s", nom_fichier);
                lire_fichier(nom_fichier);
                break;

            case 2:
                printf("\nEntrez le nom du fichier dans lequel vous souhaitez ecrire : ");
                scanf("%s", nom_fichier);

                getchar();

                printf("Entrez le message a ecrire : ");
                fgets(message, sizeof(message), stdin);

                // retirer \n final
                message[strcspn(message, "\n")] = '\0';

                ecrire_dans_fichier(nom_fichier, message);
                break;

            case 3:
                printf("Au revoir !\n");
                return 0;

            default:
                printf("Choix invalide !\n");
        }
    }

    return 0;
}



