#include <stdio.h>

int main(){

    long n, n0;
    int nbr, i, C;

    printf("Veuillez entrer un entier : \n");
    scanf("%ld", &n);

    nbr = 1;
    n0 = n;

    for(i = 1; i <= n; i++){



        printf("Iteration numero %d\n", i);
        printf("n = %ld\n", n);
        printf("%ld / 10 = %d\n\n", n, C);

        C = n / 10;

        if(C != 0){
            nbr++;
            n = C;
        }

    }

    printf("Iteration numero %d\n", i);
    printf("n = %ld\n", n);
    printf("%ld / 10 = %d\n\n", n, C);

    printf("Le nombre total de chiffres dans le nombre %ld est de : %d\n", n0, nbr);





    return 0;
}
