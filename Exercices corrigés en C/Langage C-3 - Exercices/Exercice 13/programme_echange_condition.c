#include <stdio.h>

int main() {

    int A, B, C, D;

    printf("Donner la valeur de A : ");
    scanf("%d", &A);

    printf("Donner la valeur de B : ");
    scanf("%d", &B);

    if(A * B > 0){
        printf("meme signe\n");
        C = A;
        A = B;
        B = C;
    }
    else{
        printf("signe different\n");
        C = A + B;
        D = A * B;
        A = C;
        B = D;
    }

    printf("A = %d\n", A);
    printf("B = %d\n", B);


    return 0;
}
