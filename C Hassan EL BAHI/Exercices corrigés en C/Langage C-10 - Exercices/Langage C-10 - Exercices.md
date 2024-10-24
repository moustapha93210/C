
# Exercice #101

À l'aide de l'allocation dynamique de mémoire, écrire un programme pour saisir le prix de revient et le prix de vente d'un produit, puis le programme vérifie si vous avec un profit ou une perte.

``` C
#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
  
    float *pv = malloc(1 * sizeof(float) );  
    float *pr = malloc(1 * sizeof(float) );  
    float *benefice = malloc(1 * sizeof(float) );  
    float *perte = malloc(1 * sizeof(float) );  
  
  
    recpr:  
    printf("\nVeuillez saisir le prix de revient : ");  
    if(scanf("%f", pr) != 1){  
  
        printf("Erreur ! Veuillez choisir un nombre.\n");  
        while(getchar() != '\n');// Vide le buffer d'entrée  
        goto recpr;// Recommence la boucle si la  saisie est invalide  
    }  
  
  
    recpv:  
    printf("\nVeuillez saisir le prix de vente : ");  
    if(scanf("%f", pv) != 1){  
  
        printf("Erreur ! Veuillez choisir un nombre.\n");  
        while(getchar() != '\n');// Vide le buffer d'entrée  
        goto recpv;// Recommence la boucle si la  saisie est invalide  
    }  
  
    *benefice = *pv - *pr;  
  
    *perte = *pr - *pv;  
  
    if(*benefice > 0)  
        printf("Benefice = %.2f", *benefice);  
    else if(*benefice < 0)  
        printf("Perte = %.2f", *perte);  
    else  
        printf("Ni profit, ni perte.");  
  
    free(pv);  
    free(pr);  
    free(benefice);  
    free(perte);  
  
  
  
  
    return 0;  
}
```

# Exercice #102

À l'aide de l'allocation dynamique de la mémoire, écrire un programme pour trouver la somme de tous les nombres impairs de 1 à n.

``` C
#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
  
    int *n = malloc(sizeof(int) );  
    int *s = malloc(sizeof(int) );  
    int i, r;  
  
  
    // Saisie et lecture de 'n'  
    recn:  
    printf("Veuillez saisir n : ");  
    if(scanf("%d", n) != 1 || *n <= 0){  
  
        printf("Erreur ! Veuillez choisir un nombre positif.\n");  
        while(getchar() != '\n');// Vide le buffer d'entrée  
        goto recn;// Recommence la boucle si la  saisie est invalide  
  
    }  
  
  
    // Calculer la somme des nombres impairs jusqu'à 'n'  
    *s = 0;  
  
    for(i = 0; i <= *n; i++){  
  
        // Calculer le reste  
        r = i % 2;  
  
        // Si le reste est égal à 1 cela veut dire que 'i' est impair  
        if(r == 1){  
  
            // Somme des chiffres impairs jusqu'à "*n"  
            *s = *s + i;  
            printf("s = %d + %d = %d\n", *s, i, *s);  
  
        }  
  
    }  
  
  
    // Affichage de la somme  
    printf("\nSomme de tous les nombres impairs de 1 a %d : %d", *n, *s);  
  
  
    // Libération de la mémoire  
    free(s);  
    free(n);  
  
  
  
    return 0;  
}
```

# Exercice #103

Écrire un programme qui trouve le plus petit élément d'un tableau à l'aide de l'allocation dynamique de mémoire.

``` C
#include <stdio.h>  
#include <stdlib.h>  
  
  
int main(){  
  
    int n, i, min, indice;  
  
  
    // Saisie et lecture de la taille du tableau  
    recn:  
    printf("Donner la taille du tableau : ");  
    if(scanf("%d", &n) != 1 || n <= 0){  
  
        printf("Erreur ! Veuillez choisir un nombre positif et superieur a zero.\n");  
        while(getchar() != '\n');// Vide le buffer d'entrée  
        goto recn;// Recommence la boucle si la  saisie est invalide  
    }  
  
  
    // Allocation dynamique du tableau avec "calloc()"  
    int *T = calloc(n, sizeof(int) );  
  
  
    if(T == NULL){  
  
        printf("Erreur d'allocation memoire.\n");  
        exit(0);  
  
    }  
    else{  
  
        // Saisie et lecture des éléments du tableau  
        for(i = 0; i < n; i++){  
  
            printf("T[%d] = ", i);  
            scanf("%d", T+i);  
  
        }  
  
  
        // Recherche du plus petit éléments du tableau  
        min = *T;  
        indice = 0;  
  
        for(i = 0; i < n; i++){  
  
            if( min > *(T+i) ){  
  
                printf("\nAvant : \n");  
                printf("min = T[%d] = %d\n", indice, min);  
  
                min = *(T+i);  
                indice = i;  
  
                printf("Apres : \n");  
                printf("min = T[%d] = %d\n\n", indice, min);  
  
            }  
  
  
        }  
  
        // Affichage du plus petit éléments du tableau  
        printf("La plus petite valeur du tableau est : T[%d] = %d\n", indice, min);  
  
    }  
  
  
    // Libération de la mémoire  
    free(T);  
  
  
  
    return 0;  
}
```

# Exercice #104

Écrire un programme qui demande à l'utilisateur de remplir dynamiquement un tableau de n éléments, puis le programme qui calcule et affiche la moyenne des éléments du tableau. Le programme doit également demander à l'utilisateur s'il souhaite démarrer une autre opération ou quitter le programme.
NB : Penser à utiliser la fonction realloc() pour changer dynamiquement la taille du tableau.

``` C

```

# Exercice #105

``` C

```