#include <stdio.h>

int main(){

    int n, Upp, Up, U, i;

    do {

        printf("Veuillez saisir une valeur n superieur a 2 : \n");
        scanf("%d", &n);

    }while(n < 2);

    Upp = 0;
    Up = 1;

    printf("U0 = %d\n", Upp);
    printf("U1 = %d\n\n", Up);

    for(int i = 2; i <= n; ++i){

        U = Upp + Up;

        printf("Iteration %d :\n", i - 1);
        printf("U%i = %d + %d = %d\n\n", i, Upp, Up, U);

        Upp = Up;
        Up = U;
    }

    printf("\nU%d = %d", n, U);


    return 0;
}
