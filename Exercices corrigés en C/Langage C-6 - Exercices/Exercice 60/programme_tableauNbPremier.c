#include <stdio.h>

int main(){

    int N, i;

    recn:
    printf("Veuillez saisir un nombre entier : \n");
    if( scanf("%d", &N) != 1 || N <= 0){
        printf("Erreur Veuillez entrer un nombre entier positif.\n");
        while(getchar() != '\n');
        goto recn;
    }

    int T[N];
    int compteur, x, estPremier;

    compteur = 0;
    x = 2;

    do{
        estPremier = 0;

        for(i = 2; i <= x / 2; i++){

            if(x % i == 0){

                estPremier = 1;

                printf("%d // %d = %d\n", x, i, x % i);
                break;

            }

        }

        if(estPremier == 0){

            T[compteur] = x;
            compteur++;

        }

        x++;
    }while(compteur < N);

    printf("Les %d premiers nombres premiers sont : \n", N);

    for(i = 0; i < N; i++)
        printf("%d\n", T[i]);



    return 0;
}
