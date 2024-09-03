#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, delta, x, x1, x2;

    printf("Veuillez saisir a, b et c : \n");
    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b, 2) - (4 * a * c);

    if(delta < 0){
        printf("Pas de solution reelles\n");
    }
    else if(delta == 0){
        x = ( (-b) / (2 * a) );

        printf("La solution est : %.2f", x);
    }
    else if(delta > 0){
        x1 = ( (-b) - sqrt(delta) ) / (2 * a);
        x2 = ( (-b) + sqrt(delta) ) / (2 * a);

        printf("Les solutions sont : %.2f et %.2f\n", x1, x2);
    }


    return 0;
}

