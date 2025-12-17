#include <stdio.h>
#include <string.h>

int compter_occurrences(char *ligne, char *phrase)
{
    int count = 0;
    int i, j;
    int lenL = strlen(ligne);
    int lenP = strlen(phrase);

    for (i = 0; i <= lenL - lenP; i++)
    {
        for (j = 0; j < lenP; j++)
        {
            if (ligne[i + j] != phrase[j])
                break;
        }
        if (j == lenP)
            count++;
    }

    return count;
}

int main()
{
    char nom_fichier[100];
    char phrase[100];
    char ligne[500];

    printf("Entrez le nom du fichier : ");
    scanf("%s", nom_fichier);

    getchar(); // nettoyer \n du buffer

    printf("Entrez la phrase que vous souhaitez rechercher : ");
    fgets(phrase, 100, stdin);

    phrase[strcspn(phrase, "\n")] = '\0'; // enlever le \n final

    FILE *fp = fopen(nom_fichier, "r");

    if (fp == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_fichier);
        return 1;
    }

    printf("\nRésultats de la recherche :\n");

    int num_ligne = 0;
    int trouve = 0;

    while (fgets(ligne, sizeof(ligne), fp))
    {
        num_ligne++;

        int nb = compter_occurrences(ligne, phrase);

        if (nb > 0)
        {
            printf("Ligne %d, %d fois\n", num_ligne, nb);
            trouve = 1;
        }
    }

    if (!trouve)
        printf("Aucune occurence trouvee.\n");

    fclose(fp);

    return 0;
}
