#ifndef LISTE_H
#define LISTE_H

// Structure couleur
struct couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

// Element d'une liste chaînée
struct element {
    struct couleur data;
    struct element *suivant;
};

// Structure liste
struct liste_couleurs {
    struct element *tete;
};

// Prototypes
void init_liste(struct liste_couleurs *l);
void insertion(struct couleur *c, struct liste_couleurs *l);
void parcours(struct liste_couleurs *l);

#endif
