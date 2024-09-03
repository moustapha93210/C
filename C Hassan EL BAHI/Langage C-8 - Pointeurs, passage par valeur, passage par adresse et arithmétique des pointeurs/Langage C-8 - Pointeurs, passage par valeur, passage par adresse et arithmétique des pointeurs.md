

# Pointeur


## Qu'est-ce qu'un pointeur ?

Un **pointeur** est une variable qui peut contenir l'**adresse** d'une autre variable.
Si un pointeur P contient l'adresse d'une variable A, on dit que : "**P pointe sur A**".



## Les opérateurs de base

Lors du travail avec des pointeurs, nous avons besoin :

**&** : pour obtenir l'**adresse d'une variable**.
\* : pour accéder au **contenu d'une adresse**.

#### Création d'un pointeur :

``` C
int a;
int *p = &a;
```

**OU**

``` C
int a;
int *p;
p = &a;
```

#### Exemple :

``` C
int a = 8;
int *p;
p = &a;
```

|  p  |  a  |
| :-: | :-: |
|  .  |  8  |
Dans cet exemple on alloue un espace mémoire à  `a` et dans cet espace on a la valeur 8. Par la suite lorsque l'on déclare le pointeur `p`, on met dans `p` l'adresse de a et automatiquement `p` pointe sur la variable `a` ou bien le contenu, si on met `*p` de ce pointeur c'est 8.


#### Exercice 1 :

Donner les valeurs des variables après chaque instruction :

| Instruction          |  A  |  B  |  C  | P1  | P2  |
| :------------------- | :-: | :-: | :-: | :-: | :-: |
| Initialisation       |  1  |  2  |  3  |  -  |  -  |
| P1 = &A;             |  1  |  2  |  3  | &A  |  -  |
| P2 = &C;             |  1  |  2  |  3  | &A  | &C  |
| \*P1 = ( \*P2 )++;   |  3  |  2  |  4  | &A  | &C  |
| P1 = P2;             |  3  |  2  |  4  | &C  | &C  |
| P2 = &B;             |  3  |  2  |  4  | &C  | &B  |
| \*P1 -= \*P2;        |  3  |  2  |  2  | &C  | &B  |
| ++\*P2;              |  3  |  3  |  2  | &C  | &B  |
| \*P1 *= \*P2;        |  3  |  3  |  6  | &C  | &B  |
| A = ++\*P2 * \*P1;   | 24  |  4  |  6  | &C  | &B  |
| P1 = &A;             | 24  |  4  |  6  | &A  | &B  |
| \*P2 = \*P1 /= \*P2; |  6  |  6  |  6  | &A  | &B  |

##### 1. P1 pointe vers l'adresse de A
``` C
P1 = &A;
```
- **P1 pointe maintenant vers A** : Cela signifie que `P1` contient l'adresse de la variable `A`.
- **`*P1` = Le contenue de `P1`** : `*P1` la valeur sur laquelle pointe `P1`, donc `*P1 = 1`.

---

##### 2. P2 pointe vers l'adresse de C
``` C
P2 = &C
```
- **P2 pointe maintenant vers C** : Cela signifie que `P2` contient l'adresse de la variable `C`.
- **`*P2` = Le contenu de `P2`** : `*P2` la valeur sur laquelle pointe `P2` , donc `*P2 = 3`.

---

##### 3. L'instruction `*P1 = (*P2)++;`
``` C
*P1 = (*P2)++;
```
**Opérateur d'incrémentation `++`** :

- L'opérateur `++` incrémente (ajoute 1 à) la valeur d'une variable. Il existe deux formes de cet opérateur :

    - **Post-incrémentation (`var++`)** : Incrémente la variable, mais retourne d'abord la valeur d'origine.
    
    - **Pré-incrémentation (`++var`)** : Incrémente la variable, puis retourne la nouvelle valeur.

C'est ici que se passe l'opération intéressante :

- **`(*P2)++`** :
    - Cette opération utilise la **post-incrémentation**. Cela signifie que la valeur actuelle de `*P2` (c'est-à-dire `C`) est utilisée avant que `C` soit incrémenté.
    - **Avant incrémentation** : `*P2` vaut 3 (la valeur de `C`).
    - **Après incrémentation** : `C` est incrémenté à 4.
    
- **Affectation `*P1 = 3`** :
    - Après avoir pris la valeur 3, l'instruction affecte cette valeur à `*P1`.
    - Étant donné que `P1` pointe vers `A`, cette opération met `A = 3`.

---

### 4. P1 est assigné à l'adresse pointée par P2
```c
P1 = P2;
```
- **P1 pointe maintenant vers C** : `P1` est maintenant assigné à la même adresse que `P2`, ce qui signifie que `P1` pointe maintenant vers `C`.
- **`*P1 = 4`** : Comme `P1` pointe maintenant vers l'adresse de `C`, le contenue de `P1` est le même que celui de `P2`, qui est 4, donc `*P1 = 4`.

### Résumé de l'opération :
- **Avant l'instruction** : `A = 3`, `B = 2`, `C = 4`, `P1` pointe vers `&A`, `P2` pointe vers `&C`.
- **Après l'instruction** : `A = 3`, `B = 2`, `C = 4`, `P1` et `P2` pointent tous deux vers `&C`.

---

### 5. P2 pointe vers l'adresse de B
```c
P2 = &B;
```
- **P2 pointe maintenant vers B** : `P2` est mis à jour pour contenir l'adresse de `B`, ce qui signifie que `P2` pointe maintenant vers `&B`.
- **`*P2 = 2`** : Comme `P2` pointe maintenant vers `&B`, la valeur de `*P2` est la même que celle de `B`, qui est 2.

### Résumé de l'opération :
- **Avant l'instruction** : `A = 3`, `B = 2`, `C = 4`, `P1` pointe vers `&C`, `P2` pointe vers `&C`.
- **Après l'instruction** : `A = 3`, `B = 2`, `C = 4`, `P1` pointe vers `&C`, `P2` pointe vers `&B`.

---

### 6. L'instruction `*P1 -= *P2;`
```c
*P1 -= *P2;
```
- **Soustraction `*P1 = *P1 - *P2`** : Le contenu de `P1` ou la valeur sur laquelle pointe `P1` est égale au contenu de `P1` moins le contenu de `P2` ou moins la valeur sur laquelle pointe `P2`.
- **Mise à jour de `C = 4 - 2 = 2`** : Après cette opération, la nouvelle valeur de `C` est 2, car `P1` pointe vers `&C`.

### Résumé de l'opération :
- **Avant l'instruction** : `A = 3`, `B = 2`, `C = 4`, `P1` pointe vers `C`, `P2` pointe vers `B`.
- **Après l'instruction** : `A = 3`, `B = 2`, `C = 2`, `P1` pointe vers `C`, `P2` pointe vers `B`.

---

### 7. L'instruction `++*P2;`
```c
++*P2;
```
- **Pré-incrémentation** : L'opérateur `++` est appliqué avant que la valeur soit utilisée. Cela signifie que la valeur de `*P2` (qui est le contenu de `P2`, donc `P2` pointe vers `&B`, c'est-à-dire `B`, qui est égale à 2) est d'abord incrémentée de 1, donc `B` devient 3.
- **Mise à jour de `B = 3`** : La valeur de `B` est mise à jour à 3 après cette opération.

### Résumé de l'opération :
- **Avant l'instruction** : `A = 3`, `B = 2`, `C = 2`, `P1` pointe vers `&C`, `P2` pointe vers `&B`.
- **Après l'instruction** : `A = 3`, `B = 3`, `C = 2`, `P1` pointe vers `&C`, `P2` pointe vers `&B`.

---

### 8. L'instruction `*P1 *= *P2;`
```c
*P1 *= *P2;
```
- **Multiplication `*P1 = *P1 * *P2`** : Cette opération multiplie `*P1` (qui est la valeur sur laquelle pointe `P1` qui est `&C`, donc 2) par `*P2` (qui est le contenu de `P2`, c'est-à-dire 3).
- **Mise à jour de `C = 2 * 3 = 6`** : Après cette opération, la nouvelle valeur de `C` est 6.

### Résumé de l'opération :
- **Avant l'instruction** : `A = 3`, `B = 3`, `C = 2`, `P1` pointe vers `&C`, `P2` pointe vers `&B`.
- **Après l'instruction** : `A = 3`, `B = 3`, `C = 6`, `P1` pointe vers `&C`, `P2` pointe vers `&B`.

---

### 9. L'instruction `A = ++*P2 * *P1;`
```c
A = ++*P2 * *P1;
```
- **Pré-incrémentation `++*P2`** : La valeur de `*P2` (qui est le contenu de `P2`, donc `&B`) est d'abord incrémentée de 1, donc `B` devient 4.
- **Multiplication `A = 4 * 6`** : Ensuite, cette nouvelle valeur de `B` (4) est multipliée par la valeur de `C` (qui est 6).
- **Mise à jour de `A = 24`** : Le résultat de la multiplication est affecté à `A`, donc `A` devient 24.

### Résumé de l'opération :
- **Avant l'instruction** : `A = 3`, `B = 3`, `C = 6`, `P1` pointe vers `&C`, `P2` pointe vers `&B`.
- **Après l'instruction** : `A = 24`, `B = 4`, `C = 6`, `P1` pointe vers `&C`, `P2` pointe vers `&B`.

---

### 10. P1 pointe vers l'adresse de A
```c
P1 = &A;
```
- **P1 pointe maintenant vers A** : `P1` est mis à jour pour contenir l'adresse de `A`, ce qui signifie que `P1` pointe maintenant vers `&A`.
- **`*P1 = 24`** : Comme `P1` pointe maintenant vers `&A`, la valeur de `*P1` (`&A` donc 24) est la même que celle de `A`, qui est 24.

### Résumé de l'opération :
- **Avant l'instruction** : `A = 24`, `B = 4`, `C = 6`, `P1` pointe vers `&C`, `P2` pointe vers `&B`.
- **Après l'instruction** : `A = 24`, `B = 4`, `C = 6`, `P1` pointe vers `&A`, `P2` pointe vers `&B`.

---

### 11. L'instruction `*P2 = *P1 /= *P2;`
```c
*P2 = *P1 /= *P2;
```
- **Division `*P1 /= *P2`** : La valeur de `*P1` (qui est le contenu de `P1`, donc `&A`, c'est-à-dire `A` = 24) est divisée par la valeur de `*P2` (qui est le contenu de `P2`, donc `&B`, c'est-à-dire `B` = 4). 24 / 4 = 6, Le résultat est 6.
- **Mise à jour de `A = 6`** : Après cette division, la nouvelle valeur de `A` devient 6.
- **Mise à jour de `B = 6`** : Cette même valeur 6 est ensuite affectée à `*P2`, ce qui signifie que `B` est également mis à jour à 6.

### Résumé de l'opération :
- **Avant l'instruction** : `A = 24`, `B = 4`, `C = 6`, `P1` pointe vers `A`, `P2` pointe vers `B`.
- **Après l'instruction** : `A = 6`, `B = 6`, `C = 6`, `P1` pointe vers `A`, `P2` pointe vers `B`.

---

### Résumé final de tout le programme :
- À la fin de ce programme, toutes les variables `A`, `B`, et `C` ont la valeur 6.
- `P1` pointe vers `A` et `P2` pointe vers `B`.




## Passage par valeur VS Passage par référence


#### Passage par valeur

``` C
#include <stdio.h>  
  
  
void echange(int x, int y){  
      
    int tmp;  
      
    tmp = x;  
    x = y;  
    y = tmp;  
      
}  
  
int main(){  
  
    int a = 1;  
    int b = 2;  
  
    printf("a = %d, b = %d\n", a, b);  
      
    echange(a, b);  
  
    printf("a = %d, b = %d", a, b);  
      
      
  
    return 0;  
}
```
- Dans le **passage par valeur**, une **copie** des arguments réels est transmise aux arguments formels respectifs.
		**Exemple** : dans la fonction `main` on créer une bouteille (arguments réels) et dans la fonction `fonction` on créer une copie de cette bouteille (arguments formels). Si on boit la bouteille dans la fonction `fonction` vu que c'est une copie, la bouteille de la fonction `main` reste pleine.


#### Passage par référence ou par adresse

``` C
#include <stdio.h>  
  
  
void echange(int *x, int *y){  
      
    int tmp;  
      
    tmp = *x;  
    *x = *y;  
    *y = tmp;  
      
}  
  
int main(){  
  
    int a = 1;  
    int b = 2;  
  
    printf("a = %d, b = %d\n", a, b);  
      
    echange(&a, &b);  
  
    printf("a = %d, b = %d", a, b);  
      
      
  
    return 0;  
}
```
- Dans le **passage par référence (par adresse)**, l'emplacement (**adresse**) des arguments réels est transmis à des arguments formels, tout modification apportée aux arguments formels **se reflétera également** dans les arguments réels.
		**Exemple** : dans la fonction `main` on créer une bouteille (arguments réels). Dans la fonction `fonction` on ne créer pas de copie, on transmets l'adresse des arguments réels aux arguments formels. On boit la bouteille de la fonction `main` à partir de la fonction `fonction`.


#### Exercice 2

Écrire un programme contenant une fonction qui permet de déterminer le maximum des deux valeurs saisies par l'utilisateur (Penser à utiliser le passage par adresse).

``` C
#include <stdio.h>  
  
  
void maximum(int *x, int *y, int *m){  
  
    if(*x > *y)  
        *m = *x;  
    else  
        *m = *y;  
  
}  
  
  
  
int main(){  
  
    int a, b, max;  
  
    printf("Veuillez saisir une valeur : \n");  
    scanf("%d", &a);  
  
    printf("Veuillez saisir une deuxième valeur : \n");  
    scanf("%d", &b);  
  
    maximum(&a, &b, &max);  
  
    printf("Le Max des deux valeurs est : %d\n", max);  
  
  
  
    return 0;  
}
```



## Pointeur - tableau

Le nom d'un tableau représente l'adresse de son premier élément

``` C
int T[5] = {3, -6, 14, 8, 24};
```
###### Ici le nom du tableau est `T` et `T` pointe sur la première case du tableau.


#### Exemple 1 :

``` C
printf("%d", T[0]);
```
- Cette instruction signifie que l'on veut afficher le premier éléments du tableau `T` qui est  `T[0]`, donc 3.

``` C
printf("%p", T);
```
- Cette instruction signifie que l'on va afficher le contenu de l'adresse mémoire de `T` qui pointe sur la première case du tableau qui a une adresse mémoire, donc le résultat sera l'adresse mémoire de `T[0]`.

``` C
printf("%d", &T[0]);
```
- Cette instruction signifie que l'on veut afficher l'adresse de `T[0]`.

``` C
printf("%d", *T);
```
- Cette instruction signifie que l'on veut afficher le contenu de la case mémoire sur laquelle pointe `T`, donc 3.

#### Exemple 2 :

``` C
int T[5] = {3, -6, 14, 8, 24};
int *p;

p = T;

printf("%d\n", T[0]);
printf("%d\n", *p);

p++;
printf("%d\n", *p);

p = p + 3;
printf("%d\n", *p);
```

``` C
printf("%d", T[0]);
```
- Cette instruction affichera le contenu de `T[0]`, donc 3.

``` C
printf("%d", *p);
```
- Cette instruction affichera le contenu sur laquelle `p` pointe. `p` pointe sur l'adresse de T\[0]\          (`&T[0]`), donc 3.

``` C
p++;
```
- Cette instruction fait en sorte qu'on ajoute à `p` 1. Donc maintenant `p` pointe sur l'adresse de   T\[1]\ (`&T[1]`).

``` C
printf("%d", *p);
```
- Cette instruction affichera le contenu sur laquelle `p` pointe. `p` pointe sur l'adresse de T\[1]          (`&T[1]`), donc -6.

``` C
p = p + 3;
```
- Cette instruction fait en sorte que l'on ajoute à `p` 3. Donc maintenant `p` pointe sur l'adresse de T\[4] (`&T[4]`).

``` C
printf("%d", *p);
```
- Cette instruction affichera le contenu sur laquelle `p` pointe. `p` pointe sur l'adresse de T\[4]          (`&T[4]`).


#### Exemple 3 :

``` C
int T[5] = {3, -6, 14, 8, 24};
int *p;

p = T;

*(T+1) = 2;

p++;

*(T+3) = 4;

*p += 5;

p = p + 2;
```

``` C
*(T+1) = 2;
```
- T+1 : l'adresse de T\[1].
- Cette instruction affichera le contenu de `T[1]`, donc 2.

``` C
p++
```
- Cette instruction fait en sorte qu'on ajoute à `p` 1. Donc maintenant `p` pointe sur l'adresse de T\[1]\ (`&T[1]`).

``` C
*(T+3) = 4;
```
- T+3 : l'adresse de T\[3].
- Cette instruction affichera le contenu de `T[3]`, donc 4.

``` C
*p += 5;
```
- `*p = *p + 5`  : `p` ici pointe sur l'adresse de T\[1] (`&T[1]`), T\[1] à pour valeur 2, donc 2 + 5 = 7.
- Cette instruction affichera le contenu de T\[1], donc 7.

``` C
p = p + 2;
```
- `p += 2;` : ici `p` pointe sur l'adresse de T\[1] (`&T[1]`). Si on ajoute 2 à `p` cela signifie que `p` pointe sur l'adresse de T\[3] `&T[3]`.
- p+i : pointe sur T\[i], ici p+2 : pointe sur T\[3] ( `p` de base pointe sur T\[1] c'est pour cela que maintenant `p` pointe sur T\[3] ) ).
- Cette instruction affichera `p` qui pointe sur l'adresse de T\[3] (`&T[3]`), donc 4.


Le nom d'un tableau représente l'**adresse** de son **premier** élément.

Si T un tableau et i un index de ses éléments, alors :
**T :** l'adresse de l'élément **T\[0]** 
**T+i :** l'adresse de l'élément **T\[i]**
**\*(T+i) :** désigne le contenu de l'élément **T\[i]**

Si P = T, alors :
**p :** pointe sur l'élément **T\[0]** 
**p+i :** pointe sur l'élément **T\[i]**
**\*(p+i) :** désigne le contenu de l'élément **T\[i]**

**On peut en déduire qu'un tableau est un pointeur qui pointe sur son première élément.**




## Arithmétique des pointeurs

Toutes les opérations avec des pointeurs prennent automatiquement en compte le type et la valeur des objets pointés.

`++` : Incrémentation
`--` : Décrémentation
`+` : Addition
`-` : Soustraction
`A < B` : Comparaison


#### Arithmétique des pointeurs - sizeof()

**sizeof()** : fournit la **taille** (en octets) du type ou de la variable qui suit.

``` C
int T[5] = {3, -6, 14, 8, 24};
int *p;

p = T;

printf("%d\n", sizeof(T[0]) );
printf("%d\n", sizeof(double));
```

``` C
printf("%d", sizeof(T[0]) );
```
- Cette instruction va nous fournir l'espace mémoire de T\[0] ou la taille réservé dans la mémoire pour la case T\[0], pour les nombres entiers chaque case à pour valeur 4 octets.

``` C
printf("%d", sizeof(double) );
```
- Cette instruction va nous fournir l'espace mémoire des variables de type double ou la taille réservé dans la mémoire pour la case des variable de types double, pour les variables de type double chaque case à pour valeur 8 octets.


#### Arithmétique des pointeurs - Incrémentation

``` C
int T[5] = {3, -6, 14, 8, 24};
int *p;

p = T;

p++;
printf("%d\n", *p);
printf("%d\n", *(p++) );
p--;
printf("%d\n", *p);
```

``` C
p++;   <=>   &T[0+1];
```
- Cette instruction fait en sorte que maintenant `p` pointe sur l'adresse mémoire de T\[0+1]            (`&T[0+1]`);

``` C
printf("%d", *p);
```
- Cette instruction affichera le contenu de `p` ou bien l'adresse mémoire sur laquelle pointe `p` qui est `&T[1]`, donc -6.

``` C
printf("%d", *(p++) );
```
- Cette instruction affichera le contenue de `p` ou bien l'adresse mémoire sur laquelle pointe `p`. Si l'on s'arrête a cette instruction `*p` (le contenue de `p`) reste -6. Cependant comme on utilise la post-incrémentation, cette incrémentation (`p` qui pointe sur l'adresse de T\[2] (`&T[2]`) aura lieu la ligne d'après. Donc si ensuite on souhaite afficher `*p` dans la ligne suivante `*p = &T[2]`, donc 14.

``` C
p--;
```
- Cette instruction fait en sorte que `p` pointe sur l'adresse mémoire de T\[2-1] (`&T[2-1]`).

``` C
printf("%d", *p);
```
- Cette instruction affiche le contenu de `p` qui pointe sur l'adresse mémoire de T\[1] (`&T[1]`), donc -6.


#### Arithmétique des pointeurs - addition

``` C
int T[5] = {3, -6, 14, 8, 24};
int *p;

p = T;

//p = p + 3;

printf("%p\n", p + 3);
printf("%d\n", *(p+3) );
```

``` C
p = p + 3;   <=>   &T[0+3];
```

``` C
p = p + 3   <=>   p = p + 3 * sizeof(int)
            <=>   p = 1000 + 3 * 4 = 1012
```
- Cette instruction va faire en sorte que le pointeur `p` pointe sur l'adresse mémoire de T\[0+3]      (`&T[0+3]`). Aussi pourquoi dans la vidéo `p` = 1012 ( 44:53 minutes ). Avant cette instruction `p` pointe sur `&T[0]` on suppose que `&T[0]` = 1000. Après cette instruction on fait l'opération suivante `p = p + 3 * sizof(int)` donc `p = 1000 + 3 * 4` = 1012. C'est pourquoi `&T[3]` = 1012.

``` C
printf("%p", p + 3);
```
- Cette instruction affichera la valeur vers laquelle pointe `p+3`. ici `p+3` pointe vers l'adresse de T\[0+3] (`&T[0+3`). donc sur la vidéo cela correspondrai à 1012, mais sur CLion la valeur change à chaque exécutions du programme mais à chaque fois on a une valeur hexadécimal.

``` C
printf("%d", *(p+3) );
```
- Cette instruction affichera le contenu de la valeur sur laquelle pointe `p+3`. `p+3` pointe sur l'adresse de T\[3] (`&T[3]`). Donc le contenu de `&T[3]` est 8.


#### Arithmétique des pointeurs - soustraction

On peut effectuer une soustraction entre un pointeur et une valeur ou une soustraction entre 2 pointeurs.
##### Soustraction entre un pointeur et une valeur : 

``` C
int T[5] = {3, -6, 14, 8, 24};
int *p;

p = T;

int *q;

q = &T[3];

//q = q - 2;

printf("%p\n", q - 2);
printf("%d\n", *(q-2) );
```

``` C
q - 2;   <=>   &T[3-2];
```

``` C
q - 2   <=>   q = q - 2 * sizeof(int)
		<=>   q = 1012 - 2 * 4 = 1004
```
- Cette instruction va faire en sorte que le pointeur `q` pointe sur l'adresse mémoire de T\[3-2]      (`&T[3-2]`). Aussi pourquoi dans la vidéo `q` = 1004 ( 47:01 minutes ). Avant cette instruction `q` pointe sur `&T[3]` on suppose que `&T[3]` = 1012. Après cette instruction on fait l'opération suivante `q = q - 2 * sizof(int)` donc `q = 1012 - 2 * 4` = 1004. C'est pourquoi `&T[1]` = 1004.

``` C
printf("%p", q - 2);
```
- Cette instruction affichera la valeur vers laquelle pointe `q-2`. ici `q-2` pointe vers l'adresse de     T\[3-2] (`&T[3-2]`). donc sur la vidéo cela correspondrai à 1004, mais sur CLion la valeur change à chaque exécutions du programme mais à chaque fois on a une valeur hexadécimal.

``` C
printf("%d", *(q-2) );
```
- Cette instruction affichera le contenu de la valeur sur laquelle pointe `q-2`. `q-2` pointe sur l'adresse de T\[1] (`&T[1]`). Donc le contenu de `&T[1]` est -6.

##### Soustraction entre 2 pointeurs

Quand on soustrait deux pointeurs entre eux cela signifie que l'on veut savoir la distance qu'il y entre les 2 pointeurs.

``` C
int T[5] = {3, -6, 14, 8, 24};
int *p;

p = T;

int *q;

q = &T[3];

printf("%d\n", q - p);
printf("%d\n", p - q);
```

``` C
q - p;   <=>   Distance entre p et q;
```
$$
q - p =\frac{q - p}{\text{sizeof(int)}} \quad \Longleftrightarrow \quad \frac{1012 - 1000}{4} \quad \Longleftrightarrow \quad 3
$$
- Cette instruction va faire en sorte que le pointeur `q` qui pointe sur l'adresse mémoire de T\[3]      (`&T[3]`) soit soustrait au pointeur `p` qui pointe sur l'adresse mémoire de T\[0] (`&T[0]`). Aussi pourquoi dans la vidéo `q - p` = 3 ( 48:01 minutes ). Avant cette instruction `q` pointe sur `&T[3]` et  `p` pointe sur `&T[0]`, on suppose que `&T[3]` = 1012 et que `&T[0]` = 1000. Après cette instruction on fait l'opération suivante `q - p =  q - p / sizof(int)` donc `q - p = 1012 - 1000 / 4` = 3. C'est pourquoi `&T[1]` = 1004.

``` C
printf("%d", q - p);
```
- Cette instruction affichera la distance entre `q` et `p`, `q` à pour indice 3 et `p` à pour indice 0 c'est pourquoi on fait 3 - 0, donc 3.

``` C
printf("%d", p - q);
```
- Cette instruction affichera la distance entre `p` et `q`,`p` à pour indice 0 et `q` à pour indice 3 c'est pourquoi on fait 0 - 3, donc -3.



#### Arithmétique des pointeurs - Comparaison

La comparaison de deux pointeurs qui pointent dans le même tableau est équivalent à la comparaison des indices correspondants.

``` C
int T[5] = {3, -6, 14, 8, 24};
int *p;

p = T;

int *q;

q = &T[3];

printf("%d", q == p);
printf("%d", q >= p);
```

``` C
printf("%d", q == p);
```
- Cette instruction à pour but de savoir si la valeur de l'adresse vers laquelle pointe `q` est égal à la valeur de l'adresse vers laquelle pointe `p`. Ici le programme nous affichera 0 car les 2 adresses non pas les même valeurs.

``` C
printf("%d", q >= p);
```
- Cette instruction à pour but de savoir si la valeur de l'adresse vers laquelle pointe `q` est supérieur ou égal à la valeur de l'adresse vers laquelle pointe `p`. Ici le programme nous affichera 1 car la valeur de l'adresse vers laquelle pointe `q` est supérieur à la valeur de l'adresse vers laquelle pointe `p`.


#### Exercice 3

Soit P un pointeur qui 'pointe' sur un tableau A :

``` C
int A[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
int *P;

P = A;
```

Quelles valeurs ou adresses fournissent ces expressions :

| Instruction                |   Résultat    |
| -------------------------- | :-----------: |
| ++P;                       | &23 OU &A\[1] |
| \*(P+3);                   |      56       |
| P - &A\[4];                |      -3       |
| --P;                       | &12 OU &A\[0] |
| A + 6;                     | &78 OU &A\[6] |
| \*( P + \*(P+8) - A\[7] ); |      23       |
| P == &A\[4];               |       0       |
| P >= A;                    |       1       |

##### 1. L'instruction `++P;`
``` C
++P;
```
**Opérateur d'incrémentation `++`** :

- L'opérateur `++` incrémente (ajoute 1 à) la valeur d'une variable. Il existe deux formes de cet opérateur :

    - **Post-incrémentation (`var++`)** : Incrémente la variable, mais retourne d'abord la valeur d'origine.
    
    - **Pré-incrémentation (`++var`)** : Incrémente la variable, puis retourne la nouvelle valeur.

C'est ici que se passe l'opération intéressante :

- **`++P`** :
    - Cette opération utilise la **pré-incrémentation**. Cela signifie que la valeur actuelle de `P` (c'est-à-dire `&A[0]`), devient `&A[1]` .
    - `P` pointe vers `&A[1]`, donc P a pour résultat `&23` ou `&A[1]`.

---

##### 2. L'instruction `*(P+3);`
``` C
*(P+3);
```
- **\*(P+3);** : `P` pointe vers l'adresse de A\[1] (`&A[1]`). On souhaite avoir le contenu de l'adresse vers laquelle pointe `P+3` qui est `&A[4]`.
- `P+3` pointe vers `&A[4]`, donc le contenu de l'adresse vers laquelle pointe `P+3` (`*(P+3)`) est 56.

---

##### 3. L'instruction `P - &A[4];`
``` C
P - &A[4];
```
- Ici c'est comme si on avait une soustraction entre 2 pointeur, en effet `P` pointe vers `&23` ou `&A[1]`. On a `&A[1] - &A[4]` donc on fait 1 - 4 et cela nous donne -3.

---

##### 4. L'instruction `--P;`
```c
--P;
```
- **--P** : `P` pointe vers l'adresse de A\[1] (`&A[1]`). Comme on utilise la pré-incrémentation on soustrait 1 à P dès cette ligne, donc maintenant P pointe ver l'adresse de A\[0] (`&A[0]`).
- P pointe vers `&A[0]`, donc il a pour résultat `&12` ou `&A[0]`.

---

##### 5. L'instruction `A+6;`
```c
A+6;
```
- **A+6** : `A` est un tableau et on sait qu'un tableau est un pointeur qui pointe vers sa première adresse/case, ici `A[0]`. `A+6` <=> `A[0+6]` <=> `A[6]`. 
- `A+6` a pour résultat `&78` ou `&A[6]`.

---

##### 6. L'instruction `*(P + *(P+8) - A[7]);`
```c
*(P + *(P+8) - A[7]);
```
- **`*(P + *(P+8) - A[7]);`** : On va commencer par `A[7]` qui à pour résultat 89 (`A[7] = 89`) donc maintenant on a `*(P + *(P+8) - 89);`. Ensuite on prend `*(P+8)`, ce qui signifie que l'on souhaite avoir le contenu de l'adresse vers laquelle pointe `P+8`. `P` pointe vers l'adresse de A\[0] (`&A[0]`). Donc `P+8` pointe vers l'adresse de A\[8] et le contenu de A\[8] est 90, donc         `*(P+8) = 90`. Maintenant on a `*(P + 90 - 89);`. `P` pointe sur l'adresse de A\[0] (`&A[0]` ou `&12`). Maintenant on a `*(&12 + 90 - 89);`  <=> `*(&12 + 1)` <=> `*(P+1)`. `*(P+1)` signifie que l'on veut connaître le contenu de l'adresse vers laquelle pointe `P+1`, `P` pointe vers `&A[0]`, donc `P+1` pointe vers `&A[1]` (`P+1 = &A[1]`). Donc `*(P+1)` = 23
- `*(P + *(P+8) - A[7]);` a pour résultat 23.

---

#### 7. L'instruction `P == &A[4];`
```c
P == &A[4];
```
- **P == &A\[4];** : `P` pointe vers l'adresse de A\[0] (`&A[0]`), donc on veut savoir si `&A[0]` == `&A[4]`. Pour savoir cela il faut comparer si les indices sont identiques. `&A[0]` a pour indice 0 et `&A[0]` a pour indice 4. `&A[0]` et `&A[4]` n'ont pas les mêmes indice donc la comparaison est fausses 
- `P == &A[4];` a pour résultat 0 car la comparaison est fausse.

---

#### 8. L'instruction `P >= A;`
```c
P >= A;
```
- **P >= &A\[4];** : `P` pointe vers l'adresse de A\[0] (`&A[0]`),`A` est un tableau et un tableau est un pointeur qui pointe vers sa première adresse qui est `&A[0]`. On veut savoir si `&A[0]` >= `&A[0]`. Pour savoir cela il faut comparer si les indices sont identiques. `&A[0]` a pour indice 0 et `&A[0]` a pour indice 0. `&A[0]` et `&A[0]` ont pas les mêmes indice donc la comparaison est vrai.
- `P >= &A[4];` a pour résultat 1 car la comparaison est vrai.


#### Exercice 4

À l'aide de pointeurs, écrivez un programme qui demande à l'utilisateur de remplir un tableau de 6 éléments, puis le programme calcule et affiche la somme des éléments.

``` C
#include <stdio.h>  

  
int main(){  
  
    int T[6], S;  
    int *P;  
  
    P = T;  
  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(P = T; P < T + 6; P++){  
  
        printf("T[%d] = ", P - T);  
        scanf("%d", P);  
  
    }  
  
    S = 0;  
    for(P = T; P < T + 6; P++)  
        S = S + *P;  
  
  
    printf("La somme des elements du tableau est : %d", S);  
  
  
    return 0;  
}
```
### Explication pour comprendre le code :

Imaginons que `T` soit un tableau de 6 éléments, comme ceci :

``` C
T = {10, 20, 30, 40, 50, 60}
```

Les éléments du tableau sont stockés en mémoire les uns à la suite des autres, et chaque élément a une adresse en mémoire.

### Adresses en Mémoire (Exemple Imaginaire)

Supposons que `T[0]` commence à l'adresse mémoire `1000`, chaque entier occupant 4 octets (typique pour un `int` en C). Les adresses de chaque élément seraient alors :

``` C
T[0] = 10   // Adresse 1000
T[1] = 20   // Adresse 1004
T[2] = 30   // Adresse 1008
T[3] = 40   // Adresse 1012
T[4] = 50   // Adresse 1016
T[5] = 60   // Adresse 1020
```

### Comprendre `P` et `T`

- **`P`** est un pointeur, ce qui signifie qu'il contient une adresse mémoire. Lorsque tu fais `P = T;`, tu fais pointer `P` vers l'adresse de `T[0]`, c'est-à-dire `1000`.

- **`T`** dans une expression pointe vers l'adresse du premier élément de ce tableau, c'est-à-dire l'adresse de `T[0]`.

### Décomposition de la Boucle

La boucle `for` se déroule comme suit :

``` C
for(P = T; P < T + 6; P++) {
    printf("T[%d] = ", P - T);
    scanf("%d", P);
}
```

1. **Initialisation (`P = T`)** :
   - `P` pointe d'abord vers `T[0]`, donc `P = 1000`.

2. **Condition de la Boucle (`P < T + 6`)** :
   - `T + 6` est l'adresse juste après le dernier élément (`T[5]`), donc `T + 6 = 1024`.
   - Tant que `P` est inférieur à `1024`, la boucle continue.

3. **Incrémentation (`P++`)** :
   - Après chaque tour de boucle, `P` est incrémenté pour pointer vers l'élément suivant du tableau.

### Comprendre `P - T`

L'expression `P - T` est utilisée pour calculer l'index actuel du tableau sur lequel `P` pointe.

- **`P`** est un pointeur qui contient l'adresse mémoire de l'élément actuel du tableau.
- **`T`** est l'adresse mémoire de `T[0]`, le début du tableau.

#### Exemple Étape par Étape

Imaginons le premier tour de boucle :

1. **`P = T`** :
   - `P` pointe vers `T[0]`, donc `P = 1000`.

2. **`P - T`** :
   - Cela calcule la différence entre l'adresse actuelle de `P` (qui est `1000`) et l'adresse de `T[0]` (qui est également `1000`).
   - Donc, `P - T = 1000 - 1000 = 0`.
   - Le résultat est `0`, qui est l'index du tableau correspondant à `T[0]`.

3. **Deuxième Tour de Boucle** :

   - Après `P++`, `P` pointe maintenant vers `T[1]`, donc `P = 1004`.
   - **`P - T = 1004 - 1000 = 4 / 4 = 1`** (L'adresse actuelle moins l'adresse de `T[0]` donne `1`).
   - Le résultat est `1`, qui est l'index du tableau correspondant à `T[1]`.

4. **Troisième Tour de Boucle** :

   - Après `P++`, `P` pointe maintenant vers `T[2]`, donc `P = 1008`.
   - **`P - T = 1008 - 1000 = 8 / 4 = 2`**.
   - Le résultat est `2`, qui est l'index du tableau correspondant à `T[2]`.

### Conclusion

L'expression `P - T` calcule l'index du tableau auquel `P` pointe actuellement. C'est une manière de trouver la position actuelle de `P` dans le tableau `T` en se basant sur la différence entre l'adresse actuelle de `P` et l'adresse du début du tableau `T`.

Cela permet d'afficher les indices des éléments du tableau dynamiquement pendant que `P` parcourt le tableau, sans avoir besoin d'une variable supplémentaire pour suivre l'index.


#### Exercice 5

À l'aide de pointeurs, écrivez un programme qui demande à l'utilisateur de saisir 10 entiers qu'on stocke dans un tableau T. Ensuite, le programme détermine et affiche le minimum des éléments du tableau T.

``` C
#include <stdio.h>  
  
  
  
int main(){  
  
    int T[10], i, min;  
    int *p;  
  
    p = T;  
  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i);  
        scanf("%d", (T+i));  
  
    }  
  
    //min = T[0];  
    //p = T;    //min = *p;    min = *T;  
  
    for(p = T + 1; p < T + 10; p++){  
  
        if(min > *p)  
            min = *p;  
  
    }  
  
    printf("Le min du tableau est : %d", min);  
  
  
    return 0;  
}
```