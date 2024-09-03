#include <stdio.h>

int main() {

    float a, b;

    float *p = &a;
    float *q;
    q = &b;

    printf("Veuillez saisir la valeur de a : \n");
    scanf("%f", &a);

    printf("Veuillez saisir la valeur de b : \n");
    scanf("%f",q);


    printf("A + B = %.2f\n", *p + *q);
    printf("A x B = %.2f\n", *p * *q);
    printf("A - B = %.2f\n", *p - *q);

    if(*q != 0)
        printf("A / B = %.2f\n", *p / *q);
    else
        printf("Erreur ! La division par 0 est impossible.\n");

    return 0;
}
