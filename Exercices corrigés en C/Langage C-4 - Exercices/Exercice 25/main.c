#include <stdio.h>

int main() {

    int N, i;

    printf("veuillez saisir un nombre : \n");
    scanf("%d", &N);

    //BOUCLE WHILE
    i = N + 1;

    while( i <= N + 10 ){

        printf("%d\n", i);
        i++;
    }

    //BOUCLE DO ... WHILE
    i = N + 1;

    do {

        printf("\n%d\n", i);
        i++;

    } while( i <= N + 10 );


    return 0;
}