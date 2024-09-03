#include <stdio.h>

int main() {

    int nb, i;

    printf("veuillez entrer un nombre de depart : \n");
    scanf("%d", &nb);

    //BOUCLE WHILE
    i = nb + 1;

    while( i <= (nb + 10) ){

        printf("%d\n", i);
        i++;
    }


    return 0;
}
