#include <stdio.h>

int main() {
    // Déclaration des variables
    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708;
    float f = 9.1f;
    double d = 1.0;
    long double ld = 1.0L;

    unsigned char *p; // pointeur pour parcourir les octets
    int taille;

    // Affichage des octets de short
    printf("Octets de short :\n");
    p = (unsigned char *)&s;
    taille = sizeof(s);
    for (int j = 0; j < taille; j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de int
    printf("Octets de int :\n");
    p = (unsigned char *)&i;
    taille = sizeof(i);
    for (int j = 0; j < taille; j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de long int
    printf("Octets de long int :\n");
    p = (unsigned char *)&li;
    taille = sizeof(li);
    for (int j = 0; j < taille; j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de float
    printf("Octets de float :\n");
    p = (unsigned char *)&f;
    taille = sizeof(f);
    for (int j = 0; j < taille; j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de double
    printf("Octets de double :\n");
    p = (unsigned char *)&d;
    taille = sizeof(d);
    for (int j = 0; j < taille; j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de long double
    printf("Octets de long double :\n");
    p = (unsigned char *)&ld;
    taille = sizeof(ld);
    for (int j = 0; j < taille; j++) {
        printf("%02x ", p[j]);
    }
    printf("\n");

    return 0;
}
