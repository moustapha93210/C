#include <stdio.h>

int main(){

    int L;
    int i, j;

    recLosL:
    printf("Veuillez saisir le nombre de ligne : \n");
    scanf("%d", &L);

    for(i = 1; i <= L; i++){

        for(j = 1; j <= L - i; j++){

            printf("   ");

        }

        for(j = 1; j <= L ; j++){

            printf("* ");

        }

        printf("\n");

    }





    return 0;
}
