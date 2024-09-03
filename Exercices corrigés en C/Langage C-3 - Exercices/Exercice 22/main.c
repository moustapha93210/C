#include <stdio.h>

int main() {

    int N;

    printf("Veuillez entrer un nombre : \n");
    scanf("%d", &N);


    if( (N % 2) == 1 )
        printf("%d est un nombre impair", N);
    else
        printf("%d est un nombre pair", N);


    return 0;
}
