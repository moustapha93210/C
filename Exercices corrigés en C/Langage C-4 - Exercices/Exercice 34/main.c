#include <stdio.h>

int main(){

    int n, i, U, Up, Upp;

    do {
        printf("Veuillez saisir une valeur n superieur a 2 : \n");
        scanf("%d", &n);

    }while(n < 2);

    Upp = 0;
    Up = 1;

    printf("Les termes de la suite de Fibonacci sont : \n");
    printf("U0 = %d\n", Upp);
    printf("U1 = %d\n", Up);

    for(i = 2; i <= n; ++i){

        U = Upp + Up;

        printf("U%d = %d\n", i, U);

        Upp = Up;
        Up = U;
    }


    return 0;
}
