#include <stdio.h>
#include <math.h>

int main() {

    float Xa, Xb, Ya, Yb, distanceAB;

    printf("Veuillez entrer les coordonees du point A\n");
    printf("Xa : ");
    scanf("%f", &Xa);

    printf("Ya : ");
    scanf("%f", &Ya);

    printf("\nVeuillez entrer les coordonees du point B\n");
    printf("Xb : ");
    scanf("%f", &Xb);

    printf("Yb : ");
    scanf("%f", &Yb);

    distanceAB = sqrt(pow((Xb - Xa),2) + pow((Yb - Ya),2) );

    printf("La distance entre les points A et B est de : %.2f cm", distanceAB);

    return 0;
}
