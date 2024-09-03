#include <stdio.h>
#include <math.h>

int main() {

    float X, Y, P;

    printf("Donner la valeur de X : ");
    scanf("%f", &X);

    printf("Donner la valeur de Y : ");
    scanf("%f", &Y);

    P = pow(X, Y);

    printf("La puissance est : %.2f", P);


    return 0;
}
