#include <stdio.h>
#include <stdlib.h>
#define N 50

/*
�crivez un programme en C qui va permettre d'afficher 
vos informations personnelles : nom, pr�nom, �ge, sexe, et adresse email. Les donn�es sont saisies � partir du clavier.
*/

void challenge1 (){
	char nom[N];
	char prenom[N];
	int age ;
	char adress[N];
	printf("Donner votre nom : ");
	scanf("%s",nom);
	printf("Donner votre prenom : ");
	scanf("%s",prenom);
	printf("Donner votre age : ");
	scanf("%d",&age);
	printf("donner votre adress  : ");
	scanf("%s",adress);
	printf("votre nom est : %s\nvotre prenom est : %s\nvotre age est : %d \nvotre adress est : %s",nom,prenom,age,adress);

}

/*
�crivez un programme qui demande la temp�rature en Celsius et la transforme en Kelvin
*/
void challenge2 () {
	float temp=0;
	printf("donner votre temperature en celicius : ");
	scanf("%f",&temp);
	printf("Votre temperature en kelvin est : %.2f", (temp+ 273.15));
}

/*
�crivez un programme qui demande la distance en kilom�tres et la transforme en yards.
*/

void challenge3 () 


