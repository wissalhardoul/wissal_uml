#include <iostream>
int main(int argc, char** argv) 
{
	void affiche_vectur(int *vecteur, int dimension )
	{
		int i;
		for(i=0;i<dimension;i++)
		{
		 ptintf("lelement %d",vecteur[i]);
	    }
	}
	void affiche_matrice(int **matrice, int lignes, int colonnes)
	{
	  inti,j;
	  for(i=0;i<lignes;i++)
	  {
	  	for(j=0;j<colonnes;j++)
	  	{
	  	  printf(matrice[i][j])
		}
	  }
	}
	return 0;
}
