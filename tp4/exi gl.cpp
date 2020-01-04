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
	  	for(j=0;j<colonnes;j++)
	  	{
	  	  printf( " %D%D",matrice[i][j]);
		}
		printf("/n");
	  }
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
	main()
	{
		int t[5]={10,12,90,5,100};
		int M[2][2]={{1,2},{3,4}};
		affiche_vectur(t,5);
		affiche_matrice(M, 2, 2);
		return 0;
	}
