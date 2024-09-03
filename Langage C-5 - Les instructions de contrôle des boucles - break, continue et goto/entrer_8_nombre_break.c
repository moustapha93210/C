#include <stdio.h>

int main()
{
    int S, N, i;

    S = 0;

    for(i = 1; i <= 8; i++)
    {
        printf("Veuillez entrez N%d : ", i);
        scanf("%d", &N);

        if(N < 0)
        {
            break;
        }

        //printf("%d + %d = %d\n", S, N, S + N);
        S = S + N;

    }

    printf("La somme est : %d", S);

    return 0;
}