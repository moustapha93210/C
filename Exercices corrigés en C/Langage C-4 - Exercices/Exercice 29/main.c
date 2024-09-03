#include <stdio.h>
#include <math.h>

int main() {

    int n, S, i, j;
    //float S, i;


    printf("Veuillez saisir un nombre : \n");
    scanf("%d", &n);

    S = 0;
    j = 1;
    for(i = 1; i <= n; i++){

        S = S + pow(j, 2);
        j = j + 2;
    }

    printf("La somme est : %d", S);




    return 0;
}
