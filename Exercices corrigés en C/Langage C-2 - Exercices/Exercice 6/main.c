#include <stdio.h>
#include <math.h>

int main() {

    float V, R;
    const float Pi = 3.14;


    printf("Entrer le rayon de la sphere : ");
    scanf("%f", &R);

    V = (4 * Pi * pow(R, 3)) / 3;

    printf("Le volume de la sphere est de : %.2f cm", V);





    return 0;
}
