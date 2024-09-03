#include <stdio.h>

int main()
{
    int N;

    debut:
    printf("Entrez un nombre entre 1 et 5 : ");
    scanf("%d", &N);

    if(N < 1 || N > 5)
        goto debut;

    printf("Bravo ! vous avez taper un nombre compris entre 1 et 5.");

    return 0;
}