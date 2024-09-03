

## Structure répétitives
### 4 - L'instruction break

L'instruction `break` permet d'arrêter le déroulement d'une boucle, et de passer à l'instruction qui suit cette boucle.

#### Syntaxe 

``` C
boucle(...) {
	...
	break;
	...
}
...
```


#### Structures répétitives - Exercice 4

Écrire un programme qui calcule la somme d'un maximum de 8 nombres entrés par l'utilisateur, si un nombre négatif est entré, la boucle se termine.

``` C
#include <stdio.h>  
  
int main()  
{  
    int S, N, i;  
  
    S = 0;  
  
    for(i = 1; i <= 8; i++)  
    {  
        printf("Veuillez entrez N%d : ", i);  
        scanf("%d", &N);  
  
        if(N < 0)  
        {  
            break;  
        }  
  
        //printf("%d + %d = %d\n", S, N, S + N);  
        S = S + N;  
  
    }  
  
    printf("La somme est : %d", S);  
  
    return 0;  
}
```


### 5 - L'instruction continue

L'instruction `continue` permet d'ignorer l'itération actuelle de la boucle et de passer à l'itération suivante.

#### Syntaxe 

``` C
boucle(...) {
	...
	continue;
	...
}
...
```


#### Structures répétitives - Exercice 5

Écrire un programme qui calcule la somme d'un maximum de 8 nombres entrés par l'utilisateur, si un nombre négatif est entré, la boucle ignore ce nombre.

``` C
#include <stdio.h>  
  
int main()  
{  
    int N, S, i;  
  
    S = 0;  
  
    for(i = 1; i <= 8; i++)  
    {  
        printf("Entrez N%d : ", i);  
        scanf("%d", &N);  
  
        if(N < 0)  
            continue;  
  
        //printf("%d + %d = %d", S, N, S + N);  
        S = S + N;  
    }  
  
    printf("\nLa somme est : %d", S);  
  
    return 0;  
}
```


### 6 - L'instruction goto

L'instruction `goto` permet de se repositionner sur une autre section de code à exécuter, introduite par une étiquette, au lieu de poursuivre une exécution séquentielle.

#### Syntaxe 

``` C
...
goto etiquette;
...
...
etiquette:
...
...
```


#### Structures répétitives - Exercice 6

Sans utiliser de boucles, écrivez un programme qui demande un nombre entre 1 et 5, jusqu'à ce que la réponse soit appropriée.

``` C
#include <stdio.h>  
  
int main()  
{  
    int N;  
  
    debut:  
    printf("Entrez un nombre entre 1 et 5 : ");  
    scanf("%d", &N);  
  
    if(N < 1 || N > 5)  
        goto debut;  
  
    printf("Bravo ! vous avez taper un nombre compris entre 1 et 5.");  
  
    return 0;  
}
```

