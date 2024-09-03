#include <stdio.h>

int main()
{
    int N, S, i;

    S = 0;

    for(i = 1; i <= 8; i++)
    {
        printf("Entrez N%d : ", i);
        scanf("%d", &N);

        if(N < 0)
            continue;

        //printf("%d + %d = %d", S, N, S + N);
        S = S + N;
    }

    printf("\nLa somme est : %d", S);

    return 0;
}