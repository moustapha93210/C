#include <stdio.h>

int main(){

    int T[10];
    int i, n, x;

    printf("Veuillez saisir les elements du tableau : \n");

    for(i = 0; i < 10; i++){

        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);

    }

    printf("\nVeuillez saisir la valeur de n : \n");
    scanf("%d", &n);

    x = 0;

    for(i = 0; i < 10; i++){

        if(T[i] == n){

            x++;

        }

    }

    printf("Le nombre d'occurrence de %d dans le tableau T est : %d\n", n, x);





    return 0;
}
