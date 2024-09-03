#include <stdio.h>

int main() {

    int A, B, C;

    printf("Veuillez saisir la valeur de A : ");
    scanf("%d", &A);

    printf("Veuillez saisir la valeur de B : ");
    scanf("%d", &B);

    C = A;
    A = B;
    B = C;

    printf("La nouvelle valeur de A est %d\n", A);
    printf("La nouvelle valeur de B est %d\n", B);



    return 0;
}

