#include <stdio.h>

int main() {

    int n;
    float i, S;

    printf("Veuillez entrer un nombre : \n");
    scanf("%d", &n);



    for(i = 1; i <= n; i++){

        S = S + 1/i;

    }

    printf("La somme est egal a : %.2f\n", S);


    return 0;
}
