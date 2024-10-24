
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
#include <stdio.h>
#include <stdlib.h>


int main(){

    int n, i, nbNvElem;
    float moy, S;
    char rep;


    // Saisie et lecture de la taille du tableau
    recn:
    printf("Veuillez saisir la taille du tableau : ");
    if(scanf("%d", &n) != 1 || n <= 0){

        printf("Erreur ! Veuillez choisir un nombre positif et superieur a zero.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recn;// Recommence la boucle si la  saisie est invalide

    }


    // Allocation dynamique du tableau
    float *T = calloc(n, sizeof(float));
  
    if(T == NULL){

        printf("Erreur d'allocation de memoire.\n");
        exit(0);

    }

  
    // Saisie et lecture des éléments du tableau
    for(i = 0; i < n; i++){
  
        recTab:
        printf("T[%d] = ", i);
        if(scanf("%f", T+i) != 1){
  
            printf("Erreur ! Veuillez choisir un nombre.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            free(T+i);
            goto recTab;// Recommence la boucle si la  saisie est invalide
	    
	    }

    }


    // Calcule de la moyenne
    S = 0;
  
    for(i = 0; i < n; i++)
        S = S + *(T+i);

    moy = S / n;



    // Affichage de la moyenne
    printf("La moyenne des elements du tableau est : %.2f\n\n", moy);
  


    // Demande d'ajout, saisie et lecture des autres éléments
    recrep:
    printf("Voulez-vous ajouter d'autres elements (O/N) ? : \n");
    scanf(" %c", &rep);
    if(rep != 'o' && rep != 'O' && rep != 'n' && rep != 'N'){

        printf("Erreur ! Veuillez entrer 'O' ou 'N'.\n");
        while(getchar() != '\n');// Vide le buffer d'entrée
        goto recrep;// Recommence la boucle si la  saisie est invalide

    }
  

    // Faire ce programme tant que la réponse est 'o' ou 'O'
    while(rep == 'o' || rep == 'O'){

        // Saisie et lecture du nombre d'éléments à ajouter
        recnbNvElem:
        printf("Veuillez entrer le nombre d'elements a ajouter : ");
        if(scanf("%d", &nbNvElem) != 1 || nbNvElem <= 0){
  
            printf("Erreur ! Veuillez choisir un nombre positif et superieur a zero.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            goto recnbNvElem;// Recommence la boucle si la  saisie est invalide
  
        }


        // Affectation de la nouvelle taille du tableau
        n = n + nbNvElem;


        // Affichage des éléments du tableau avant l'ajout des nouveaux éléments
        for(i = 0; i < (n - nbNvElem); i++)
            printf("T[%d] = %.2f\n", i, *(T+i) );
  

        // Allocation dynamique de la nouvelle taille du tableau
        T = realloc(T, n * sizeof(float) );
  

        // Saisie et lecture des nouveaux éléments du tableau
        printf("Veuillez saisir les nouveaux elements du tableau : \n");

        for(i = (n - nbNvElem); i < n; i++){

            recTab2:
            printf("T[%d] = ", i);
            if(scanf("%f", T+i) != 1){
            
                printf("Erreur ! Veuillez choisir un nombre.\n");
                while(getchar() != '\n');// Vide le buffer d'entrée
                free(T+i);
                goto recTab2;// Recommence la boucle si la  saisie est invalide
                
            }

        }

  
  

        // Calcule de la nouvelle moyenne
        for(i = (n - nbNvElem); i < n; i++)
            S = S + *(T+i);


        moy = S / n;


        // Affichage de la nouvelle moyenne
        printf("La moyenne des elements du tableau est : %.2f\n", moy);
  

        // Demande d'ajout, saisie et lecture des autres éléments
        recrep2:
        printf("Voulez-vous ajouter d'autres elements (O/N) ? : \n");
        scanf(" %c", &rep);
        if(rep != 'o' && rep != 'O' && rep != 'n' && rep != 'N'){
        
            printf("Erreur ! Veuillez entrer 'O' ou 'N'.\n");
            while(getchar() != '\n');// Vide le buffer d'entrée
            goto recrep2;// Recommence la boucle si la  saisie est invalide

        }

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