#include <stdio.h>

int main() {

    int A, B, calcul;
    char operateur;

    debut:
    printf("Veuillez saisir votre 1er nombre entier : \n");
    scanf("%d", &A);

    printf("Veuillez saisir un operateur (+, -, *, /) : \n");
    scanf(" %c", &operateur);

    printf("Veuillez saisir votre 2eme nombre : \n");
    scanf("%d", &B);


    switch(operateur){
        case '+':
            calcul = A + B;
            printf("%d %c %d = %d", A, operateur, B, calcul);
            break;
        case '-':
            calcul = A - B;
            printf("%d %c %d = %d", A, operateur, B, calcul);
            break;
        case '*':
            calcul = A * B;
            printf("%d %c %d = %d", A, operateur, B, calcul);
            break;
        case '/':
            if(B != 0){
                calcul = A / B;
                printf("%d %c %d = %d", A, operateur, B, calcul);
            }
            else{
                printf("La division par 0 est impossible");
            }

            break;
        default:
            printf("Erreur !, L'opérateur est incorrect\n\n");
            break;
    }



    return 0;
}
