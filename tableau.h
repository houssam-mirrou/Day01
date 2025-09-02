#include <stdio.h>
#include <stdlib.h>
#define M 200

/*
�crivez un programme C qui initialise un tableau d'entiers avec des valeurs donn�es et affiche ces valeurs. 
Par exemple, vous pouvez initialiser un tableau avec les valeurs [1, 2, 3, 4, 5] et afficher chaque valeur sur une nouvelle ligne.
*/

void Initialisation_et_Affichage() {
	int tab[6]= {0,1,2,3,4,5};
	int i=0;
	for(i=0 ; i<6;i++){
		printf("tab [%d] = %d \n",i,tab[i]);
	}
}

/*
�crivez un programme C qui demande � l'utilisateur le nombre d'�l�ments d'un tableau, puis demande � l'utilisateur de saisir ces �l�ments.
Affichez ensuite les �l�ments du tableau.
*/

void Saisie_et_Affichage_des_Elements (){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	printf("*****************************\n");
	for(i=0 ; i<n;i++){
		printf("tab [%d] = %d \n",i,tab[i]);
	}
}

/*
�crivez un programme C qui calcule et affiche la somme des �l�ments d'un tableau d'entiers. 
Le programme doit demander le nombre d'�l�ments, puis les �l�ments du tableau, et afficher la somme totale.
*/

void Somme_des_Elements (){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	int sum=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
		sum+=tab[i];
	}
	printf("La somme est : %d",sum);
}

/*
�crivez un programme C qui trouve et affiche le plus grand �l�ment dans un tableau d'entiers. 
Le programme doit demander le nombre d'�l�ments et les �l�ments du tableau.
*/

void Trouver_le_Maximum() {
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	int max=-1;
	printf("tab [%d] = ",i);
	scanf("%d",&tab[0]);
	max=tab[0];
	for(i=1;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
		if(tab[i] > max){
			max=tab[i];
		}
	}
	printf("Le maximum du tableaux est : %d",max);
}

/*
�crivez un programme C qui trouve et affiche le plus petit �l�ment dans un tableau d'entiers. 
Le programme doit demander le nombre d'�l�ments et les �l�ments du tableau
*/

void Trouver_le_Minimum(){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	int min=0;
	printf("tab [%d] = ",i);
	scanf("%d",&tab[0]);
	min=tab[0];
	for(i=1;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
		if(tab[i] < min){
			min=tab[i];
		}
	}
	printf("Le minimum du tableaux est : %d",min);
	
}

/*
�crivez un programme C qui multiplie chaque �l�ment d'un tableau d'entiers par un facteur donn� et affiche le tableau r�sultant. 
Le programme doit demander le nombre d'�l�ments, les �l�ments du tableau, et le facteur de multiplication.
*/

void Multiplication_des_Elements() {
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	int fact= 0;
	printf("donner le facteur du tableaux : ");
	scanf("%d",&fact);
	for(i=0;i<n;i++){
		printf("tab [%d] * %d = %d\n",i,fact, (tab[i] *fact));
	}
}

/*
�crivez un programme C qui demande � l'utilisateur de saisir un tableau d'entiers,
puis affiche le tableau tri� en ordre croissant sans utiliser de fonction de tri pr�d�finie
*/

void Tableau_en_Ordre_Croissant(){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	int j=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(tab[i]>tab[j]){
				int temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
	printf("*****************tableau en ordre croissant***********\n");
	for(i=0;i<n;i++){
		printf("tab [%d] = %d \n",i,tab[i]);
	}
}

/*
�crivez un programme C qui copie les �l�ments d'un tableau d'entiers dans un autre tableau. 
Affichez les �l�ments du tableau original et du tableau copi� pour v�rifier que la copie est correcte.
*/

void copie_tableaux(int *copie){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	copie= malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		copie[i]=tab[i];
	}
	printf("l affichage du copie de tableaux : \n");
	for(i=0;i<n;i++){
		printf("copie [%d] = %d \n",i,copie[i]);
	}
}

/*
�crivez un programme C qui inverse les �l�ments d'un tableau d'entiers. 
Par exemple, si le tableau est [1, 2, 3, 4, 5], il doit devenir [5, 4, 3, 2, 1]. Affichez le tableau invers�.
*/

void Inversion_d_un_Tableau(){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	int left = 0;
	int right = n-1;
	while(left<right){
		int temp =tab[left];
		tab[left] = tab [right];
		tab[right] = temp;
		left++;
		right--;
	}
	printf("******************le tableaux apres l'inverssion******************\n");
	for(i = 0; i<n ;i++){
		printf("tab [%d] = %d \n",i,tab[i]);
	}
}

/*
�crivez un programme C qui recherche un �l�ment sp�cifique dans un tableau d'entiers en utilisant une recherche lin�aire. 
Le programme doit demander � l'utilisateur le nombre d'�l�ments, les �l�ments du tableau, et l'�l�ment � rechercher, 
puis afficher si l'�l�ment est pr�sent ou non.
*/

void Rechercher_un_Element(){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	int rech = 0;
	int val;
	printf("donner la valeur a rechercher : ");
	scanf("%d",&val);
	for(i = 0 ;i< n;i++){
		if(tab[i] == val){
			printf("La valeur existe dans %d du tableaux .\n",i);
			rech=1;
			break;
		}
	}
	if(rech==0){
		printf("La valeur n'existe pas dans le tableaux .\n");
	}
}





















