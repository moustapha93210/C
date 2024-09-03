#include <stdio.h>
int A, B;

void saisi(){

    printf("Veuillez saisir la valeur de A : ");
    scanf("%d", &A);

    printf("Veuillez saisir la valeur de B : ");
    scanf("%d", &B);

}

void signe(){

    if(A * B > 0)
        printf("Les valeurs de A et B ont le meme signe.\n");
    else
        printf("Les valeurs de A et B ont deux signes differents.\n");
}

int minimum(){

    int min;
    if(A > B)
        min = B;
    else
        min = A;

    return min;
}

int maximum(){

    if(A > B)
        return A;
    else
        return B;
}


int main(){

    saisi();
    signe(A, B);
    printf("La valeur minimale est : %d \n", minimum(A, B));
    printf("La valeur maximale est : %d \n", maximum(A, B));

    saisi();
    signe(A, B);
    printf("La valeur minimale est : %d \n", minimum(A, B));
    printf("La valeur maximale est : %d \n", maximum(A, B));

    saisi();
    signe(A, B);
    printf("La valeur minimale est : %d \n", minimum(A, B));
    printf("La valeur maximale est : %d \n", maximum(A, B));

    saisi();
    signe(A, B);
    printf("La valeur minimale est : %d \n", minimum(A, B));
    printf("La valeur maximale est : %d \n", maximum(A, B));


    return 0;
}