
## Structure séquentielle

Un programme qui suit une structure séquentielle est un programme dont toutes les instructions sont exécutées l'une après l'autre de façon à ce que l'ordre des instrcutions est respectée.

Exemple : Les programmes des vidéos précédentes.




## Structure conditionnelles

La structure conditionnelle est une structure dont les instructions sont exécutées selon le réponses des conditions.

#### Syntaxe

```C
if(Condition)
	Instruction;

//OU

if(Condition)
{
	Instruction1;
	Instruction2;
	...
}
```



#### Structure conditionnelles - Exercice 1

Ecrire un programme qui permet de calculer le maximum de deux nombres réels saisies par l'utilisateur.


#### 2 - Structure conditionnelles alternative (deux choix)

##### Syntaxe

```C
if(Condition)
	Instruction1;
else
	Instruction2

//OU

if(Condition)
{
	Instruction1;
	...
}
else
{
	Instruction2;
	...
}
```

#### Structure conditionnelles - Exercice 2

Ecrire un programme qui permet de demander un nombre entier à l'utilisateur, et l'informer ensuite si ce nombre est positif ou négatif.



#### 3 - Structure conditionnelles imbriquée (multiple choix)

##### Syntaxe

```C
if(Condition1){
	Instructions;
}	
else if(Condition2){
	Instructions;
}
else if(Condition3){
	...
}
else {
	Instructions;
}
```

#### Structure conditionnelles - Exercice 3

Ecrire un programme qui permet de lire la valeur de la température de l'eau et d'afficher son état :
- GLACE Si la température est inférieur à 0.
- LIQUIDE Si la température est strictement supérieur à 0 et strictement inférieur à 100
- VAPEUR Si la température est supérieur à 100.


#### 4 - Structure à choix multiples (switch)

Lorsque l'imbrication des alternatives devient trop importantes l'utilisation de la structure à  choix multiple devient nécessaire.

##### Syntaxe

```C
switch(Expression){
	case valeur1: Instruction1;
				  break;
	case valeur2: Instruction2;
				  break;
	... ...     : ...
	case valeurN: InstructionN;
				  break;
	default: AutreInstruction;
			 break;
}

```

#### Structure conditionnelles - Exercice 4

Ecrire un programme qui permet de demander à l'utilisateur de saisir un entier entre 1 et 7 au clavier, et afficher le nom du jour correspondant.