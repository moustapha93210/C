#include <stdio.h>


int compteNbChiffre(int N){

    int Nbr = 0;
    int i;

    do{

        N = N / 10;
        Nbr++;

        printf("%d / 10 = %d\n", N, N / 10);
        printf("Nombre sotckes : %d\n", N % 10);
        printf("Nbr = %d\n\n", Nbr);

    }while(N != 0);

    // OU
    /*
    for(i = 0; i <= N; i++ ){

        if(N != 0){

            N = N / 10;
            Nbr++;

            printf("%d / 10 = %d\n", N, N / 10);
            printf("Nombre sotckes : %d\n", N % 10);
            printf("Nbr = %d\n\n", Nbr);

        }

    }
    */

    return Nbr;
}



int main(){

    int N;

    recN:
    printf("Veuillez entrer un entier : \n");
    if( scanf("%d", &N) != 1){
        printf("Erreur ! Veuillez entrer un entier.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recN;// Recommence la boucle si la saisie est invalide
    }

    printf("%d = %d chiffres", N, compteNbChiffre(N));




    return 0;
}
