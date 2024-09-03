#include <stdio.h>

void signe(int A, int B){

    if(A * B > 0)
        printf("Les valeurs de A et B ont le meme signe.\n");
    else
        printf("Les valeurs de A et B ont deux signes differents.\n");
}

int minimum(int A, int B){

    int min;
    if(A > B)
        min = B;
    else
        min = A;

    return min;
}

int maximum(int A, int B){

    if(A > B)
        return A;
    else
        return B;
}


int main(){

    int A, B;
    int min;

    printf("Veuillez saisir la valeur de A : ");
    scanf("%d", &A);

    printf("Veuillez saisir la valeur de B : ");
    scanf("%d", &B);

    signe(A, B);

    min = minimum(A, B);
    printf("La valeur minimale est : %d \n", min);

    printf("La valeur maximale est : %d \n", maximum(A, B));


    return 0;
}







/*Ce que j'ai fait
void signe(int A, int B){

    if(A < 0 && B < 0){

        printf("Les valeurs de A et B ont le meme signe.\n");
    }
    else if(A > 0 && B > 0){

        printf("Les valeurs de A et B ont le meme signe.\n");
    }
    else {
        printf("A et B n'ont pas le meme signe.\n");
    }

}

int minimum(int A, int B){

    if(A < B){
        return A;
    }
    else if(B < A){
        return B;
    }

}

int maximum(int A, int B){

    if(A > B){
        return A;
    }
    else if(B > A){
        return B;
    }
}


int main(){

    int A, B;

    printf("Veuillez saisir la valeur de A : ");
    scanf("%d\n", &A);

    printf("Veuillez saisir la valeur de B : ");
    scanf("%d\n", &B);

    signe(A, B);

    int min = minimum(A, B);
    int max = maximum(A, B);

    printf("La valeur minimale est : %d\n", min);
    printf("La valeur maximale est : %d\n", max);


    return 0;
}
*/