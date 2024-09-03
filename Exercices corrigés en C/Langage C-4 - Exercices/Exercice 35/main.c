#include <stdio.h>

int main(){

    int N, i, estPremier;

    printf("Veuillez entrer un nombre : \n");
    scanf("%d", &N);

    estPremier = 1;

    for(i = 2; i <= N / 2; i++){

        if(N % i == 0) {
            estPremier = 0;
            break;
        }
    }

    if(estPremier == 1)
        printf("%d est un nombre premier.", N);
    else
        printf("%d est un nombre non premier.", N);



    return 0;
}

