#include <stdio.h>

int main() {

    float N1, N2, N3, moy;

    debut:
    printf("Veuillez saisir 3 notes comprises entre 0 et 20 : \n");
    scanf("%f %f %f", &N1, &N2, &N3);

    if( (N1 >= 0 && N1 <= 20) && (N2 >= 0 && N2 <= 20 ) && (N3 >= 0 && N3 <= 20) ){

        moy = (N1 + N2 + N3) / 3;

        if(moy < 10){
            printf("Moyenne : %.2f / 20\n", moy);
            printf("Mention : Insuffisant.\n");
        }
        else if(moy < 12){
            printf("Moyenne : %.2f / 20\n", moy);
            printf("Mention : Passable.\n");
        }
        else if(moy < 14){
            printf("Moyenne : %.2f / 20\n", moy);
            printf("Mention : Assez bien.\n");
        }
        else if(moy < 16){
            printf("Moyenne : %.2f / 20\n", moy);
            printf("Mention : Bien.\n");
        }
        else{
            printf("Moyenne : %.2f / 20\n", moy);
            printf("Mention : Tres bien.\n");
        }
    }
    else{
        printf("Erreur !, Les notes doivent etre comprise entre 0 et 20.\n\n");
        goto debut;
    }



    return 0;
}
