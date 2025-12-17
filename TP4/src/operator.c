#include "operator.h"

int somme(int num1, int num2)
{
    return num1 + num2;
}

int difference(int num1, int num2)
{
    return num1 - num2;
}

int produit(int num1, int num2)
{
    return num1 * num2;
}

int quotient(int num1, int num2)
{
    if (num2 != 0)
        return num1 / num2;
    return 0;
}

int modulo(int num1, int num2)
{
    if (num2 != 0)
        return num1 % num2;
    return 0;
}

int et_logique(int num1, int num2)
{
    return num1 & num2;
}

int ou_logique(int num1, int num2)
{
    return num1 | num2;
}

int negation(int num1, int num2)
{
    (void) num2; // ignoré pour la négation
    return ~num1;
}
📄 main.c
c
Copier le code
#include <stdio.h>
#include <stddef.h>
#include "operator.h"

int main()
{
    int num1, num2;
    char op;
    int result = 0;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); 

    switch(op)
    {
        case '+':
            result = somme(num1, num2);
            break;

        case '-':
            result = difference(num1, num2);
            break;

        case '*':
            result = produit(num1, num2);
            break;

        case '/':
            result = quotient(num1, num2);
            break;

        case '%':
            result = modulo(num1, num2);
            break;

        case '&':
            result = et_logique(num1, num2);
            break;

        case '|':
            result = ou_logique(num1, num2);
            break;

        case '~':
            result = negation(num1, num2);
            break;

        default:
            printf("Operateur inconnu !\n");
            return 1;
    }

    printf("Resultat : %d\n", result);

    return 0;
}










