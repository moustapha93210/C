#include <stdio.h>

int main(){

    float N[10];
    float S, M;
    int i, nbr;

    printf("Veuillez saisir les notes : \n");
    S = 0;
    for(i = 0; i < 10; i++){

        printf("T[%d] = ", i + 1);
        scanf("%f", &N[i]);

        S = S + N[i];
    }

    M = S / 10;
    nbr = 0;

    for(i = 0; i < 10; i++){

        if(N[i] > M)
            nbr = nbr + 1;

    }

    printf("Moyenne de la classe : %.2f/20\n", M);
    printf("Nombre de notes superieur a la moyenne de la classe : %d\n", nbr);




    return 0;
}
