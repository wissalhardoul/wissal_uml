# include<iostream>
using namespace std;
	void affiche_vectur(int *vecteur, int dimension )
	{
		int i;
		for(i=0;i<dimension;i++)
		{
		 cout<<vecteur[i]<<endl;
	    }
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
	  	  cout<<matrice[i][j]<<endl;
		}
		cout<<" "<<endl;
	  }*/
	}

		main()
	{
		int t[5]={10,12,90,5,100};
		int m[2][2]={{1,2},{3,4}};
		affiche_vectur(t,5);
		affiche_matrice(m,2,2);
		return 0;
	}

