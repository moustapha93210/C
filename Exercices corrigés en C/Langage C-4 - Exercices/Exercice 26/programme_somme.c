#include <stdio.h>

int main() {

    int nb;
    float i, S;

    printf("Veuillez entrer un nombre : \n");
    scanf("%d", &nb);



    for(i = 1; i <= nb; i++){

        S = S + (1/i);

    }

    printf("La somme est egal a : %.2f\n", S);


    return 0;
}
