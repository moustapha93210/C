#include <stdio.h>

int main(){

    int T[5];
    int i, n, nbOccurrence, indice_nbOccurrence, valeur_T;

    for(i = 0; i < 5; i++){

        printf("T[%d] = ", i);
        scanf("%d", &T[i]);

    }

    printf("\nVeuillez saisir un entier n : \n");
    scanf("%d", &n);

    nbOccurrence = 0;
    indice_nbOccurrence = 0;
    valeur_T = 0;

    for(i = 0; i < 5; i++){

        if(n == T[i]){

            indice_nbOccurrence = i;
            valeur_T = T[i];
            nbOccurrence++;

            printf("T[%d] = %d\n", indice_nbOccurrence, valeur_T);

        }

    }

    if(nbOccurrence != 0)
        printf("%d est present %d fois dans le tableau de valeur.\n", n, nbOccurrence);
    else
        printf("%d n'est pas present dans le tableau de valeur.\n", n);





    return 0;
}
