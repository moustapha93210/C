#include <stdio.h>


int nbPremier(int N){

    int i, estPremier;

    for(i = 2; i < N/2; i++){


        if(N % i == 0){

            estPremier = 0;

            printf("%d // %d = %d\n", N, i, N % i);
            printf("estPremier = %d\n\n", estPremier);
            break;

        }
        else{

            estPremier = 1;

            printf("%d // %d = %d\n", N, i, N % i);
            printf("estPremier = %d\n\n", estPremier);
        }
    }

    return estPremier;
}


int main(){

    int N;


    // Saisie, contrôle et lecture de la variable entière N
    recN:
    printf("Veuillez saisire un entier N : \n");
    if( scanf("%d", &N) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recN;// Recommence la boucle si la saisie est invalide
    }

    if( nbPremier(N) == 0 )
        printf("%d n'est pas un nombre premier.\n", N);
    else
        printf("%d est un nombre premier.\n", N);





    return 0;
}
