#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );
//definition de la fonction bonjour (EXERCICE 1)
void salutationbonjour();
//definition de la fonction inverse des nombres (EXERCICE 2)
int inverse(int x);
//definition de la fonction produit de deux reels (EXERCICE 3)
float produit( float a, float b);
//defition de la fonction parite d'un entier (EXERCICE 4)
void parite(int n);
// definition de la fonction de comparaison de deux nombres entiers (EXERCICE 5)
void comparaison(int a, int b);
//definition de la fonction de classement de trois entiers par ordre croissant (EXERCICE 6)
void croissant(int x, int b, int z);
//definition de la fonction qui inverse le contenu de deux caracteres en utlisant les pointeurs
void permutation(char *a, char *b);
//definition d'une fonction qui fais la somme de deux entiers (EXERCICE 17)
int Somme(int a, int b);
#endif
