#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf(" \t Programme qui calcule la somme \n");

    int A, B;

    printf(" Veuillez entrer un chiffre : ");
    scanf("%d", &A);

    printf(" Veuillez entrer un chiffre : ");
    scanf("%d", &B);

    printf("La somme des 2 chiffre est de %d", A + B);

    return 0;
}