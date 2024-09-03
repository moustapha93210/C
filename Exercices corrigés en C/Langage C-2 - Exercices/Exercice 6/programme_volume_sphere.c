#include <stdio.h>

int main() {

    float r, volSphere;
    const float pi = 3.14;


    printf("Entrer le rayon de la sphere : ");
    scanf("%f", &r);

    const float r3 = r * r * r;
    volSphere = ((4 * pi * r3) / 3);

    printf("Le volume de la sphere est de : %.2f cm", volSphere);





    return 0;
}
