#include <stdio.h>

int main() {

    int nb, i;

    printf("veuillez entrer un nombre de depart : \n");
    scanf("%d", &nb);

    //BOUCLE DO ... WHILE
    i = nb + 1;

    do {

        printf("%d\n", i);
        i++;

    } while( i <= (nb + 10) );


    return 0;
}