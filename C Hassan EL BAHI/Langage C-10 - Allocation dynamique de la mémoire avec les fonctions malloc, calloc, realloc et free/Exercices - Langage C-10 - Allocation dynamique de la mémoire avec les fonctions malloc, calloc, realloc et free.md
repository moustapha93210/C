
#### Exercice

Écrire un programme qui alloue dynamiquement la mémoire (avec malloc() ou calloc() ) d'un tableau d n éléments (n doit être saisi par l'utilisateur). Ensuite, le programme calcule et affiche la somme et la moyenne des éléments du tableau (N'oubliez pas de libérer de l'espace mémoire réservé avant la fin du programme).

``` C
#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
  
    int n, i;  
    float S, M;  
  
    // Saisie de la taille du tableau  
    printf("Veuillez saisir la taille du tableau : ");  
    scanf("%d", &n);  
  
  
    // Réservation dynamique de la mémoire en fonction de la taille du tabelau avec "malloc()" et "calloc()"  
    //int *T = calloc(n, sizeof(float));    float *T = malloc(n * sizeof(float) );  
  
    if(T == NULL){  
  
        printf("La memoire n'est pas alloue.\n");  
        exit(0);  
  
    }  
    else {  
  
        // Saisie des éléments du tableau  
        for(i = 0; i < n; i++){  
  
            printf("Entrer l'element T[%d] = ", i+1);  
            scanf("%f", T+i);  
  
        }  
  
  
        // Calcul de la somme des éléments du tableau  
        S = 0;  
  
        for(i = 0; i < n; i++)  
            S = S + *(T+i);  
  
        // Calcul de la moyenne du tableau  
        M = S / n;  
  
  
        // Affichage de la somme et de la moyenne du tableau  
        printf("La somme des elements du tableau est : %.2f\n", S);  
        printf("La moyenne des elements du tableau est : %.2f\n", M);  
  
  
        // Libération de la mémoire alloué  
        free(T);  
    }  
  
  
  
    return 0;  
}
```
