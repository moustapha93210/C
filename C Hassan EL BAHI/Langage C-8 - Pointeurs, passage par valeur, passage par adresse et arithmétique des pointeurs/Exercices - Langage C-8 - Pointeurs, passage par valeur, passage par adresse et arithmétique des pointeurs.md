
#### Exercice 1 :

Donner les valeurs des variables après chaque instruction :

| Instruction          |  A  |  B  |  C  | P1  | P2  |
| :------------------- | :-: | :-: | :-: | :-: | :-: |
| Initialisation       |     |     |     |     |     |
| P1 = &A;             |     |     |     |     |     |
| P2 = &C;             |     |     |     |     |     |
| \*P1 = ( \*P2 )++;   |     |     |     |     |     |
| P1 = P2;             |     |     |     |     |     |
| P2 = &B;             |     |     |     |     |     |
| \*P1 -= \*P2;        |     |     |     |     |     |
| ++\*P2;              |     |     |     |     |     |
| \*P1 *= \*P2;        |     |     |     |     |     |
| A = ++\*P2 * \*P1;   |     |     |     |     |     |
| P1 = &A;             |     |     |     |     |     |
| \*P2 = \*P1 /= \*P2; |     |     |     |     |     |


#### Exercice 2

Écrire un programme contenant une fonction qui permet de déterminer le maximum des deux valeurs saisies par l'utilisateur (Penser à utiliser le passage par adresse).

``` C

```


#### Exercice 3

Soit P un pointeur qui 'pointe' sur un tableau A :

``` C
int A[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
int *P;

P = A;
```

Quelles valeurs ou adresses fournissent ces expressions :

| Instruction                | Résultat |
| -------------------------- | :------: |
| ++P;                       |  &A\[1]  |
| \*(P+3);                   |          |
| P - &A\[4];                |          |
| --P;                       |          |
| A + 6;                     |          |
| \*( P + \*(P+8) - A\[7] ); |          |
| P == &A\[4];               |          |
| P >= A;                    |          |


#### Exercice 4

À l'aide de pointeurs, écrivez un programme qui demande à l'utilisateur de remplir un tableau de 6 éléments, puis le programme calcule et affiche la somme des éléments.

``` C

```


#### Exercice 5

À l'aide de pointeurs, écrivez un programme qui demande à l'utilisateur de saisir 10 entiers qu'on stocke dans un tableau T. Ensuite, le programme détermine et affiche le minimum des éléments du tableau T.

``` C

```