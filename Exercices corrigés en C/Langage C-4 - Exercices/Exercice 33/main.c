#include <stdio.h>

int main(){

    int n, i, U;

    printf("Veuillez entrer la valeur de n : \n");
    scanf("%d", &n);

    U = 6;

    for(i = 1; i <= n; i++)
        U = 4 * U + 10;
    printf("U%d = %d", n, U);


    return 0;
}
