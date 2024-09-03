#include <stdio.h>
#include <math.h>

float a, b, c;
float delta;


void saisi(){

    // Saisie et lecture de a
    printf("Veuillez entrer a : \n");
    scanf("%f", &a);

    // Saisie et lecture de b
    printf("Veuillez entrer b : \n");
    scanf("%f", &b);

    // Saisie et lecture de b
    printf("Veuillez entrer c : \n");
    scanf("%f", &c);
}


float discriminant(){
    delta = pow(b, 2)  - ( 4 * a * c );

    return delta;
}

void solution(){

    float x1, x2, x;

    if(delta < 0)
        printf("Il n'y a pas de solutions reelles.\n");
    else if(delta == 0){

        x = (-b) / ( 2 * a);

        printf("La solution est : %.2f.\n", x);
    }
    else{
        x1 = ( -b - sqrt(delta) ) / (2 * a );
        x2 = ( -b + sqrt(delta) ) / (2 * a );

        printf("Les solutions sont : %.2f et %.2f.\n", x1, x2);
    }
}



int main(){

    saisi();
    discriminant();
    solution();

    saisi();
    discriminant();
    solution();

    saisi();
    discriminant();
    solution();

    saisi();
    discriminant();
    solution();


    return 0;
}







