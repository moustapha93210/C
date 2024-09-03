#include <stdio.h>

int main() {

    int A, B;

    printf("Veuillez saisir la valeur de A : ");
    scanf("%d", &A);

    printf("Veuillez saisir la valeur de B : ");
    scanf("%d", &B);

    A = A + B;

    B = A - B;

    A = A - B;


    printf("La nouvelle valeur de A est %d\n", A);
    printf("La nouvelle valeur de B est %d\n", B);


    return 0;
}

