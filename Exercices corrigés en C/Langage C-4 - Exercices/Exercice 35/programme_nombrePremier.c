#include <stdio.h>

int main(){

    int nb, i, estPremier;
    float C;

    printf("Veuillez entrer un nombre : \n");
    scanf("%d", &nb);

    for(i = 2; i <= nb / 2; i++){

        C = nb % i;

        printf("%d // %i = %.2f\n", nb, i, C);

        if(C == 0) {
            printf("%d n'est pas un nombre premier. Il a un reste qui est egal a 0, il est divisible par %d, donc il n'est pas premier.", nb, i);
            estPremier = 0;
            break;
        }
        else
            estPremier = 1;
    }

    if(estPremier == 1)
        printf("%d est un nombre premier. il n'a aucun reste nul, il est donc divisible que par 1 ou lui meme (%d).", nb, nb);






    return 0;
}


/*
    float calcul, calcul2, calcul3, calcul4;

    calcul = 5 / 4;
    calcul2 = 5 % 4;
    calcul3 = 5 / 8;
    calcul4 = 5 % 8;

    printf("5 / 5 = %.2f\n", calcul);
    printf("5 // 5 = %.2f\n", calcul2);
    printf("5 / 1 = %.2f\n", calcul3);
    printf("5 // 1 = %.2f\n", calcul4);
*/