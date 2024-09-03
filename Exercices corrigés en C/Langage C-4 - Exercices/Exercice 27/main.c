#include <stdio.h>
#include <math.h>

int main() {

    int n;
    float S, i;

    printf("Veuillez saisir la valeur de N : \n");
    scanf("%d", &n);

    S = 0;
    for(i = 0; i <= n; i++){

        S = S + pow(10, i);
    }

    printf("\nLa somme est : %.2f", S);



    return 0;
}
