#include <stdio.h>

int main() {
    // Types de base
    printf("La taille de char : %zu octets\n", sizeof(char));
    printf("La taille de short : %zu octets\n", sizeof(short));
    printf("La taille de int : %zu octets\n", sizeof(int));
    printf("La taille de long : %zu octets\n", sizeof(long));
    printf("La taille de long long : %zu octets\n", sizeof(long long));
    printf("La taille de float : %zu octets\n", sizeof(float));
    printf("La taille de double : %zu octets\n", sizeof(double));
    printf("La taille de long double : %zu octets\n", sizeof(long double));

    // Pointeurs
    printf("La taille de int* : %zu octets\n", sizeof(int*));
    printf("La taille de int** : %zu octets\n", sizeof(int**));
    printf("La taille de int*** : %zu octets\n", sizeof(int***));

    printf("La taille de char* : %zu octets\n", sizeof(char*));
    printf("La taille de char** : %zu octets\n", sizeof(char**));
    printf("La taille de char*** : %zu octets\n", sizeof(char***));

    printf("La taille de float* : %zu octets\n", sizeof(float*));
    printf("La taille de float** : %zu octets\n", sizeof(float**));
    printf("La taille de float*** : %zu octets\n", sizeof(float***));

    return 0;
}
