#include <stdio.h>
#include <math.h>

int main(){

    char reponse;
    int operation;
    float nb1, nb2;


    do {

        printf("Bienvenue dans la calculatrice C-operation.\n\n");

        printf("1.\tAddition\n");
        printf("2.\tSoustraction\n");
        printf("3.\tMultiplication\n");
        printf("4.\tDivsion\n");
        printf("5.\tReste d'une division\n");
        printf("6.\tPuissance\n");
        printf("7.\tQuitter\n\n");

        recOperation:
        //Lecture et validation de operation
        printf("Veuillez choisir une operation : \n");
        if(scanf("%d", &operation) != 1 || operation < 1 || operation > 7 ){
            printf("Erreur ! Veuillez entrer un chiffre entre 1 et 7.\n\n");
            while(getchar() != '\n');// Vider le buffer d'entrée
            goto recOperation;// Recommence la boucle si l'entrée est invalide
        }

        if(operation == 7){
            printf("Vous avez choisis de quitter. Aurevoir !\n");
            break;
        }

        recNb1:
        //Lecture et validation de nb1
        printf("Veuillez choisir le 1er terme : \n");
        if( scanf("%f", &nb1) != 1 ){
            printf("Erreur ! Veuillez entrer un nombre valide\n");
            while(getchar() != '\n');// Vider le buffer d'entrée
            goto recNb1;// Recommence la boucle si l'entrée est invalide
        }

        recNb2:
        //Lecture et validation de nb2
        printf("Veuillez choisir le 2eme terme : \n");
        if( scanf("%f", &nb2) != 1 ){
            printf("Erreur ! Veuillez entrer un nombre valide\n");
            while(getchar() != '\n');// Vider le buffer d'entrée
            goto recNb2;// Recommence la boucle si l'entrée est invalide
        }


        switch(operation){
            case 1:
                printf("1er terme : %.2f\n", nb1);
                printf("2eme terme : %.2f\n\n", nb2);

                printf("%.2f + %.2f = %.2f\n\n", nb1, nb2, nb1 + nb2);

                break;
            case 2:
                printf("1er terme : %.2f\n", nb1);
                printf("2eme terme : %.2f\n\n", nb2);

                printf("%.2f - %.2f = %.2f\n\n", nb1, nb2, nb1 - nb2);

                break;
            case 3:
                printf("1er terme : %.2f\n", nb1);
                printf("2eme terme : %.2f\n\n", nb2);

                printf("%.2f x %.2f = %.2f\n\n", nb1, nb2, nb1 * nb2);

                break;
            case 4:
                printf("1er terme : %.2f\n", nb1);
                printf("2eme terme : %.2f\n\n", nb2);

                if(nb2 != 0)
                    printf("%.2f / %.2f = %.2f\n\n", nb1, nb2, nb1 / nb2);
                else
                    printf("La division par 0 est impossible !\n\n");

                break;
            case 5:
                printf("1er terme : %d\n", (int)nb1);
                printf("2eme terme : %d\n\n", (int)nb2);

                if( (int)nb2 != 0 )
                    printf("%d // %d = %d\n\n", (int)nb1, (int)nb2, (int)nb1 % (int)nb2);
                else
                    printf("Le reste d'une division par 0 est impossible !\n\n");

                break;
            case 6:
                printf("1er terme : %.2f\n", nb1);
                printf("2eme terme : %.2f\n\n", nb2);

                printf("(%.2f)^(%.2f) = %.2f\n\n", nb1, nb2, pow(nb1, nb2));

                break;
            default:
                printf("Erreur ! L'operateur est incorrect.\n");
                printf("Veuillez choisir un chiffre entre 1 et 7\n\n");
                break;

        }

        do {
            printf("Souhaitez vous faire un autre calcul ? : \n");
            scanf(" %c", &reponse); // Lecture du choix de reponse

            while(getchar() != '\n');// Vider le buffer d'entrée

            if(reponse != 'o' && reponse != 'O' && reponse != 'n' && reponse != 'N'){
                printf("Erreur ! Veuillez entrer 'n' ou 'N' pour non et 'o' 'O' pour oui.\n");
            }
        } while(reponse != 'o' && reponse != 'O' && reponse != 'n' && reponse != 'N');


    } while( reponse == 'o' || reponse == 'O' );


    printf("\nMerci d'avoir utilise le programme !");


    return 0;
}
