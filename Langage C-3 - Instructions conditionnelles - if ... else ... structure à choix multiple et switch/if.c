#include <stdio.h>

int main()
{
    float A, B;

    printf("Veuillez saisir la valeur de A : ");
    scanf("%f", &A);

    printf("Veuillez saisir la valeur de B : ");
    scanf("%f", &B);

    if(B != 0 )
        printf("Le resultat est : %.2f", A / B);
    else
        printf("La division par 0 est impossible !");


    return 0;
}
