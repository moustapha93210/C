
# Types d'allocation de mémoire

## Allocation automatique de la mémoire

Lorsque l'on déclare une variable à l'aide d'un type de données de bas, le compilateur **alloue automatiquement** de l'espace mémoire pour la variable dans une zone de mémoire RAM appelée **Stack**.


## Allocation dynamique de la mémoire

Le compilateur **alloue ou libère manuellement** de l'espace mémoire en fonction des besoins de programmation. La mémoire dynamique est gérée dans une partie de la mémoire RAM appelée **Heap**.

- Pour allouer dynamiquement de la mémoire, le langage C nous propose d'utiliser els fonctions suivantes : **malloc()**, **calloc()**, **realloc()** et **free()**.

- Ces fonctions sont définies dans la bibliothèque : `<stdlib.h>`


### malloc()

Cette fonction permet d'allouer dynamiquement la mémoire de la **taille demandée** et en renvoie un **pointeur** sur le premier octet de l'espace alloué.

#### Syntaxe de la fonction :

``` C
#include <stdlib.h>

...

void * malloc(taille_octet);
```
- Si la fonction `malloc()` retourne NULL cela veut dire qu'il n'y pas de mémoire libre.

- Sinon la fonction va retourné un **pointeur qui pointe** vers l'espace réservé.

#### Exemple

##### Allocation automatique de la mémoire

``` C
#include <stdio.h>
#include <stdlib.h>

...

int T[4];
T[0] = 9;
T[1] = 0;
T[2] = -1;
T[3] = 85;
```

![[Pasted image 20241020172218.png]]

##### Allocation dynamique de la mémoire en utilisant malloc() 

``` C
#include <stdio.h>
#include <stdlib.h>

...

int *P = malloc(4 * sizeof(int) );  
  
*(P + 0) = 9;  
*(P + 1) = 0;  
*(P + 2) = -1;  
*(P + 3) = 85;
```

![[Pasted image 20241020172239.png]]



### free()

Cette fonction permet de **libérer** ou de **vider** l'espace mémoire précédemment alloue avec les fonctions malloc(), calloc() ou realloc().

#### Syntaxe de la fonction :

``` C
#include <stdlib.h>

...

void * free(pointeur);
```
- `pointeur` : Pointe vers un espace déjà réservé avec malloc(), calloc() ou realloc().

- Libère la mémoire alloué malloc(), calloc() ou realloc().

#### Exemple

##### Allocation dynamique de la mémoire en utilisant free()

``` C
#include <stdio.h>
#include <stdlib.h>

...

int *P = malloc(4 * sizeof(int) );  
  
*(P + 0) = 9;  
*(P + 1) = 0;  
*(P + 2) = -1;  
*(P + 3) = 85;

free(P);
```

![[Pasted image 20241020173643.png]]

``` C
#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
  
    char *P1, *P2, *P3;  
  
    P1 = malloc(100);  
    printf("Allocation de 100 octets en %p\n", P1);  
  
    P2 = malloc(50);  
    printf("Allocation de 50 octets en %p\n", P2);  
  
    free(P1);  
    printf("Liberation de 100 octets en %p\n", P1);  
  
    P3 = malloc(40);  
    printf("Allocation de 50 octets en %p\n", P3);  
      
  
    return 0;  
}
```

![[Pasted image 20241020174239.png]]

- Ici on peut voir que lorsque l'on a libéré l'espace mémoire du pointeur `P1` et que l'on a affecté un espace de 40 octets au pointeur `P3`, le pointeur `P3` à le même espace mémoire que le pointeur `P1` avant sa libération. Donc on peut avoir un même espace mémoire pour différents pointeurs du moment que l'on libère l'espace mémoire avant.



### calloc()

Cette fonction est utilisé pour allouer **le nombre spécifié** de blocs de mémoire du **type spécifié**. Elle initialise chaque bloc avec une valeur par défaut "0".

#### Syntaxe de la fonction :

``` C
#include <stdlib.h>

...

void * calloc(nbrs_element, taille_element);
```
- Si la fonction `calloc()` retourne NULL cela veut dire qu'il n'y pas de mémoire libre.

- Sinon la fonction va retourné un **pointeur qui pointe** vers l'espace réservé.

#### Exemple

##### Allocation dynamique de la mémoire en utilisant calloc()

``` C
#include <stdio.h>
#include <stdlib.h>

...

int *P1 = malloc(4 * sizeof(int) ); 
```

![[Pasted image 20241020174913.png]]

``` C
#include <stdio.h>
#include <stdlib.h>

...

int *P1 = malloc(4 * sizeof(int) );

int *P2 = calloc(4, sizeof(int) );

*(P2 + 0) = 6;
*(P2 + 1) = 3;
*(P2 + 2) = 36;
*(P2 + 3) = -9;
```

![[Pasted image 20241020175121.png]]

``` C
#include <stdio.h>
#include <stdlib.h>

...

int *P1 = malloc(4 * sizeof(int) ); 
int *P2 = calloc(4, sizeof(int) );

*(P2 + 0) = 6;
*(P2 + 1) = 3;
*(P2 + 2) = 36;
*(P2 + 3) = -9;

free(P2);
```

![[Pasted image 20241020175208.png]]


``` C
#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
  
    int *x = malloc(3 * sizeof(int) );  
  
    printf("%d\n", *(x + 0) );  
    printf("%d\n", *(x + 1) );  
    printf("%d\n", *(x + 2) );  
  
    *(x + 0) = 1;  
    *(x + 1) = 3;  
    *(x + 2) = 3;  
  
    printf("%d\n", *(x + 0) );  
    printf("%d\n", *(x + 1) );  
    printf("%d\n\n", *(x + 2) );  
  
    int *y = calloc(3, sizeof(int) );  
  
    printf("%d\n", *(y + 0) );  
    printf("%d\n", *(y + 1) );  
    printf("%d\n", *(y + 2) );  
  
    *(y + 0) = 1;  
    *(y + 1) = 3;  
    *(y + 2) = 3;  
  
    printf("%d\n", *(y + 0) );  
    printf("%d\n", *(y + 1) );  
    printf("%d\n\n", *(y + 2) );  
  
  
    return 0;  
}
```

![[Pasted image 20241020175937.png]]
![[Pasted image 20241020180041.png]]



### realloc()

Si la mémoire allouée dynamiquement est **insuffisante** ou **supérieur** à celle requise, nous pouvons modifier la taille de la mémoire précédemment allouée à l'aide de al fonction **realloc()**.

#### Syntaxe de la fonction :

``` C
#include <stdlib.h>

...

void * realloc(pointeur, taille_octet);
```
- `pointeur` : pointe vers un espace déjà réservé avec malloc() ou calloc().

- Si la fonction `realloc()` retourne NULL cela veut dire qu'il n'y pas de mémoire libre.

- Sinon la fonction va retourné un **pointeur qui pointe** vers un espace qui vient d'être redimensionner.

#### Exemple

##### Allocation dynamique de la mémoire en utilisant realloc()

On utilise la fonction malloc() qui alloue un espace mémoire de 3 cases. et on assigne à chacune des cases mémoires une valeur.

``` C
#include <stdio.h>
#include <stdlib.h>

...

int *P = malloc(3 * sizeof(int) );

...
```

![[Pasted image 20241020181120.png]]

Ensuite nous réallouons cette espace mémoire et nous souhaitons qu'il fasse 5 cases mémoire. Initialement l'espace mémoire est de 3 cases mémoires, l'ordinateur va rajouter 2 cases mémoires afin d'avoir un espace mémoire de 5 cases. Aussi on peut voir que les 2 nouvelles cases créer n'ont aucune valeur on appel ça le "Garbage value".

``` C
#include <stdio.h>
#include <stdlib.h>

...

int *P = malloc(3 * sizeof(int) ); 

...

P = realloc(P, 5 * sizeof(int) );
```

![[Pasted image 20241020181933.png]]

#### OU

Ici on réalloue l'espace mémoire avec une taille de 2 cases mémoires.

``` C
#include <stdio.h>
#include <stdlib.h>

...

int *P = malloc(3 * sizeof(int) ); 

...

P = realloc(P, 2 * sizeof(int) );
```

![[Pasted image 20241020182039.png]]

## OU

Imaginons que l'on a un programme qui utlise déjà l'espace mémoire coloré en noir et que l'on mette cette ligne de code voici ce qu'il se passera

``` C
#include <stdio.h>
#include <stdlib.h>

...

int *P = malloc(3 * sizeof(int) ); 

...

P = realloc(P, 2 * sizeof(int) );
```

![[Pasted image 20241020183546.png]]

![[Pasted image 20241020183615.png]]

![[Pasted image 20241020183642.png]]


## Attention

Après avoir utilisé "malloc()", "calloc()" ou "realloc()", il faut vérifier si la valeur renvoyé ou le pointeur utilisé retourne la valeur "NULL" ou non.

``` C
#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
  
    int *y = calloc(3, sizeof(int) );  
  
    if(y == NULL){  
  
        printf("La memoire n'est pas alloue.\n");  
        exit(0);  
  
    }  
    else {  
  
        printf("%d\n", *(y + 0));  
        printf("%d\n", *(y + 1));  
        printf("%d\n\n", *(y + 2));  
  
        *(y + 0) = 1;  
        *(y + 1) = 3;  
        *(y + 2) = -9;  
  
        printf("%d\n", *(y + 0));  
        printf("%d\n", *(y + 1));  
        printf("%d\n\n", *(y + 2));  
  
    }  
  
  
  
    return 0;  
}
```

``` C
if(y == NULL){  
  
    printf("La memoire n'est pas alloue.\n");  
    exit(0);  
  
}  
```
- Si ça valeur est "NULL" on doit arrêter le programme avec `exti(0);`.



## Exercice

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