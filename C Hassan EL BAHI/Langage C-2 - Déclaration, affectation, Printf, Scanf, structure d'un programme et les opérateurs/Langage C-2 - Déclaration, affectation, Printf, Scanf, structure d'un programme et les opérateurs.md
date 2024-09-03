## Type

### Les variables et les constantes

Chaine de caractères
caractères = `char`
Entier  = `int`
Réel = `float`,  `double`
Booléen = `bool`

#### Type des données - Entier
| Type | Valeur min | Valeur max | Nombre d'octets |
| ---- | ---- | ---- | ---- |
| int | -32 768 | 32 767 | 2 |
| long | -2 147 483 648 | 2 147 489 647 | 4 |
| unsigned int | 0 | 65 535 | 2 |
| unsigned long | 0 | 4 294 967 295 | 4 |
`unsigned int` = que la valeur positif d'un int
`unsigned long` = que la valeur positif d'un long

2 octets = 16 bits pour stockés une valeurs (8x2)
4 octets = 32 bits pour stockés une valeurs (8x4)


#### Types de données - Réel
| Type | Valeur min | Valeur max | Nombre d'octets |
| ---- | ---- | ---- | ---- |
| float | 3.4 x 10^-38 | 3.4 x 10^+38 | 4 |
| double | 1.7 x 10^-308 | 1.7 x 10^+308 | 8 |
| long double | 3.4 x 10^-4932 | 3.4 x 10^+4932 | 10 |
4 octets = 32 bits pour stockés une valeurs (8x4)
8 octets = 64 bits pour stockés une valeurs (8x8)
10 octets = 80 bits pour stockés une valeurs (8x10)


#### Types de données - Caractère
| Type | Valeur min | Valeur max | Nombre d'octets |
| ---- | ---- | ---- | ---- |
| char | -128 | 127 | 1 |
| unsigned char | 0 | 255 | 1 |
1 octets = 8 bits pour stockés une valeurs (8x1)


#### Types de données - Caractère
| Type | Valeur min | Nombre d'octets |
| ---- | ---- | ---- |
| bool | 0 ou 1 | 1 |
1 octets = 8 bits pour stockés une valeurs (8x1)


#### Types de données - Exercice 1
##### Donner le type des données suivantes :
| Donnée      | Type                |
| ----------- | ------------------- |
| "d"         | char                |
| -300        | int ou float        |
| "8"         | char                |
| 2506.5      | float               |
| 6 x 10^+802 | long double         |
| 87          | int ou unsigned int |
| true        | bool                |



## Déclaration

l'opération de déclaration permet d'informer dans la mémoire de l'ordinateur l'espace nécessaire pour stockés les valeurs des variables et des constantes

#### Syntaxe de déclaration d'une constante en C

```C
const Type nom_Constant = valeur;
```

#### Syntaxe de déclaration d'une variable en C

```C
Type nom_Variable;
```


```C
#include <stdio.h>  
#include <stdbool.h>  
  
int main()  
{  
    const float pi = 3.14;  
    const int nbr_mois = 12;  
  
    int num_Etudiant;  
    float note;  
    char sexe;  
    bool admis;  
      
    return 0;  
}
```

`#` = permet de faire un inclusion
`#include` = inclure 
`<stdio.h>` = permet d'identifier un fichier d'en tête
en effet le langage C a une bibliothèque de fonction qui sont des fonctions déjà toute faites qui permettent de faire un certain nombre de choses et ces fonction sont stockés dans des bibliothèque et ces bibliothèque sont triées et organisées d'une certaine manière dans des fichier d'en tête ici le `io` de `<stdio.h>` veut dire "input output" donc tout ce qui est lié aux entrées et sorties

`<stdbool.h> ` = bibliothèque qui contient le type bool

`int main (void){}` = fonction qui s'appelle "main" et qui a un paramètre "void" qui veut dire qu'elle n'aura pas de paramètre et le "int" au début veut dire que la fonction retournera un entier/int

`const float pi = 3.14` = création d'une constante de type `float` qui se nomme "pi" et on lui affecte la valeur 3.14

`const int nbr_mois = 12` = création d'une constante de type `int` qui se nomme "nbr_mois" et on lui affecte la valeur 3.14

`int num_Etudiant` = création d'une variable de type `int` qui se nomme "num_Etudiant"

`float note` = création d'une variable de type `float` qui se nomme "note"

`char sexe` = création d'une variable de type `char` qui se nomme "sexe"

`bool admis` = création d'une variable de type `admis` qui se nomme "admis"



## Affectation

L'affectation est une opération qui consiste à attribuer une variable : soit une valeur particulière, soit une valeur contenue dans une autre variable, soit une valeur calculée à l'aide d'opérateurs arithmétiques.

```C
nom_Variable = Valuer;
```

#### Exemple

```C
moyenne = 15.51;
sexe = "F";
num_Etudiant = 34;
```

#### Affectation - Exercice 3

##### Complétez le tableau suivant :
|                 |     | Valeur |     |     |
| :-------------- | :-: | :----: | :-: | :-: |
| Instruction     |  A  |   B    |  C  |  D  |
| B = 2;          |     |   2    |     |     |
| C = B + 10      |     |   2    | 12  |     |
| A = 4;          |  4  |   2    | 12  |     |
| D = A;          |  4  |   2    | 12  |  4  |
| B = B * D;      |  4  |   8    | 12  |  4  |
| C = B + 5;      |  4  |   8    | 13  |  4  |
| A = 10 + 4 + C; | 27  |   8    | 13  |  4  |
| C = A + B + D;  | 27  |   8    | 39  |  4  |



## L'instruction d'écriture - printf()

printf() permet d'afficher la valeur d'une expression sur l'écran. Une expression peut-être :

- Une chaîne de caractères (mettre la chaîne de caractère entre deux apostrophes)
- Un nombre, une variable numérique, un résultat d'une opération entre plusieurs variables.

#### Syntaxe

```C
printf("Texte ...", var, cons, expr, ...);
```
 `("Texte ...",` = dans cette partie on affiche :
				  - Le texte à afficher
				  - Les spécificateurs de format `printf("%d", x);`
				  - Caractère d'échappement `printf("\t", x);` ou `printf("\n", x);`

`var, cons, expr);` = Variables, constantes ou expressions dont les valeurs sont à afficher

#### Exemples : 

```C
#include <stdio.h>  

int main()
{
	printf("Maroc");
	
	return 0;  
}
```

`printf("Maroc");` = Signifie affiché sur l'écran le message suivant : Maroc

```C
#include <stdio.h>  

int main()
{
	int A = 12;

	printf("A = %d", A);
	
	return 0;  
}
```

`printf("A = %d", A);` = Signifie affiché sur l'écran le contenu de la variable A

```C
#include <stdio.h>  

int main()
{
	float X = 12.25;
	float Y = 54.2685;

	printf("les coordonnées sont : %f, %f", X, Y);
	
	return 0;  
}
```

`printf("les coordonnées sont : %f, %f", X, Y);` = Signifie affiché sur l'écran le message suivant : 
les coordonn├®es sont :  12.25, 54.2685


#### Les spécificateurs de format
| Les spécificateurs de format |      Type       |
| :--------------------------: | :-------------: |
|            " %d"             |       int       |
|            " %ld"            |      long       |
|            " %f"             | float ou double |
|            " %c"             |      char       |

#### Les caractère d'échappement
| Les caractère d'échappement |          Type          |
| :-------------------------: | :--------------------: |
|           " \n "            |   Retour à la ligne    |
|           " \t "            | Tabulation horizontale |
|           " \\' "           | Affiche une apostrophe |
|           " \\" "           |  Affiche un guillemet  |
|          " \\\\ "           |  Affiche un antislash  |
|           " %% "            |      Affiche un %      |



## L'instruction de lecture : scanf()

scanf() permet de mdander à l'utilisateur de fournir des informations. Chaque information donnée par l'utilisateur est stockée dans une variable

#### Syntaxe

```C
scanf("format_1,...", &var_1, ...);
```

`("format_1, ...",` = Ici on met le spécificateur de format
`&` = correspond a l'adresse
`var_1, ...);` = Ici on met nos différentes variables

#### Exemples

```C
scanf("%d", &x);
```
Ici on peut demander a l'utilisateur de fournir une valeur `x` ici x est de type entier

```C
scanf("%c", &y);
```
Ici on peut demander a l'utilisateur de fournir une valeur `y` ici y est de type caractère

```C
scanf("%d%d%d", &jour, &mois, &annee);
```
Ici on peut demander a l'utilisateur de fournir une valeur `jour` `mois` `annee` ici jour mois et annee sont de type entier

##### Spécificité pour le type double

Dans le scanf() d'une variable de type double dans son spécificateur de format on a met "%lf"

```C
#include <stdio.h>  
#include <stdbool.h>  
  
int main()  
{  
	double a;  
  
    printf("Veuillez saisir la valeur de a : ");  
    scanf("%lf", &a);  
  
    printf("a = %.2f\n", a);    
  
    return 0;  
}
```

#### Remarque

Lors de l'exécution de l'instruction de la fonction scanf() la machine attend que l'utilisateur lui fournisse une valeur afin de pouvoir continuer à exécuter l'algorithme


#### printf() - scanf() - Exercice 4

Nous voulons écrire un programme qui calcule l'aire d'un cercle.
1. - Donner les instructions de déclaration.
2. - Donner les instructions qui demandent à l'utilisateur de taper les valeurs des données.
3. - Donner les instructions qui permettent d'afficher le résultat.
4. - Donner les instructions qui permettent d'afficher le résultat.




## La structure d'un programme C

```C
#include <stdio.h>

int main(void)  
{  
    printf("Bonjour tout le monde ! :)\n");  
    
    return 0;  
}
```
`#` = permet de faire un inclusion
`include <stdio.h>` = Appel des bibliothèques
`#include` = inclure 
`<stdio.h>` = permet d'identifier un fichier d'en tête
en effet le langage C a une bibliothèque de fonction qui sont des fonctions déjà toute faites qui permettent de faire un certain nombre de choses et ces fonction sont stockés dans des bibliothèque et ces bibliothèque sont triées et organisées d'une certaine manière dans des fichier d'en tête ici le `io` de `<stdio.h>` veut dire "input output" donc tout ce qui est lié aux entrées et sorties

`int main(){}` = Fonction principale
`int main (void){}` = fonction qui s'appelle "main" et qui a un paramètre "void" qui veut dire qu'elle n'aura pas de paramètre et le "int" au début veut dire que la fonction retournera un entier/int

`{ }` = Partie traitement
`printf()` = est une fonction qui permet d'afficher qqch, cette fonction est inclus dans la bibliothèque standard et on peut l'utiliser car on a inclus le fichier d'en tête `<stdio.h>`
Dans le langage C une fonction ne doit faire qu'une seule chose et elle doit retourner qqch

`printf("Bonjour tout le monde ! :)\n);` = ici on veut afficher "Bonjour tout le monde ! :)"  `\n` permet de revenir à la ligne


#### chiffre d'affaire - Exercice 5

Ecrire un programme qui demande à l'utilisateur de taper la quantité de produit vendus, le prix de vente et qui affiche le chiffre d'affaire de l'entreprise.


## Expression arithmétique

Les opérateurs arithmétiques usuels sont :

| Opérateur |        Signification         |
| :-------: | :--------------------------: |
|   + , -   |    Addition, Soustraction    |
|   * , /   |   Multiplication, Division   |
|     %     | Reste de la division entière |
|    ++     |        Incrémentation        |
|    --     |        Décrémentation        |


## Puissance en langage C

on appelle la libraire `<math.h>` et ensuite on utilise la fonction `pow(base, exposant)`

```C
#include <stdio.h>  
#include <math.h>  
  
int main()  
{
    int X, Y, Z;

	X = 4;
	Y = 3;
	Z = pow(X, Y);
  
    printf(" %d", Z);   
  
    return 0;  
}
```



## Expression arithmétique élargie

Exemple des opérateurs arithmétiques élargies

| Opérateur | Opération normale | Opération élargie |
| :-------: | :---------------: | :---------------: |
|    +=     |    X = X + Y;     |      X += Y;      |
|    -=     |    X = X - Y;     |      X -= Y;      |
|    *=     |    X = X * Y;     |      X *= Y;      |
|    /=     |    X = X / Y;     |      X /= Y;      |
|    %=     |    X = X % Y;     |      X %= Y;      |

#### Expression arithmétique - Exercice 6

Donner les valeurs des variables (de type float) après chaque instruction :

| Instruction          |  A  |  B   |  C  |  D   |
| :------------------- | :-: | :--: | :-: | :--: |
| A = 4 + 2;           |  6  |      |     |      |
| B = ++A;             |  7  |  7   |     |      |
| C = A * B++;         |  7  |  8   | 49  |      |
| D = pow(C, 2);       |  7  |  8   | 49  | 2401 |
| A /= 2;              | 3.5 |  8   | 49  | 2401 |
| D = ++D - C;         | 3.5 |  8   | 49  | 2353 |
| C -= B--;            | 3.5 |  7   | 41  | 2353 |
| B = (A-- + --C) / B; | 2.5 | 6.21 | 40  | 2353 |
`B = ++A` = Quand le ++ est au début de la variable on fait d'abord l'incrémentation et ensuite on fait l'affectation
`B = A++` = Quand le ++ est à la fin de la variable on fait l'incrémentation a `A` et ensuite on affecte a `B` cette incrémentation



## Expression de comparaison

Une expression de comparaison donne un résultat booléan (vrai ou faux). Les oérateurs de comparaison usuels sont : `>`, `==`, `<`, >=, <=,  !=

#### Expression de comparaison - Exercice 7

Donner les valeurs des variables A (de type booléan) après chaque instruction :

| Instruction                   | Résultat  |
| ----------------------------- | :-------: |
| A = 3 < 5;                    | True (1)  |
| A = 2 != 4;                   | True (1)  |
| A = 1 > 8;                    | False (0) |
| A = (50 % 3) == 2;            | True (1)  |
| A = (5 * 15) > pow(5, 5);     | False (0) |
| A = (10 - 22) <= (5 - 9 * 2); | False (0) |



## Expression logique

Une expression  logique est la composée d'expression de comparaison par les opérateurs logiques. Une expression logique donne un résultat booléen (vrai ou faux). Langage C dispose de trois opérateurs logique : et (notée `&&`), ou (noté `||`) et non (noté `!`).

##### Tableau des valeurs de vérité
|   A   |   B   | A && B | A \|\| B |  !A   |
| :---: | :---: | :----: | :------: | :---: |
| False | False | False  |  False   | True  |
| False | True  | False  |   True   | True  |
| True  | False | False  |   True   | False |
| True  | True  |  True  |   True   | False |

#### Expression logique - Exercice 8

Donner les valeurs des variables logique (C, D, E, F et G) dans chacun des cas suivants :

| Instruction                  | Résultat  |
| ---------------------------- | :-------: |
| A = 5;                       |     5     |
| B = 6;                       |     6     |
| C = (A < B) && (3 > B);      | False (0) |
| D = (A = 5) \|\| (B > 10);   | True (1)  |
| E = !C;                      | True (1)  |
| F = C \|\| (E && D);         | True (1)  |
| G = (!E && F) \|\| (C && D); | False (0) |

