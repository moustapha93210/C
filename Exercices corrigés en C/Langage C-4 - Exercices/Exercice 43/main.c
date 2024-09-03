#include <stdio.h>

int main(){

    int L, i, j;

    printf("Veuillez entrer le nombre de lignes de votre triangle d'etoile : \n");
    scanf("%d", &L);

    for(i = 1; i <= L; i++){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }



    return 0;
}
