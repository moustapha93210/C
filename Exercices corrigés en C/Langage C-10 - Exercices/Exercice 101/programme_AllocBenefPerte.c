#include <stdio.h>
#include <stdlib.h>

int main() {

    float *pv = malloc(1 * sizeof(float) );
    float *pr = malloc(1 * sizeof(float) );
    float *benefice = malloc(1 * sizeof(float) );
    float *perte = malloc(1 * sizeof(float) );

    printf("Veuillez saisir le prix de revient : ");
    scanf("%f", pr);

    printf("Veuillez saisir le prix de vente : ");
    scanf("%f", pv);

    *benefice = *pv - *pr;

    *perte = *pr - *pv;

    if(*benefice > 0)
        printf("Benefice = %.2f", *benefice);
    else if(*benefice < 0)
        printf("Perte = %.2f", *perte);
    else
        printf("Ni profit, ni perte.");

    free(pv);
    free(pr);
    free(benefice);
    free(perte);




    return 0;
}
