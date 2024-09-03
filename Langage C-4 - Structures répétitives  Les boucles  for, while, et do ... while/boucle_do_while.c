#include <stdio.h>

int main()
{
    int N, i;

     do {

        printf("Veuillez entrer un nombre : ");
        scanf("%d", &N);

    } while(N < 0 || N > 10);

    //1ère manière d'afficher la table de multiplication
    while(i <= 10) {

        printf("%d * %d = %d \n", N, i, N * i);
        i++;
    }

    //2ème manière d'afficher la table de multiplication
    for(i = 0; i <= 10; i++) {

        printf("%d * %d = %d\n", N, i, N*i);

    }

    return 0;
}