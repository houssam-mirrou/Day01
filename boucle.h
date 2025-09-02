#include <stdlib.h>
#include <stdio.h>

/*
	�crivez un programme C qui demande un nombre � l�utilisateur et affiche sa table de multiplication de 1 � 10. Par exemple, pour le nombre 4
*/

void table_multiplication(){
     int n=0;
     printf("donner un nombre : ");
     scanf("%d",&n);
     int i=0;
     for(i = 1 ;i<=10 ; i++) {
             printf("%d * %d = %d \n",n,i,n*i);        
     } 
     
}

/*
	�crivez un programme C qui calcule la factorielle d'un nombre entier positif n entr� par l�utilisateur. 
	La factorielle de n est le produit de tous les entiers positifs inf�rieurs ou �gaux � n
*/

int factoriel(int n) {
    int temp = 1;
    if (n==0){
       return 1;
    }
    int i;
    for(i = 1 ; i <=n;i++){
            temp*= i;
    }  
    return temp;
}

/*
	�crivez un programme C qui demande un nombre entier n � l�utilisateur et calcule la somme des n premiers nombres naturels.
*/

void somme_des_n_nombres() {
     int n=0;
     printf("donner un nombre : ");
     scanf("%d",&n);
     int sum = 0;
     int i;
     for(i=1; i<=n ;i++){
             sum+=i;        
     }
     printf("la somme est : %d",sum);
}

/*
	�crivez un programme C qui demande un nombre entier n et affiche les n premiers nombres impairs.
*/

void affichage_nombre_impairs(){
     int n=0;
     printf("donner un nombre : ");
     scanf("%d",&n);
     int k=1;
     while(n!=0){
                 printf("%d ",k);
                 n--;
                 k+=2;
     }  
}

/*
	�crivez un programme C qui calcule la puissance d'un nombre entier base �lev� � un exposant exposant.
	Utilisez une boucle pour effectuer le calcul.
*/

void calcule_puissance(){
     int base = 0;
     int exposant = 0;
     do{
        printf("donner la base : ",&base);
        scanf("%d",&base);
        printf("donner l exposant : ",&exposant);
        scanf("%d",&exposant);
     } while(base <0 || exposant <0);
     int resultat=base;
     int i;
     for(i = 0 ;i < exposant ;i++ ){
             resultat*=resultat;
     }
     printf("la resultat est : % d" ,resultat);
     
}

/*
	�crivez un programme C qui demande un nombre entier n et affiche les n premiers nombres pairs.
*/


void affichage_nombre_pair(){
     int n=0;
     printf("donner un nombre : ");
     scanf("%d",&n);
     int k=2;
     while(n!=0){
                 printf("%d ",k);
                 k+=2;
                 n--;            
     }
}

/*
	�crivez un programme C qui lit un entier � plusieurs chiffres et l'affiche en ordre inverse sans utiliser de tableaux. 
*/

void inversion(){
    int n=0;
    printf("donner un nombre : ");
    scanf("%d",&n);
    int res = 0;
	while(n>0){
		res = res*10 + n%10;
		n/=10;
	}
	printf("le resultat est : %d",res);
     
}

/*
	�crivez un programme C qui g�n�re les n premiers termes de la suite de Fibonacci, o� n est entr� par l�utilisateur. 
	La suite de Fibonacci est d�finie comme suit : F(0) = 0, F(1) = 1, et F(n) = F(n-1) + F(n-2).
*/

int fonction( int n ){
	if(n == 0){
		return 0;
	}
	if (n == 1){
		return 1;
	}
	return fonction(n-1) + fonction (n-2);
}

void suite_Fibonacci(){
	int n=0;
    printf("donner un nombre : ");
    scanf("%d",&n);
    printf("%d" , fonction(n));
}

/*
	�crivez un programme C qui demande � l�utilisateur un entier positif et compte le nombre de chiffres dans cet entier.
*/

void compteur_de_chiffres(){
	int n=0;
    printf("donner un nombre : ");
    scanf("%d",&n);
    int cpt = 0;
    if(n==0){
		cpt++;
	}
	else{
		while(n>0){
	    	cpt++;
	    	n/=10;
		}
	}
	printf("%d",cpt);
}

