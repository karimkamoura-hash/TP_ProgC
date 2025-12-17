#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

// Initialise la liste
void init_liste(struct liste_couleurs *l)
{
    l->tete = NULL;
}

// Insert une couleur en tête
void insertion(struct couleur *c, struct liste_couleurs *l)
{
    struct element *nouveau = malloc(sizeof(struct element));
    if (!nouveau) {
        printf("Erreur d’allocation memoire !\n");
        return;
    }

    nouveau->data = *c;
    nouveau->suivant = l->tete;
    l->tete = nouveau;
}

// Parcours la liste et affiche chaque couleur
void parcours(struct liste_couleurs *l)
{
    struct element *courant = l->tete;
    int i = 1;

    while (courant != NULL)
    {
        printf("Couleur %d : R=%02X G=%02X B=%02X A=%02X\n",
               i,
               courant->data.r,
               courant->data.g,
               courant->data.b,
               courant->data.a);

        courant = courant->suivant;
        i++;
    }
}
