#include <stdio.h>

int main() {

    int age;
    char sexe;

    debut:
    printf("Veuillez entrer votre age : \n");
    scanf("%d", &age);

    printf("Veuillez entrer votre sexe : \n");
    scanf(" %c", &sexe);

    if( ( age > 0  && age < 110 ) && ( sexe == 'm' || sexe == 'M' || sexe == 'f' || sexe == 'F' ) ){

        if(age > 20 && ( ( sexe == 'm' || sexe == 'M' ) ) ){
            printf("Age : %d ans\n", age);
            printf("Sexe : %c\n", sexe);
            printf("Vous payez l'impot\n");
        }
        else if( ( sexe == 'f' || sexe == 'F' ) && ( age >= 18 && age <= 35 ) ){
            printf("Age : %d ans\n", age);
            printf("Sexe : %c\n", sexe);
            printf("Vous payez l'impot\n");
        }
        else{
            printf("Age : %d ans\n", age);
            printf("Sexe : %c\n", sexe);
            printf("Vous ne payez pas l'impot\n");
        }
    }
    else{
        printf("Erreur !\n");
        printf("Votre age doit etre compris entre 1 et 109 ans !\n");
        printf("Votre sexe doit etre : 'm' ou 'M' ou 'f' ou 'F'\n\n");

        goto debut;
    }


    return 0;
}
