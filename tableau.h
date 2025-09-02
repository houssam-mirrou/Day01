#include <stdio.h>
#include <stdlib.h>


void Initialisation_et_Affichage() {
	int tab[6]= {0,1,2,3,4,5};
	int i=0;
	for(i=0 ; i<6;i++){
		printf("tab [%d] = %d \n",i,tab[i]);
	}
}
