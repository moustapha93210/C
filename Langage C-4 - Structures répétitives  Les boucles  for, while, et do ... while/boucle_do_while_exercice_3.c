#include <stdio.h>

int main()
{

    int N, S, i;

    do
    {
        printf("Veuillez entrez un nombre : ");
        scanf("%d", &N);

    }while(N <= 1);

    S = 0;

    for(i = 1; i <= N; i++)
    {
        //printf("%d + %d = %d\n", S, i, S + i);
        S = S + i;

    }
    printf("La somme est : %d", S);

    return 0;
}
