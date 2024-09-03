#include <stdio.h>



int main(){

    int T[6], S;
    int *P;

    P = T;

    printf("Veuillez saisir les elements du tableau : \n");

    for(P = T; P < T + 6; P++){

        printf("T[%d] = ", P - T);
        scanf("%d", P);

    }

    S = 0;
    for(P = T; P < T + 6; P++)
        S = S + *P;


    printf("La somme des elements du tableau est : %d", S);


    return 0;
}
