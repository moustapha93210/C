#include <stdio.h>

int main()
{
    int N, i;

    printf("Veuillez entrer un nombre compris entre 10 et 20 : ");
    scanf("%d", &N);

    while(N < 10 || N > 20) {

        if(N < 10) {
            printf("Plus petit ! \n");
        }
        else if(N > 20) {
            printf("Plus grand ! \n");
        }

        printf("Veuillez entrer un nombre compris entre 10 et 20 : ");
        scanf("%d", &N);

    }


    printf("Bravo ! vous avez tapé un nombre compris entre 10 et 20");





    return 0;
}