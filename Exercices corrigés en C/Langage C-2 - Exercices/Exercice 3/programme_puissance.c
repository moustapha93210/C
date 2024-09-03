#include <stdio.h>
#include <math.h>

int main() {

    float X, Y, puissance;

    printf("Veuillez saisir un reel X : ");
    scanf("%f", &X);

    printf("Veuillez saisir un reel Y : ");
    scanf("%f", &Y);

    puissance = pow(X, Y);

    printf("%.3f puissance %.3f = %.2f", X, Y, puissance);


    return 0;
}
