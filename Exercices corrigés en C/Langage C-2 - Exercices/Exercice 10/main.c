#include <stdio.h>
#include <math.h>

int main() {

    float Xa, Ya, Xb, Yb;
    float AB;

    printf("Veuillez entrer les coordonees X de A : ");
    scanf("%f", &Xa);

    printf("Veuillez entrer les coordonees Y de A : ");
    scanf("%f", &Ya);

    printf("Veuillez entrer les coordonees X de B : ");
    scanf("%f", &Xb);

    printf("Veuillez entrer les coordonees X de B : ");
    scanf("%f", &Yb);

    AB = sqrt(pow((Xb - Xa),2) + pow((Yb - Ya),2) );

    printf("La distance entre les points A et B est de : %.2f", AB);

    return 0;
}
