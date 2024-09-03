#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Veuillez saisir la valeur de x : ");

    int x;

    scanf("%d", &x);
    printf("x = %d\n", x);

    double a, b;

    printf("Veuillez saisir la valeur de a : ");
    scanf("%lf", &a);

    printf("Veuillez saisir la valeur de b : ");
    scanf("%lf", &b);

    printf("a = %.2f , b = %.1f\n", a, b);
    printf("a + b = %.2f", a + b);

    return 0;
}