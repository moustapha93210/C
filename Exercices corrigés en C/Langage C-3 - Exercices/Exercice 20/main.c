#include <stdio.h>

int main() {

    int A, B;
    char op;

    debut:
    printf("Veuillez saisir la valeur de A : ");
    scanf("%d", &A);

    printf("Veuillez saisir l'operateur : ");
    scanf(" %c", &op);

    printf("Veuillez saisir la valeur de B : ");
    scanf("%d", &B);

    switch(op){
        case '+':
            printf("A + B = %d", A + B);
            break;
        case '-':
            printf("A - B = %d", A - B);
            break;
        case '*':
            printf("A * B= %d", A * B);
            break;
        case '/':
            if(B != 0){
                printf("A / B = %d", A / B);
            }
            else{
                printf("La division par 0 est impossible");
            }

            break;
        default:
            printf("Erreur !, L'operateur est incorrect");
            break;
    }


    return 0;
}
