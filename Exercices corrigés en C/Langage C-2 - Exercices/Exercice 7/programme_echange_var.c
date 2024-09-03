#include <stdio.h>

int main() {

    int A, B, C;

    printf("Veuillez saisir A : ");
    scanf("%d", &A);

    printf("Veuillez saisir B : ");
    scanf("%d", &B);

    C = B;
    B = A;
    A = C;

    printf("A = %d\n", A);
    printf("B = %d\n", B);



    return 0;
}

