#include <stdio.h>

int main(){

    int ligne, i, colonne, j, k;

    printf("x * y\t|\t");

    for( i = 1; i <= 10; i++){

        printf("%d\t", i);

    }

    printf("\n");

    for( i = 1; i <= 47; i++){

        char tiret = '-';

        printf("%c ", tiret);

    }


    for( i = 1; i <= 10; i++){

        printf("\n%d\t|\t", i);

        for(j = 1; j <= 10; j++){
            printf("%d\t", i * j);
        }



    }






    return 0;
}
