#include "example.h"
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
unsigned int result = 1;
while ( value > 1 ) {
result *= value;
value --;
}
return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
if ( pow == 0 ) return 1;
if ( pow == 1 ) return value;int accumulator = 1;
while( pow > 0 ) {
accumulator *= value;
pow--;
}
return accumulator;
}
//definition de la fonction bonjour (EXERCICE 1)
void salutationbonjour(){
	printf("bonjour\n");
}
//definition de la fonction inverse des nombres (EXERCICE 2)
int inverse(int x){
    int inverse, centaine, dizaine, unite ;
    if(x >= 100 && x<= 999){
        centaine = x/100;
        dizaine = (x/10)%10;
        unite = x%10;
        inverse = unite*100 + dizaine*10 + centaine;
    }
	return inverse;
}
//definition de la fonction produit (EXERCICE 3)
float produit( float a, float b){
	float p;
	p=a*b;
	return p;
}
//defition de la fonction parite d'un entier (EXERCICE 4)
void parite(int n){
	if(n%2==0)
	printf("le nombre est paire\n");
	else
	printf("le nombre est impaire\n");
}
// definition de la fonction de comparaison de deux nombres (EXERCICE 5)
void comparaison(int a, int b){
	if(a<b)
	printf("%d est inferieur a %d (%d<%d)\n",a,b,a,b);
	else if(a=b)
	printf("%d est egale a %d (%d=%d)\n",a,b,a,b);
	else
	printf("%d est superieur a %d (%d>%d)\n",a,b,a,b);
}
//definition de la fonction de classement de trois entiers par ordre croissant(EXERCICE 6)
void croissant(int x, int y, int z){
	if(x<y && y<z)
	printf("%d<%d<%d", x,y,z);
	else if(y<x && x<z)
	printf("%d<%d<%d", y,x,z);
	else if(z<x && x<y)
	printf("%d<%d<%d", z,x,y);
	else if(z<y && y<x)
	printf("%d<%d<%d", z,y,x);
	else if(x<y && z<y)
	printf("%d<%d<%d", x,z,y);
	else
	printf("%d<%d<%d", y,z,x);
}
//definition de la fonction qui inverse le contenu de deux caracteres en utlisant les pointeurs
void permutation(char *a, char *b){
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
//definition d'une fonction qui fais la somme de deux entiers (EXERCICE 17)
int Somme(int a, int b){
	int somme;
	somme=a+b;
	return somme;
