#include <stdio.h>
#include <stdlib.h>
#include "example.c"
int main( void ) {
int result = power( 2, 3 );
printf( "2³ == %d\n", result );
result = fact( 6 );
printf( "6! == %d\n", result );
  
printf("\tEXERCICE 1: programme en c qui affiche bonjour \n");
salutationbonjour();

printf("\tEXERCICE 2: Programme en C qui inverse le sens d'ecriture d'un nombre\n");
int nombre;
printf("entrer un entier a trois chiffres:");
scanf("%d", &nombre);
int inver=inv(nombre);
printf("l'inverse de %d est %d\n",nombre, inver);

printf("\tEXERCICE 3: Produit de deux reels\n");
printf("entrer deux reels: \n");
float a,b;
scanf("%f%f", &a, &b);
float p=produit(a,b);
printf(" Le produit est %.3f\n", p);

printf("\tEXERCICE 4: Parite d'un entier \n");
int n;
printf("entrer un entier pour connaitre sa parite: ");
scanf("%d", &n);
parite(n);

printf("\tEXERCICE 5: Comparaison de deux entiers\n");
int c,d;
printf("entrer deux entiers : ");
scanf("%d%d", &c, &d);
comparaison(c,d);

printf("\tEXERCICE 6: Ordre croissant\n");
int x,y,z;
printf("entrer trois entiers :");
scanf("%d%d%d", &x,&y,&z);
croissant(x,y,z);
  
printf("\n\tEXERCICE 16: Programme qui permute le contenu de deux caracteres\n");
char e='e', f='f';
permutation(&e, &f);
printf("e=%c, f=%c\n", e,f);
return EXIT_SUCCESS;
}
