#include <stdio.h>
#include <math.h>

int main() {

    int nb, i, S;

    printf("Veuillez entrer un nombre : \n");
    scanf("%d", &nb);

    S = 0;
    for(i = 0; i <= nb; i++){

        S = S + ( pow(10, i) );
        printf("S = %d + 10^%d = %d\n", S, i, S);
    }

    printf("\nLa somme est : %d", S);



    return 0;
}
