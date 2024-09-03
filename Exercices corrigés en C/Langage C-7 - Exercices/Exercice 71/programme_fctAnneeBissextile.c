#include <stdio.h>
#include <stdbool.h>


int anneeBissextile(int annee){

    bool estBissextile;

    if( ( annee % 4 == 0 && annee % 100 != 0 ) || ( annee % 400 == 0 ) )
        estBissextile = true;
    else
        estBissextile = false;



    return estBissextile;

}


int main(){

    int annee;


    // Saisie, contrôle et lecture de l'année entrer par l'utilisateur
    recAnnee:
    printf("Veuillez saisir une annee : \n");
    if( scanf("%d", &annee) != 1 || annee < 0){
        printf("Erreur ! Veuillez entrer une annee correct.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recAnnee;// Recommence la boucle si la saisie est invalide
    }


    // Appel de la fonction anneeBissextile(int annee)
    if(anneeBissextile(annee) == 1)
        printf("%d est une annee bissextile.\n", annee);
    else
        printf("%d n'est pas une annee bissextile.\n", annee);




    return 0;
}
