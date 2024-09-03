#include <stdio.h>
#include <stdbool.h>

int main()
{
    const float pi = 3.14;
    const int nbr_mois = 12;

    int num_Etudiant = 0002;
    float note;
    char sexe;
    bool admis;

    printf("La valeur de pi est : %f\n", pi);
    printf("La valeur de nbr_mois est : %i\n", nbr_mois);
    printf("La valeur de nbr_mois est : %i\n", num_Etudiant);

    float X = 12.25;
    float Y = 54.2685;

    printf("les coordonnées sont : %f, %f\n", X, Y);

    printf("Hello world! \n");

    int x;
    scanf("%d", &x);
    printf("x = %d\n", x);
    double a, b;
    a = 2.2;
    b = 5.6;
    printf("a = %.2f , b = %.1f\n", a, b);
    printf("a + b = %.2f", a + b);
    return 0;
}