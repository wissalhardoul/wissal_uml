#include<stdio.h>
#include<conio.h>
#include<malloc.h>
	void affiche_vectur(int *vecteur, int dimension )
	{
		int i;
		for(i=0;i<dimension;i++)
		{
		 printf(" %D" ,vecteur[i]);
	    }
	    	printf("/n");
	}
	void affiche_matrice(int **matrice, int lignes, int colonnes)
	{
	  int i,j;
	  	for(i=0;i<lignes;i++)
	  {
	  	affiche_vectur(matrice[i],colonnes);
	  }
	 /* for(i=0;i<lignes;i++)
	  {
	  	for(j=0;j<colonnes;j++)
	  	{
	  	  printf( " %D%D",matrice[i][j]);
		}
		printf("/n");
	  }*/
	}
		int * alloue_vecteur(int dimension , int val)
	{
		int i;
		int *vecteur=malloc( dimension*sizeof(int));
		for(i=0;i<dimension;i++)
		{ 
		 vecteur[i]=val;
		}
		return vecteur;
	}
		int **alloue_matrice(int ligne, int colon , int val)
	{
	 int i,j;
	 int **matrice=malloc(ligne*sizeof(int*))	;
	 for(i=0;i<ligne;i++)
	 {
	 	matrice[i]=malloc(colon*sizeof(int));
	for(i=0;i<ligne;i++)
	 {
	 	for(j=0;j<colon;j++)
	 	{
	 		matrice[i][j]=val;
		 }
	 }
    } 
	 return matrice;
	}
	int **alloue_matrice_zero(int ligne, int colon )
	{
	 int i;
	 int **matrice=calloc(ligne,sizeof(int*))	;
	 for(i=0;i<ligne;i++)
	 {
	 	matrice[i]=calloc(colon,sizeof(int));
     } 
	 return matrice;
	}
	int **genere_matrice_identite(int dimension)
	{
		int i;
		int **identite=alloue_matrice_zero(dimension,dimension);
		for(i=0;i<dimension;i++)
		{
			identite[i][i]=1;
		}
			affiche_matrice(identite, dimension,dimension);
			return identite;
	}
	main()
	{
		int m;
		int t;
		alloue_vecteur(4 ,t );
		alloue_matrice(2, 2 ,m);
	//	int t[5]={10,12,90,5,100};
		//int M[2][2]={{1,2},{3,4}};
		affiche_vectur(t,5);
		affiche_matrice(m, 2, 2);
		return 0;
	}
