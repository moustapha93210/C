#include <stdio.h>

int main() {

    float N1, N2, N3, N4, N5, somme, moy;

    printf("Veuillez entrer N1 : ");
    scanf("%f", &N1);

    printf("Veuillez entrer N2 : ");
    scanf("%f", &N2);

    printf("Veuillez entrer N3 : ");
    scanf("%f", &N3);

    printf("Veuillez entrer N4 : ");
    scanf("%f", &N4);

    printf("Veuillez entrer N5 : ");
    scanf("%f", &N5);

    somme = N1 + N2 + N3 + N4 + N5;
    moy = somme / 5;

    printf("La somme des notes est de : %.2f\n", somme);
    printf("La moyenne des notes est de : %.2f\n", moy);


    return 0;
}
