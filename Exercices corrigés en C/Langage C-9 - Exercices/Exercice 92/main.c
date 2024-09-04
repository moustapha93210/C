#include <stdio.h>
#include <string.h>

int main(){

    char mot1[100];
    char mot2[100];
    int n = 0;

    // Saisie de mot1
    puts("Veuillez saisir votre premier mots :");
    gets(mot1);

    // Saisie de mot2
    puts("Veuillez saisir votre deuxieme mot :");
    gets(mot2);

    n = 0;

    // Gestions des erreurs
    if(strlen(mot1) != strlen(mot2) )
        printf("Les deux mots n'ont pas la meme longueur\n");
    else{

        // Parcours du tableau pour savoir la distance de Hammin entre mot1 et mot2
        for(int i = 0; i < strlen(mot1); i++){

            if(mot1[i] != mot2[i])
                n++;

        }

        printf("La distance de Hamming entre les deux mot est : %d\n", n);
    }




    return 0;
}
