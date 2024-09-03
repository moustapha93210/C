#include <stdio.h>

int main(){

    int L, C, i, j;

    printf("Veuillez entrer le nombre de lignes de votre rectangle d'etoile : \n");
    scanf("%d",&L);

    printf("Veuillez entrer le nombre de colones de votre rectangle d'etoile : \n");
    scanf("%d", &C);

    for(i = 1; i <= L; i++){
        for(j = 1; j <= C; j++){
            printf("* ");
        }
        printf("\n");
    }



    return 0;
}
