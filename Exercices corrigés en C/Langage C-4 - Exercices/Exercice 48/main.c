#include <stdio.h>

int main(){

    int C;
    int i, j, P;

    recTriC:
    printf("Veuillez saisir le nombres de colones : \n");
    scanf("%d", &C);

    P = 1;

    for(i = 1; i <= (C * 2 - 1); i++){

        for(j = 1; j <= P; j++){

            printf(" * ");

        }

        if(i < C)
            P++;
        else
            P--;

        printf("\n");

    }


    return 0;
}
