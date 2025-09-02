#include <stdio.h>
#include <stdlib.h>
#define N 50

/*
Écrivez un programme en C qui va permettre d'afficher 
vos informations personnelles : nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.
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
Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin
*/
void challenge2 () {
	float temp=0;
	printf("donner votre temperature en celicius : ");
	scanf("%f",&temp);
	printf("Votre temperature en kelvin est : %.2f", (temp+ 273.15));
}

/*
Écrivez un programme qui demande la distance en kilomètres et la transforme en yards.
*/

void challenge3 () 


