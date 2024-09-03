#include <stdio.h>

//Déclaration de la fonction qui permettra d'afficher la table de multiplication de N
void afficheTabMultiplication(int N){

    int i;

    for(i = 0; i <= 10; i++)
        printf("%d x %d = %d\n", N, i, N * i);

}


int main(){

    int N;

    // Saisie et lecture de N
    recN:
    printf("Veuillez saisir un nombre : \n");
    if( scanf("%d", &N) != 1 ){
        printf("Erreur ! Veuillez entrer un nombre.\n");
        while(getchar() != '\n');// Vider le buffer d'entrée
        goto recN;// Recommence la boucle si la saisie est invalide
    }


    //Appel de la fonction afficheTableMultiplication(int N)
    afficheTabMultiplication(N);


    return 0;
}
