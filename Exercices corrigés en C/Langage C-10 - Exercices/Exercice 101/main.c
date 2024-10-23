#include <stdio.h>
#include <stdlib.h>

int main() {

    float *pv = malloc(sizeof(float) );
    float *pr = malloc(sizeof(float) );
    float *p = malloc(sizeof(float) );


    printf("Veuillez saisir le prix de revient : ");
    scanf("%f", pr);

    printf("Veuillez saisir le prix de vente : ");
    scanf("%f", pv);


    if(*pr > *pv)
        printf("Benefice = %.2f", *pr - *pv);
    else if(*pr < *pv)
        printf("Perte = %.2f", *pv - *pr);
    else
        printf("Ni profit ni perte");




    return 0;
}
