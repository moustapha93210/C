#include <stdio.h>

int main(){

    int T[10];
    int i, n, indice_n, valeur_T;

    for(i = 0; i < 10; i++){

        printf("T[%d] = ", i);
        scanf("%d", &T[i]);

    }

    printf("\nVeuillez saisir un entier n : \n");
    scanf("%d", &n);

    indice_n = 0;
    valeur_T = 0;


    for(i = 0; i < 10; i++){


        if(n == T[i]){

            indice_n = i;
            valeur_T = T[i];

            printf("n =  %d\n", n);
            printf("T[%d] = %d \n", indice_n, valeur_T);
            printf("%d se trouve dans le tableau\n\n", n);

        }


    }

    if(indice_n == 0 && valeur_T == 0)
        printf("%d ne se trouve pas dans le tableau.\n", n);







    return 0;
}
