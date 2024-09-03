#include <stdio.h>

int main(){

    int n, n0, inverse;

    printf("Veuillez choisir un nombre : \n");
    scanf("%d", &n);

    n0 = n;
    inverse = 0;


    do {

        inverse = (inverse * 10) + (n % 10);
        n = n / 10;

        printf("n = %d\n", n);
        printf("inverse = %d\n\n",inverse);

    } while(n != 0);

    printf("n = %d\n", n0);
    printf("inverse = %d\n",inverse);

    if(inverse == n0)
        printf("%d est un palindrome.\n", n0);
    else
        printf("%d n'est pas un palindrome.\n", n0);





    return 0;
}
