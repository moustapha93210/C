
# Exercice #101

À l'aide de l'allocation dynamique de mémoire, écrire un programme pour saisir le prix de revient et le prix de vente d'un produit, puis le programme vérifie si vous avec un profit ou une perte.

``` C
#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
  
    float *pv = malloc(sizeof(float) );  
    float *pr = malloc(sizeof(float) );  
    float *p = malloc(sizeof(float) );  
  
  
    printf("Veuillez saisir le prix de revient : ");  
    scanf("%f", pr);  
  
    printf("Veuillez saisir le prix de vente : ");  
    scanf("%f", pv);  
  
  
    if(*pr > *pv)  
        printf("Benefice = %.2f", *pr - *pv);  
    else if(*pr < *pv)  
        printf("Perte = %.2f", *pv - *pr);  
    else  
        printf("Ni profit ni perte");  
  
  
  
  
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
    int i;  
  
  
    // Saisie et lecture de 'n'  
    printf("Veuillez saisir n : ");  
    scanf("%d", n);  
  
  
    // Calculer la somme des nombres impairs jusqu'à 'n'  
    *s = 0;  
  
    for(i = 1; i <= *n; i += 2)  
        *s = *s + i;  
  
  
    // Affichage de la somme  
    printf("La somme des nombres impairs de 1 a 4 : %d", *s);  
  
  
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
  
    int n, min, i;  
  
  
    // Saisie et lecture de la taille du tableau  
    printf("Saisir la taille du tableau : ");  
    scanf("%d", &n);  
  
  
    // Allocation dynamique du tableau avec "calloc()"  
    int *T = calloc(n, sizeof(int) );  
  
  
    if(T == NULL){  
  
        printf("La memoire n'est pas allouee.\n");  
        exit(0);  
  
    }  
  
  
    // Saisie et lecture des éléments du tableau  
    for(i = 0; i < n; i++){  
  
        printf("Entrer l'element  T[%d] = ", i);  
        scanf("%d", T+i);  
  
    }  
  
  
    // Recherche du plus petit éléments du tableau  
    min = *T;  
  
    for(i = 0; i < n; i++){  
  
        if( min > *(T+i) )  
            min = *(T+i);  
  
    }  
  
    // Affichage du plus petit éléments du tableau  
    printf("Le min des elements du tableau est : %d", min);  


    // Libération de la mémoire  
    free(T);  


  
    return 0;  
}
```

# Exercice #104

Écrire un programme qui demande à l'utilisateur de remplir dynamiquement un tableau de n éléments, puis le programme qui calcule et affiche la moyenne des éléments du tableau. Le programme doit également demander à l'utilisateur s'il souhaite démarrer une autre opération ou quitter le programme.
NB : Penser à utiliser la fonction realloc() pour changer dynamiquement la taille du tableau.

``` C
#include <stdio.h>
#include <stdlib.h>

  
int main(){

    int n, i, a;
    float M, S;
    char reponse;
  

    // Saisie et lecture de la taille du tableau
    recn:
    printf("Entrer la taille du tableau : ");
    scanf("%d", &n);
  

    // Allocation dynamique du tableau
    float *T = calloc(n, sizeof(float));
  

    // Saisie, lecture et calcul de la moyenne des éléments du tableau
    printf("Saisir les elements du tableau : \n");
    
    S = 0;

    for(i = 0; i < n; i++){

        printf("Element %d = ", i+1);
        scanf("%f", T+i);

        S = S + *(T+i);

    }
  
    M = S / n;

  
    // Affichage de la moyenne
    printf("La moyenne des elements est : %.2f\n\n", M);
  

    // Demande d'ajout, saisie et lecture des autres éléments
    printf("Veux-tu ajouter d'autres elements (O/N) ? : \n");
    scanf(" %c", &reponse);
    

    // Faire ce programme tant que la réponse est 'o' ou 'O'
    while(reponse != 'N'){

        // Saisie et lecture du nombre d'éléments à ajouter
        printf("Entrer le nombre d'elements a ajouter : ");
        scanf("%d", &a);


        // Affectation de la nouvelle taille du tableau
        n = n + a;
  

        // Allocation dynamique de la nouvelle taille du tableau
        T = realloc(T, n * sizeof(float) );
  

        // Affichage des éléments du tableau avant l'ajout des nouveaux éléments
        for(i = 0; i < (n - a); i++)
            printf("Element %d = %.2f\n", i+1, *(T+i) );


        // Saisie, lecture et calcule de la moyenne des nouveaux éléments du tableau
        printf("Saisir les nouveaux elements du tableau : \n");

        for(i = (n - a); i < n; i++){

            printf("Element %d = ", i);
            scanf("%f", T+i);

            S = S + *(T+i);

        }

        M = S / n;
  

        // Affichage de la nouvelle moyenne
        printf("La moyenne des elements du tableau est : %.2f\n", M);


        // Demande d'ajout, saisie et lecture d'autres éléments
        printf("Voulez-vous ajouter d'autres elements (O/N) ? : \n");
        scanf(" %c", &reponse);
  
    }


    // Libération de la mémoire
    free(T);


    return 0;

}
```

# Exercice #105

Écrire un programme qui demande à l'utilisateur de remplir dynamiquement un tableau de n éléments. Écrire ensuite les fonctions suivantes :
- Une fonction permettant de trier les éléments du tableau par ordre croissant.
- Une fonction permettant de trier les éléments du tableau par ordre décroissant.

``` C

```