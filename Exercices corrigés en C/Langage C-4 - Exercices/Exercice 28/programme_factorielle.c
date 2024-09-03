#include <stdio.h>

int main() {

    int nb;
    float i;
    long double factorielle;

    debut:
    printf("Veuillez saisir un nombre : \n");
    scanf("%d", &nb);



    if(nb > 0){

        factorielle = 1;
        for(i = 1; i <= nb; i++){

            factorielle = factorielle * i;

            printf("%d! = %.0Lf x %.0f\n", nb, factorielle, i);
        }

        printf("\n%d! = %.0Lf", nb, factorielle);
    }
    else if(nb == 0){

        printf("0! = 1");
    }
    else{
        printf("Veuillez entrer un nombre positif\n\n");
        goto debut;
    }




    return 0;
}
