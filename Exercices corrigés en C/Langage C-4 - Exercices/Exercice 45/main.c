#include <stdio.h>

int main(){

    int L;
    int i, j;


    printf("Veuillez entrer un nombres de lignes : \n");
    scanf("%d", &L);


    for(i = 1; i <= L; i++){

        for(j = 1; j <= L; j++){

            if(i == 1 || i == L || j == 1 || j == L || i == j || j == (L - i) + 1)
                printf(" * ");
            else
                printf("   ");

        }

        printf("\n");

    }




    return 0;
}
