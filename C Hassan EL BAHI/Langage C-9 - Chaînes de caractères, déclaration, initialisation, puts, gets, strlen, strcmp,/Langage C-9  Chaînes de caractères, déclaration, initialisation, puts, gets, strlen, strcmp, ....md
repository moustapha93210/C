
En C, il n'existe pas de type de variable pour les chaînes de caractères comme pour les entiers ou les caractères. 

# Chaîne de caractères - tableau de caractères

Les chaînes sont en fait stockées dans un tableau de caractères dont la fin est marquée par le caractère '\\0'. 
##### Exemple :
En mémoire, la chaîne "Hello", est représentée comme suit :

| Indice  |  0  |  1  |  2  |  3  |  4  |  5  |
| ------- | :-: | :-: | :-: | :-: | :-: | :-: |
| Valeurs |  H  |  e  |  l  |  l  |  o  | \\0 |
Ce caractère `\0` permet au programme de savoir que la variable à laquelle il a affaire est une chaîne de caractère elle a pour valeur `NULL`. Le programme va parcourir le tableau et il s'arrêtera à l'indice qui se trouve avant cette valeur `\0`.



# Chaîne de caractères - Déclaration & initialisation

Un chaîne de caractères peut être déclarée et initialisée de plusieurs manières, la plus simple est :

``` C
char chaine[] = "Hello";
```


## Déclaration

Avec différent exemples voyons comment nous pouvons déclarer un tableau correctement en C.

``` C
char chaine[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  
char chaine[4] = {'H', 'e', 'l', 'l', 'o', '\0'};
  
char chaine[9] = {'H', 'e', 'l', 'l', 'o', '\0'};
  
char chaine[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  
char chaine[6] = "Hello";
  
char chaine[3] = "Hello";
  
char chaine[8] = "Hello";
  
char chaine[]= "Hello";
  
char chaine[6];  
chaine = "Hello";
```

``` C
char chaine[6] = {'H', 'e', 'l', 'l', 'o', '\0'};// Valide
```
- Cette manière de déclaré une chaîne de caractère est bonne. Attention il faut bien utiliser les `' '` (apostrophes) et non les guillemets.

``` C
char chaine[4] = {'H', 'e', 'l', 'l', 'o', '\0'};// Invalide
```
- Cette déclaration est fausses car ici on dit que le tableau peut contenir au maximum 5 caractères avec ceci -> `chaine[4]`  mais on en a 6.

``` C
char chaine[9] = {'H', 'e', 'l', 'l', 'o', '\0'};// Valide
```
- Cette déclaration est bonne quand on déclaré un taille maximale du tableau qui de 9 variables de type `char` maximum. Et on en a rentré 6 donc c'est bon. L'ordinateur va réserver 9 cases mémoire et ici on en a occupé que 6, voyons comment l'ordinateur à remplis les cases vides :

| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Valeurs | H   | e   | l   | l   | o   | \\0 | \\0 | \\0 | \\0 |
En effet l'ordinateur en remplis les cases vides de manière automatique par le caractère `\0`.

``` C
char chaine[] = {'H', 'e', 'l', 'l', 'o', '\0'};// Valide
```
- Cette déclaration est acceptable car on a pas déclaré la taille du tableau donc on peut insérer le nombre de caractère que l'on veut dans ce tableau. Automatiquement le langage C va stocker le mot "Hello" en un tableau de chaine de caractère de taille 6.

``` C
char chaine[6] = "Hello";// Valide
```
- Cette déclaration est bonne aussi. En effet le programme va automatiquement stocker le mot "Hello" en un tableau de chaine de caractère de taille 6 et la variable chaine est de taille 6 `chaine[6]`.

``` C
char chaine[3] = "Hello";// Invalide
```
- Cette déclaration n'est pas valide. car le programme voudra automatiquement stocker le mot "Hello" en un tableau de chaine de caractère de taille 6 mais on définit que chaine était de taille 3`chaine[3]`.

``` C
char chaine[8] = "Hello";// Valide
```
- Cette déclaration est bonne aussi. En effet le programme va automatiquement stocker le mot "Hello" en un tableau de chaine de caractère de taille 6 et la variable chaine est de taille 8 `chaine[8]`. L'ordinateur va réserver 8 cases mémoire et ici on en a occupé que 6, voyons comment l'ordinateur à remplis les cases vides :

| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- |
| Valeurs | H   | e   | l   | l   | o   | \\0 | \\0 | \\0 |
En effet l'ordinateur en remplis les cases vides de manière automatique par le caractère `\0`.

``` C
char chaine[]= "Hello";// Valide
```
- Cette déclaration est acceptable car on a pas déclaré la taille du tableau donc on peut insérer le nombre de caractère que l'on veut dans ce tableau. Automatiquement le langage C va stocker le mot "Hello" en un tableau de chaine de caractère de taille 6.

``` C
char chaine[6];
chaine = "Hello";// Invalide
```
- Cette déclaration est fausse. Car on déclare la variable `chaine[6]` de type `char` et on dit que c'est un tableau de taille 6.
- `chaine = "Hello";` : Cette ligne est fausse car `chaine` sans crochet est un pointeur qui pointe vers la première ligne du tableau qui `&chaine[0]`. Étant donné que `chaine` est pointeur et qu'on lui affecte une adresse et non une chaîne de caractère (`"Hello"`), la ligne de code est fausse.


## Affectation

Avec différent exemples nous allons voir comment affecter correctement des valeurs a un tableau de chaîne de caractères en C.

``` C
char chaine[] = "Hello";

chaine = "Toto";

chaine[4] = "n";

chaine[4] = 'n';

chaine[6] = 'n';
```

``` C
char chaine[] = "Hello";// Invalide
```
- Cette affectation est fausse. Car on déclare la variable `chaine[]` de type `char` et on ne définie pas sa taille.

``` C
chaine = "Toto";// Invalide
```
- `chaine = "Toto";` : Cette ligne est fausse car `chaine` sans crochet est un pointeur qui pointe vers la première ligne du tableau qui est `&chaine[0]`. Étant donné que `chaine` est pointeur et qu'on lui affecte une adresse et non une chaîne de caractère (`"Hello"`), la ligne de code est fausse.

| Indice  | 0   | 1   | 2   | 3   | 4   | 5   |
| ------- | --- | --- | --- | --- | --- | --- |
| Valeurs | H   | e   | l   | l   | o   | \\0 |

``` C
chaine[4] = "n";// Invalide
```
- Cette affectation est fausses. On souhaite affecter au tableau `chaine[]` à la case avec l'indice 4 la valeur `"n"`. Ceci n'est pas acceptable car on utilise des guillemets `" "`. Quand on souhaite affecter un et un seul caractère on utilise `' '` (les apostrophes).

| Indice  | 0   | 1   | 2   | 3   | 4   | 5   |
| ------- | --- | --- | --- | --- | --- | --- |
| Valeurs | H   | e   | l   | l   | o   | \\0 |

``` C
chaine[4] = 'n';// Valide
```
- Cette affectation est bonne. On souhaite affecter au tableau `chaine[]` à la case avec l'indice 4 la valeur `'n'`. Ceci est acceptable car on utilise des apostrophes `' '`. Quand on souhaite affecter un et un seul caractère on utilise `' '` (les apostrophes).

| Indice  | 0   | 1   | 2   | 3   | 4   | 5   |
| ------- | --- | --- | --- | --- | --- | --- |
| Valeurs | H   | e   | l   | l   | n   | \\0 |

``` C
chaine[6] = 'n';// Invalide
```
- Cette affectation est fausses. car le programme a automatiquement stocker le mot "Hello" en un tableau de chaine de caractère de taille 6 mais on souhaite affecter au tableau `chaine[]` à la case avec l'indice 6 la valeur `'n'`. Comme le tableau `char[]` a automatiquement alloué un espace mémoire de 6 cases l'indice de la dernière valeur est 5, l'indice 6 n'existe pas.

| Indice  | 0   | 1   | 2   | 3   | 4   | 5   |
| ------- | --- | --- | --- | --- | --- | --- |
| Valeurs | H   | e   | l   | l   | n   | \\0 |



## Chaînes de caractères constante

Une chaîne de caractère constante est une chaîne déclaré avec un pointeur

``` C
char *chaine = "Hello";
```
- Dans cette déclaration on mentionne le type de données `char`, on déclare un pointeur `*char` qui va pointer sur une case d'un tableau qui va contenir "Hello". Cette méthode est la méthode utilisé pour déclaré une chaîne de caractère constante.
#### Attention : Une fois que l'on a déclarer une chaîne de caractère constante on ne peut pas modifier les valeurs des cases du tableau. 


``` C
char *chaine[] = "Hello";

char *chaine;
chaine = "Hello";

char *chaine;
*chaine = "Hello";

chaine[4] = 'n'
```

``` C
char *chaine[] = "Hello";// Invalide
```
- Cette déclaration est fausse car `*chaine` est un pointeur ce n'est pas un tableau.

``` C
char *chaine;
chaine = "Hello";// Valide
```
- `char *chaine;` : Ici, on déclare un pointeur "chaine".
- `chaine = "Hello";` : Ensuite nous affectons à cette adresse `chaine` (qui est un pointeur qui pointe vers la première adresse du tableau qui contient `"Hello"`, donc l'adresse de H (`&H`) ), le tableau de "Hello".

``` C
char *chaine;
*chaine = "Hello";// Invalide
```
- `char *chaine;` : Ici, on déclare un pointeur "chaine".
- `chaine = "Hello";` : Ensuite nous affectons au contenu de `chaine` (qui est un pointeur qui pointe vers la première adresse du tableau qui contient `"Hello"`, donc l'adresse de H (`&H`) ), le tableau de "Hello". Ce n'est pas possible car `char *chaine;` est une chaînes de caractères constante donc on ne peut pas modifier son contenu.

``` C
chaine[4] = 'n';// Invalide
```
- `chaine[4] = 'n';` : Ici, on souhaite affecter à la case 4 le caractère "n" ce n'est pas possible car `chaine` est une chaîne de caractère constantes, on ne peut pas modifier son contenu. 




# Chaîne de caractères - Affichage & écriture

## Chaîne des caractère - Affichage

Le `%s` est utilisé comme spécificateur de format pour chaîne de caractères en langages C.
#### Exemple - Affichage :

``` C
#include <stdio.h>  
  
int main(){  
      
    char c[] = "Ali";  
  
    printf("%c", c[2]);  
      
    printf("%s", c);


	return 0;
}
```

``` C
char c[] = "Ali";
```

| Valeurs | A   | l   | i   | 3   |
| ------- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | \\0 |
``` C
printf("%c", c[2]);
```
- Affichera "i".

![[Pasted image 20240901231636.png]]


``` C
prinf("%s", c);
```
- Le `%s` est utilisé comme spécificateur de format pour la chaîne de caractères en langages C.
- Affichera "Ali".

![[Pasted image 20240901231744.png]]



## Chaîne des caractère - Écriture

Le nom d'un tableau est un pointeur qui pointe vers le premier élément d'un tableau. Par conséquent, il n'est pas nécessaire de mettre `&` dans `scanf`.
#### Exemple - Écriture

``` C
#include <stdio.h>  
  
int main(){  
  
    char c[10];  
  
    printf("Entrer votre nom : \n");  
    scanf("%s", c);  
  
    printf("Votre nom est : %s", c);  
  
  
  
  
    return 0;  
}
```

``` C
char c[10];
```

| Valeurs |     |     |     |     |     |     |     |     |     |     |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

``` C
scanf("%s", c);
```
- Le nom d'un tableau est un pointeur qui pointe vers le premier élément d'un tableau. Par conséquent, il n'est pas nécessaire de mettre `&` dans `scanf`.

| Valeurs | A   | m   | i   | n   | e   | \\0 | \\0 | \\0 | \\0 | \0  |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

``` C
printf("Votre nom est : %s", c);
```
- Dans cette exemple si je met : "Amine" comme nom le programme m'affichera "Amine"

Cependant si je mets un nom composée par exemple "Ali Amine" le programme ne m'affichera que "Ali" :

| Valeurs | A   | l   | i   | \\0 | \\0 | \\0 | \\0 | \\0 | \\0 | \0  |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

``` C
printf("Votre nom est : %s", c);
```

![[Pasted image 20240901231435.png]]

`scanf` ne stocke pas le caractère d'espacement dans la variable de type chaîne de caractères.



### Écriture - gets()

La fonction `gets()` permet la lecture au clavier d'une chaîne de caractères comprenant des espaces.

``` C
char c[10];

printf("Entrez votre nom : ");
gets(c);

printf("%s\n", c);

printf("%.3s \n", c);

```

``` c
char c[10];
```

| Valeurs |     |     |     |     |     |     |     |     |     |     |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

``` C
printf("Entrer votre nom : ");
gets(c);
```
- Afin de lire toute la ligne d'entrée, la fonction `gets()` peut être utilisée. En plus, elle n'a pas besoin d'ajouter le spécificateur de format.

| Valeurs | A   | l   | i   |     | A   | m   | i   | n   | e   | \\0 |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |
``` C
printf("%s", c);
```
- Affichera "Ali Amine"

| Valeurs | A   | l   | i   |     | A   | m   | i   | n   | e   | \\0 |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

![[Pasted image 20240901230629.png]]

``` C
printf("%s \n", c);
```
- Affichera "Ali Amine".

| Valeurs | A   | l   | i   |     | A   | m   | i   | n   | e   | \\0 |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

![[Pasted image 20240901230501.png]]

``` C
printf("%.3s", c);
```
- Affichera "Ali".

| Valeurs | A   | l   | i   |     | A   | m   | i   | n   | e   | \\0 |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |
![[Pasted image 20240901232320.png]]


### Écriture - puts()

La fonction `puts()` permet d'afficher une chaîne de caractère sans utiliser le spécificateur de format, en plus elle ajoute automatiquement un retour à la ligne à la fin de la chaîne.

``` C
char chaine[10];

printf("Entrer votre nom : \n");
gets(chaine);

puts(c);
```
- Affiche "Ali Amine".

![[Pasted image 20240901233410.png]]



## Chaîne de caractère - Fonctions sur les chaînes

Pour utiliser les fonctions qui manipulent les chaînes de caractères, il est nécessaire d'inclure la bibliothèque "string.h".

``` C
#include <string.h>

...
```

### Fonctions sur les chaînes - strlen()

La fonction `strlen()` renvoie la longeur de la chaîne de caractères. Elle ne compte pas le caractère \\0 lors du calcul de la longueur.

``` C
#include <stdio.h>  
#include <string.h>  
  
  
int main(){  
  
    char c[] = "Ali";  
  
    int n = strlen(c);  
  
    printf("%d", n);  
  
    // OU  
  
    printf("%d", strlen(c) );  
  
  
    return 0;  
}
```


| Valeurs | A   | l   | i   | \\0 |
| ------- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   |

``` C
printf("%d", n);
```
- Affiche 3.

![[Pasted image 20240902004406.png]]

``` C
printf("%d", strlen(c) );
```
- Affiche 3.

![[Pasted image 20240902004621.png]]


### Fonctions sur les chaînes - strcpy()

La fonction `strcopy()` permet de copier une chaîne à l'intérieur d'une autre, y compris le caractère `\0` .

``` C
#include <stdio.h>  
#include <string.h>  
  
  
int main(){  
  
    char c[] = "Ali";  
  
    char d[10];  

	strcpy(d, c);

    puts(d);    
  
  
    return 0;  
}
```

``` C
char c[] = "Ali";
```

| Valeurs | A   | l   | i   | \\0 |
| ------- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   |

``` C
char d[10];
```

| Valeurs |     |     |     |     |     |     |     |     |     |     |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

``` C
strcpy(d , c);
```
- `d` : chaîne de destination.
- `c` : source.
- On souhaite copier à l'intérieur de `d` la chaîne  `c`.

| Valeurs | A   | l   | i   | \\0 | \\0 | \\0 | \\0 | \\0 | \\0 | \\0 |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

``` C
puts(d);
```
- Affiche "Ali".

![[Pasted image 20240902005957.png]]


### Fonctions sur les chaînes - strncpy()

La fonction `strncopy()` permet de copier n caractère à l'intérieur d'une autre.

``` C
#include <stdio.h>  
#include <string.h>  
  
  
int main(){  
  
    char c[] = "Ali";  
  
    char d[10];  

	strncpy(d, c, 2);


    puts(d);    
  
  
    return 0;  
}
```

``` C
char c[] = "Ali";
```

| Valeurs | A   | l   | i   | \\0 |
| ------- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   |

``` C
char d[10];
```

| Valeurs |     |     |     |     |     |     |     |     |     |     |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

``` C
strncpy(d , c, 2);
```
- `d` : chaîne de destination.
- `c` : source.
- `2` : le langage C va copier les 2 premiers caractère de la source (`c`) qui sont `'A'` et `'l'`et les copier dans la chaîne de destination (`d`).
- On souhaite copier à l'intérieur de `d` les 2 premiers caractère (`'A'` et `'l'`) la chaîne  `c`.

| Valeurs | A   | l   | \\0 | \\0 | \\0 | \\0 | \\0 | \\0 | \\0 | \\0 |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

``` C
puts(d);
```
- Affiche "Al".

![[Pasted image 20240902011242.png]]


### Fonctions sur les chaînes - strcat()

La fonction `strcat()` permet d'ajouter une chaîne à la fin d'une autre chaîne.

``` C
#include <stdio.h>  
#include <string.h>  
  
  
int main(){  
  
    char c[] = "Ali";  
  
    char d[10] = "Amine ";  

	strcat(d, c);


    puts(d);    
  
  
    return 0;  
}
```

``` C
char c[] = "Ali";
```

| Valeurs | A   | l   | i   | \\0 |
| ------- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   |

``` C
char d[10] = "Amine "; 
```

| Valeurs | A   | m   | i   | n   | e   |     | \\0 | \\0 | \\0 | \\0 |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

``` C
strcat(d , c);
```
- `d` : chaîne de destination.
- `c` : source.
- On souhaite copier à la fin de `d` la chaîne  `c`.

| Valeurs | A   | m   | i   | n   | e   |     | A   | l   | i   | \\0 |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

``` C
puts(d);
```
- Affiche "Amine Ali".

![[Pasted image 20240902012131.png]]


### Fonctions sur les chaînes - strncat()

La fonction `strncat()` permet d'ajouter n caractère d'une chaîne à la fin d'une autre chaîne.

``` C
#include <stdio.h>  
#include <string.h>  
  
  
int main(){  
  
    char c[] = "Ali";  
  
    char d[10] = "Amine ";  

	strncat(d, c, 2);


    puts(d);    
  
  
    return 0;  
}
```

``` C
char c[] = "Ali";
```

| Valeurs | A   | l   | i   | \\0 |
| ------- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   |

``` C
char d[10] = "Amine "; 
```

| Valeurs | A   | m   | i   | n   | e   |     | \\0 | \\0 | \\0 | \\0 |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

``` C
strcat(d , c, 2);
```
- `d` : chaîne de destination.
- `c` : source.
- `2` : le langage C va copier les 2 premiers caractère de la source (`c`) qui sont `'A'` et `'l'`et les copier **à la fin** de la chaîne de destination (`d`).
- On souhaite copier **à la fin** de `d` les 2 premiers caractère (`'A'` et `'l'`) la chaîne  `c`.

| Valeurs | A   | m   | i   | n   | e   |     | A   | l   | \\0 | \\0 |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

``` C
puts(d);
```
- Affiche "Amine Al".

![[Pasted image 20240902012745.png]]


### Fonctions sur les chaînes - strcmp()

La fonction `strcmp()` permet de compare 2 chaînes de caractère par caractère. Elle retourne :

|      0      | Si les deux chaînes sont identiques                                                                                   |
| :---------: | --------------------------------------------------------------------------------------------------------------------- |
| **négatif** | Si la valeur ASCII du premier caractère<br>de la première chaîne est **inférieure** à<br>celle de la deuxième chaîne. |
| **positif** | Si la valeur ASCII du premier caractère<br>de la première chaîne est **supérieure** à<br>celle de la deuxième chaîne. |
``` C
#include <stdio.h>  
#include <string.h>  
  
  
int main(){  
	
	char a[] = "Ali";  
  
    char b[] = "Ali";

    char c[] = "ali";  
  
    char d[] = "Amine";  

	printf("%d", strcmp(a, b) );

	printf("%d", strcmp(a, c) );

	printf("%d", strcmp(d, a) );
  
  
    return 0;  
}
```

``` C
printf("%d", strcmp(a, b) );
```
- Les 2 mots son identiques donc le résultats sera 0.

![[Pasted image 20240902014235.png]]


``` C
printf("%d", strcmp(a, c) );
```
- `a` : "Ali".
- `c` : "ali".
- Pour connaître le résultat de la comparaison nous allons regarder le code ASCII de `'A'` (65) et celui de `a` (97). La valeur ASCII de `A` < la valeur ASCII de `a`. Donc ici, la valeur ASCII du premier caractère de la première chaîne est **inférieure** à celle de la deuxième chaîne, c'est pourquoi le résultat sera négatif (-1).

![[Pasted image 20240902014309.png]]


``` C
printf("%d", strcmp(d, a) );
```
- `d` : "Amine".
- `a` : "Ali".
- Pour connaître le résultat de la comparaison nous allons regarder le code ASCII de `'A'` (97) et celui de `A` (97). La valeur de `A` = la valeur de `a`. Donc nous allons regarder le code ASCII de `'m'` (109) et celui de `l` (108). La valeur de `m` > la valeur de `l`. Ici, la valeur ASCII du deuxième caractère de la première chaîne est **inférieure** à celle de la deuxième chaîne, c'est pourquoi le résultat sera positif (1).

![[Pasted image 20240902014337.png]]



### Fonctions sur les chaînes - strchr()

La fonction `strchr()` permet de rechercher la 1ére occurrence du caractère dans la chaîne. Elle renvoie l'adresse sur la case de chaine contenant le caractère s'il existe, NULL sinon.

``` C
#include <stdio.h>  
#include <string.h>  
  
  
int main(){  
  
    char a[] = "Hello World";  
  
    printf("%s\n", strchr(a, 'W') );  
  
    char *b = strchr(a, 'o');  
  
    printf("%s\n", b);  
  
  

  
    return 0;  
}
```

``` C
printf("%s\n", strchr(a, 'W') ); 
```
- `a` : la chaîne ou l'on va chercher l'occurrence.
- `'W'` : l'occurrence que l'on doit rechercher qui est un caractère.
- Nous allons afficher la première occurrence de `'W'`. Dans notre cas elle existe donc on va afficher `'W'` et toutes les lettres qui se trouve après `'W'` ('o', 'r', 'l', 'd'), Donc ce qui va être afficher est :

![[Pasted image 20240902021132.png]]


``` C
char *b = strchr(a, 'o'); 
```
- Nous allons stocker dans une chaîne de caractère constante tout les caractères qui se trouve après la 1ère occurrence du caractère `'o'` (' ', 'W', 'o', 'r', 'l', 'd'').

| Valeurs | o   |     | W   | o   | r   | l   | d   | \\0 |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   |

``` C
printf("%s\n", b);
```
- Affiche "o World".

![[Pasted image 20240902021929.png]]


### Fonctions sur les chaînes - strrchr()

La fonction `strrchr()` est similaire à la fonction `strchr()`, la seul différence est qu'elle recherche la chaine dans l'ordre inverse.

``` C
#include <stdio.h>  
#include <string.h>  
  
  
int main(){  
  
    char a[] = "Hello World";  
  
    printf("%s\n", strrchr(a, 'l') );  
  
    char *b = strrchr(a, 'o');  
  
    printf("%s\n", b);  
  

  
  
    return 0;  
}
```

``` C
printf("%s\n", strrchr(a, 'l') ); 
```
- `a` : la chaîne ou l'on va chercher l'occurrence.
- `'l'` : l'occurrence que l'on doit rechercher qui est un caractère.
- Nous allons afficher la première occurrence de `'l'`, notre recherche commence par la droite. Dans notre cas elle existe donc on va afficher tout les lettres qui se trouve après `'l'` ('d'), Donc ce qui va être afficher est :

![[Pasted image 20240902022713.png]]


``` C
char *b = strchr(a, 'o'); 
```
- Nous allons stocker dans une chaîne de caractère constante, en commençant par la droite, tout les caractères qui se trouve après la 1ère occurrence du caractère `'o'` ('r', 'l', 'd'').

| Valeurs | o   | r   | l   | d   | \\0 |
| ------- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   |

``` C
printf("%s\n", b);
```
- Affiche "orld".

![[Pasted image 20240902022944.png]]


### Fonctions sur les chaînes - strstr()

La fonction `strstr()` est similaire à la fonction `strchr()`, sauf qu'elle recherche un chaîne au lieu d'un seul caractère.

``` C
#include <stdio.h>  
#include <string.h>  
  
  
int main(){  
  
    char a[] = "Hello World";  
  
    printf("%s\n", strstr(a, "lo") );  
  
    char *b = strstr(a, "Wo");  
  
    printf("%s\n", b);  
  
  
  
  
    return 0;  
}
```

``` C
printf("%s\n", strstr(a, "lo") ); 
```
- `a` : la chaîne ou l'on va chercher l'occurrence.
- `"lo"` : l'occurrence que l'on doit rechercher qui est une chaîne.
- Nous allons afficher la première occurrence de `"lo"`. Dans notre cas elle existe donc on va afficher tout la chaîne qui se trouve après `"lo"` (" World"), Donc ce qui va être afficher est :

![[Pasted image 20240902023914.png]]


``` C
char *b = strchr(a, "Wo"); 
```
- Nous allons stocker dans une chaîne de caractère constante, tout la chaîne qui se trouve après la 1ère occurrence de la chaîne `"Wo"` ("rld").

| Valeurs | W   | o   | r   | l   | d   | \\0 |
| ------- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   |

``` C
printf("%s\n", b);
```
- Affiche "World".

![[Pasted image 20240902024207.png]]


### Fonctions sur les chaînes - strrev()

La fonction `strrev()` permet de renvoyer l'inverse d'une chaîne de caractères.

``` C
#include <stdio.h>  
#include <string.h>  
  
  
int main(){  
  
    char a[] = "Ali";  
  
    printf("%s\n", strrev(a) );
  
  
  
    return 0;  
}
```

``` C
printf("%s\n", strrev(a) );
```
- `a` : la chaîne que l'on va inverser.
- Nous allons inverser la chaîne de caractère `a`, Donc ce qui va être afficher est :

![[Pasted image 20240902024716.png]]


### Fonctions sur les chaînes - strlwr()

La fonction `strlwr()` permet de renvoyer les caractères d'une chaîne de caractères en minuscules.

``` C
#include <stdio.h>  
#include <string.h>  
  
  
int main(){  
  
    char a[] = "Ali";  
  
    printf("%s\n", strlwr(a) );
  
  
  
    return 0;  
}
```

``` C
printf("%s\n", strlwr(a) );
```
- `a` : la chaîne dont on va renvoyer les caractères en minuscules.
- Nous allons renvoyer les caractères, de la chaîne de caractère `a`, en minuscule, Donc ce qui va être afficher est :

![[Pasted image 20240902025149.png]]


### Fonctions sur les chaînes - strupr()

La fonction `strupr()` permet de renvoyer les caractères d'une chaîne de caractères en majuscules.

``` C
#include <stdio.h>  
#include <string.h>  
  
  
int main(){  
  
    char a[] = "Ali";  
  
    printf("%s\n", strupr(a) );
  
  
  
    return 0;  
}
```

``` C
printf("%s\n", strupr(a) );
```
- `a` : la chaîne dont on va renvoyer les caractères en majuscules.
- Nous allons renvoyer les caractères, de la chaîne de caractère `a`, en majuscule, Donc ce qui va être afficher est :

![[Pasted image 20240902025535.png]]



#### Exercice 1

Qu'est-ce que le programme suivant affiche ?

``` C
#include <stdio.h>

int main(){

	char c[] = "GATE2020";
  
	char *p = c;
  
	printf("%s", p + p[3] - p[1]);


	return 0;
}
```

``` C
char c[] = "GATE2020";
```

| Valeurs | G   | A   | T   | E   | 2   | 0   | 2   | 0   | \\0 |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Indice  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   |

``` C
char *p = c;
```
- `p = &c[0]`

``` C
printf("%s", p + p[3] - p[1]);
```
- `p + p[3] - p[1]` <=> `p[3]` => `'E'`   -    `p[1]` => `'A'`
					 Ascii('E')            -    Ascii('A')
					 69                     -       65                 =    4
- `p + 4` <=> `&c[0]` + 4
	    <=> `&c[0+4]`
		<=> `&c[4]`
- Donc, maintenant `p = &c[4];`, donc ce qui va être afficher sera 2020.

![[Pasted image 20240902031605.png]]


#### Exercice 2

Écrire un programme C pour copier une chaîne dans une autre chaîne sans utiliser la fonction `strcpy()`.

``` C
#include <stdio.h>  
  
int main(){  
  
    char C1[10];  
    char C2[10];  
    int i;  
  
    printf("Veuillez saisir une chaine : \n");  
    gets(C1);  
  
    for(i = 0; C1[i] != '\0'; i++)  
        C2[i] = C1[i];  
  
    C2[i] = '\0';  
  
    printf("La premiere chaine est : %s\n", C1);  
    printf("La deuxieme chaine est : %s\n", C2);  
    printf("Le nombre total de caractere copies est : %d\n", i+1);  
  
  
    return 0;  
}
```

