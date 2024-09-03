#include <stdio.h>

int main() {

    int N;
    float F;

    printf("Veuillez donner le nombre de copie : ");
    scanf("%d", &N);

    if(N <= 10){
        F = N * 0.30;
    }
    else if(N > 10 && N <= 30){
        F = 10 * 0.30 + (N - 10) * 0.25;
    }
    else if(N > 30){
        F = 10 * 0.30 + 20 * 0.25 + (N - 30) * 0.20;
    }

    printf("Le montant de la facture a payer est : %.2f Euros", F);




    return 0;
}