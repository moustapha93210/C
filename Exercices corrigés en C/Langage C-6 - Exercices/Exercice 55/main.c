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

        if(n == T[i]){

            x++;

        }

    }

    if(x == 0)
        printf("%d ne se trouve pas dans le tableau.\n", n);
    else
        printf("%d se trouve dans le tableau.", n);







    return 0;
}
