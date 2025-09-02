#include <stdio.h>
#include <stdlib.h>
#define N 50

/*
�crivez un programme en C qui va permettre d'afficher 
vos informations personnelles : nom, pr�nom, �ge, sexe, et adresse email. Les donn�es sont saisies � partir du clavier.
*/

void Affichage_Information (){
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
void Conversion_de_la_temperature () {
	float temp=0;
	printf("donner votre temperature en celicius : ");
	scanf("%f",&temp);
	printf("Votre temperature en kelvin est : %.2f", (temp+ 273.15));
}

/*
�crivez un programme qui demande la distance en kilom�tres et la transforme en yards.
*/

void Conversion_de_la_distance () {
	float temp =0;
	printf("donner votre distance en kilometre : ");
	scanf("%f",&temp);
	printf("Votre distance en yard est : %.2f", (temp * 1093.61));
}

/*
�crivez un programme qui demande la vitesse en kilom�tres par heure (km/h) et la transforme en m�tres par seconde (m/s). 
*/

void Conversion_de_la_vitesse () {
	float temp =0;
	printf("donner votre vitesse en kilometre par heure : ");
	scanf("%f",&temp);
	printf("Votre vitesse en m par sec est : %.2f", (temp * 0.27778));
}

/*
�crivez un programme qui demande la temp�rature en Celsius et affiche l'�tat de l'eau � cette temp�rature (solide, liquide, gaz)
*/

void Temperature () {
	float temp =0;
	printf("donner votre vitesse en kilometre par heure : ");
	scanf("%f",&temp);
	if (temp <0){
		printf("Solide\n");
	}
	else if (temp >=0 && temp <100){
		printf("Liquide\n");
	}
	else{
		printf("Gaz\n");
	}
}

/*
Deux nombres r�els, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec pr�cision d�cimale.
*/

void Calcul_et_affichage_des_resultats(){
	float a,b ;
	printf("donner le nombre a : ");
	scanf("%f",&a);
	printf("donner le nombre b : ");
	scanf("%f",&b);
	printf("a + b = %.2f \t a - b = %.2f \t a * b = %.2f \t a / b = %.2f" , (a+b) , (a-b) , (a*b) , (a/b) );
}


