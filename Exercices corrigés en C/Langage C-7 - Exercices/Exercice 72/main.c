#include <stdio.h>

// Déclaration de la fonction qui définir si N est premier où non
void premier(int N){

    int i, estPremier;
    estPremier = 1;

    for(i = 2; i < N/2; i++) {

        if (N % i == 0){
            estPremier = 0;
            break;
        }
    }

    if(estPremier == 1)
        printf("%d est un nombre premier.\n", N);
    else
        printf("%d est un nombre non premier\n", N);

}



int main(){

    int N;

    // Saisie et lecture de la variable N
    printf("Veuillez entrer un nombre : ");
    scanf("%d", &N);


    // Appel de la fonction premier(int N)
    premier(N);
    premier(16);
    premier(33);
    premier(97);
    premier(7);



    return 0;
}
