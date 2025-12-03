#include <stdio.h>

int main() {
    // Déclaration des variables
    char c = 'A';
    short s = 123;
    int i = 456789;
    long int li = 1234567890;
    long long int lli = 9876543210;
    float f = 3.14f;
    double d = 2.71828;
    long double ld = 1.61803398875;

    // Déclaration des pointeurs
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // Avant manipulation
    printf("Avant la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)pi, *pi);
    printf("Adresse de li : %p, Valeur de li : %lx\n", (void*)pli, *pli);
    printf("Adresse de lli : %p, Valeur de lli : %llx\n", (void*)plli, *plli);

    // Pour float/double, on peut afficher en hex en type punning via union
    union {
        float f;
        unsigned int u;
    } uf = {f};
    union {
        double d;
        unsigned long long int u;
    } ud = {d};
    union {
        long double ld;
        unsigned long long int u[2]; // dépend de l'implémentation
    } uld = {ld};

    printf("Adresse de f : %p, Valeur de f : %x\n", (void*)pf, uf.u);
    printf("Adresse de d : %p, Valeur de d : %llx\n", (void*)pd, ud.u);
    printf("Adresse de ld : %p, Valeur de ld : %llx%llx\n", (void*)pld, uld.u[1], uld.u[0]);

    // Manipulation des variables via pointeurs
    *pc = 'B';
    *ps += 1;
    *pi += 1;
    *pli += 1;
    *plli += 1;
    *pf = 1.0f;
    *pd = 1.0;
    *pld = 1.0L;

    // Mise à jour des unions pour affichage
    uf.f = *pf;
    ud.d = *pd;
    uld.ld = *pld;

    // Après manipulation
    printf("\nAprès la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)pi, *pi);
    printf("Adresse de li : %p, Valeur de li : %lx\n", (void*)pli, *pli);
    printf("Adresse de lli : %p, Valeur de lli : %llx\n", (void*)plli, *plli);
    printf("Adresse de f : %p, Valeur de f : %x\n", (void*)pf, uf.u);
    printf("Adresse de d : %p, Valeur de d : %llx\n", (void*)pd, ud.u);
    printf("Adresse de ld : %p, Valeur de ld : %llx%llx\n", (void*)pld, uld.u[1], uld.u[0]);

    return 0;
}
