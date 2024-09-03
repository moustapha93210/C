#include <stdio.h>


int nbrChiffres(int N){

    int nbr = 0;

    do{

        N = N / 10;
        nbr++;
        
        /*
        printf("%d / 10 = %d\n", N, N / 10);
        printf("Nombre sotckes : %d\n", N % 10);
        printf("Nbr = %d\n\n", Nbr);
         */

    }while(N != 0);



    return nbr;
}



int main(){

    int N;


    printf("Veuillez entrer un entier : \n");
    scanf("%d", &N);

    printf("Nombre de chiffres dans le nombre %d est : %d", N, nbrChiffres(N));




    return 0;
}
