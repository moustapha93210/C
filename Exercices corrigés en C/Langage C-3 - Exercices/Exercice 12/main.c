#include <stdio.h>

int main() {

    int A, B;

    printf("Veuillez saisir la valeur de A : ");
    scanf("%d", &A);

    printf("Donner B : ");
    scanf("%d", &B);

    if(A * B > 0)
        printf("A et B ont le meme signe.");
    else
        printf("A et B n'ont pas le meme signe.");

    return 0;
}
