#include <stdio.h>

int main() {

    float N1, N2, N3, N4, N5, somme, moy;

    printf("Veuillez entrer 5 notes : ");
    scanf("%f%f%f%f%f", &N1, &N2, &N3, &N4, &N5);

    somme = N1 + N2 + N3 + N4 + N5;
    moy = somme / 5;

    printf("La somme des notes est de : %.2f\n", somme);
    printf("La moyenne des notes est de : %.2f\n", moy);


    return 0;
}

