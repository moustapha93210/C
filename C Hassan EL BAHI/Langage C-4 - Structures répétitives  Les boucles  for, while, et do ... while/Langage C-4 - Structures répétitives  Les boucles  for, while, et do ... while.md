
## Structure répétitives

La structure répétitive (Boucle) permet d'exécuter plusieurs fois une séquence d'instructions.
Dans une boucle, le nombre de répétitions peut être connu, fixé à l'avance, comme il peut dépendre d'une condition permettant l'arrêt et la sortie de cette boucle.

### 1 - La boucle for

Cette boucle permet d'exécuter une séquence d'instructions un nombre de fois connu fixé à l'avance.

##### Syntaxe

```C
for(Initialisation; Condition; Incrémentation){
	Instruction à répéter;
}
```
**Initialisation :** est une instruction (ou un bloc d'instructions) exécutée avant le premier tour de la boucle.

**Condition :** Tant que cette condition est vraie, la boucle for continue.

**Incrémentation :** Cette instruction est exécutée à la fin de chaque tour de boucle pour mettre à jour la variable.

##### Exemple

La boucle suivante affiche le message "Hello World!" 5 fois

```C
for(i = 0; i < 5; i++){
	printf("Hello World!");
}
```


#### Structures répétitives - Exercice 1

Écrire un programme qui permet de calculer la somme des 20 permiers entiers positifs.

```C
#include <stdio.h>  
  
int main()  
{  
  
    int S, i;  
  
    for(i = 0; i <= 20; i++)  
    {  
        S += i;  
    }  
  
    printf("La somme des 20 premiers entiers positif est de : %d", S);  
  
    return 0;  
}
```



### 2 - La boucle while

Cette boucle permet de répéter un bloc d'instructions tant qu'une condition est vraie

##### Syntaxe

```C
while(Condition){
	Instruction à répéter;
}
```
**Condition :** Tant que cette condition est vraie, la boucle while continue.

##### Remarque :

La vérification de la condition s'effectue avant l'exécution des instructions. Celles-ci peuvent donc ne jamais être exécutées.


#### Exemple :

``` C
#include <stdio.h>  
  
int main()  
{  
    int N, i;  
    i = 0;  
  
    printf("Veuillez entrer un nombre : ");  
    scanf("%d", &N);  
  
    while(N < 0 || N > 10) {  
  
        printf("Veuillez entrer un nombre : ");  
        scanf("%d", &N);  
  
    }  
  
 
    while(i <= 10) {  
  
        printf("%d * %d = %d \n", N, i, N * i);  
        i++;  
    }  
  
    return 0;  
}
```


#### Structures répétitives - Exercice 2

Écrire un programme qui demande un nombre compris entre 10 et 20, jusqu'à ce que la réponse convienne. En cas de réponse supérieur à 20, on fera apparaître un message : "Plus grand !" et inversement, "Plus petit !" si le nombre est inférieur à 10.

``` C
#include <stdio.h>  
  
int main()  
{  
    int N, i;  
  
    printf("Veuillez entrer un nombre compris entre 10 et 20 : ");  
    scanf("%d", &N);  
  
    while(N < 10 || N > 20) {  
  
        if(N < 10) {  
            printf("Plus petit ! \n");  
        }  
        else if(N > 20) {  
            printf("Plus grand ! \n");  
        }  
  
        printf("Veuillez entrer un nombre compris entre 10 et 20 : ");  
        scanf("%d", &N);  
  
    }  
  
  
    printf("Bravo ! vous avez tapé un nombre compris entre 10 et 20");  
  
  
  
  
  
    return 0;  
}
```



### 3 - La boucle do ... while ...

Cette boucle permet de répeter un bloc d'instructions tant qu'une condition est vraie.

##### Syntaxe :

``` C
do {

	Instructions à répéter;
	
} while(Condition);
```

##### Remarque :

La vérification de la condition s'effectue après l'exécution des instructions. Celles-ci sont donc exécutées au moins une fois.


#### Structures répétitives - Exercice 3

Écrire un programme qui demande à l'utilisateur de saisir un nombre entier strictement supérieur à 1, et qui calcule la somme des entiers jusqu'à ce nombre.

Par exemple, si l'on entre 5, le programme doit calculer :
1 + 2 + 3 + 4 + 5

``` C
#include <stdio.h>  
  
int main()  
{  
  
    int N, S, i;  
  
    do  
    {  
        printf("Veuillez entrez un nombre : ");  
        scanf("%d", &N);  
  
    }while(N <= 1);  
  
    S = 0;  
  
    for(i = 1; i <= N; i++)  
    {  
        //printf("%d + %d = %d\n", S, i, S + i);  
        S = S + i;  
    }
    printf("La somme est : %d", S);
  
    return 0;  
}
```

#### Algorithmie pour comprendre le code ci-dessus

Prenons comme exemple que l'utilisateur rentre le nombre 7 :

|  N  |  i  | S (S = S + i) |
| :-: | :-: | :-----------: |
|  7  |     |       0       |
|  7  |  1  |       1       |
|  7  |  2  |       3       |
|  7  |  3  |       6       |
|  7  |  4  |      10       |
|  7  |  5  |      15       |
|  7  |  6  |      21       |
|  7  |  7  |      28       |
