#include <stdio.h>
#include <math.h>

int main(){

    char reponse;
    float A, B;
    int operation;

    do {
        printf("----- Calculatrice : MENU -----.\n\n");

        printf("1.\tAddition\n");
        printf("2.\tSoustraction\n");
        printf("3.\tMultiplication\n");
        printf("4.\tDivsion\n");
        printf("5.\tReste d'une division entiere\n");
        printf("6.\tPuissance\n\n");

        printf("Quel calcul veux-tu effectuer ? : \n");
        scanf("%d", &operation);

        printf("Saisir le premier terme : \n");
        scanf("%f", &A);

        printf("Saisir le deuxieme terme : \n");
        scanf("%f", &B);

        switch(operation){
            case 1:
                printf("Le resultat est %.2f \n", A + B);
                break;
            case 2:
                printf("Le resultat est %.2f \n", A - B);
                break;
            case 3:
                printf("Le resultat est %.2f \n", A * B);
                break;
            case 4:
                if(B != 0)
                    printf("Le resultat est %.2f \n", A / B);
                else
                    printf("La division par 0 est impossible \n");
                break;
            case 5:
                if(B != 0)
                    printf("Le resultat est %d \n", (int)A / (int)B);
                else
                    printf("Le reste d'une division par 0 est impossible \n");
                break;
            case 6:
                printf("Le resultat est %.2f \n", pow(A, B));
                break;
            default:
                printf("L'operateur est incorrect \n");
                break;
        }

        printf("Veux-tu faire un autre calcul (O/N) ? : \n");
        scanf(" %c", &reponse);

    }while(reponse != 'N');



    return 0;
}
