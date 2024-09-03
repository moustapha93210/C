#include <stdio.h>

int main() {

    int N, i;

    do{
        printf("Veuillez saisir la valeur de N : \n");
        scanf("%d", &N);
    }while(N <= 0);

    for(i = 1; i <= N; i++){
        if(N % i == 0)
            printf("%d est un diviseur de %d\n", i, n);
    }



    return 0;
}
