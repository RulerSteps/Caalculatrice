#include <stdio.h>
#include <string.h>

int main Addition(int a, int b)
{
	int Resultat;
	Resultat = a + b;
	return Resultat;
}

int main Soustraction(int a, int b)
{
	int Resultat;
	Resultat = a -b;
	return Resultat;
}

int main(void)
{
	int Operation[256];
	int add[256] = "Additon";
	int a,b,Somme,Difference;

	printf("choissiez l'operation que vous voulez faire : Addition ou Soustraction\n");
	scanf("%s", Operation);

	printf("Entrez La valeur du premier nombre : ");
	scanf("%d", &a);

	printf("Entrez La valeur du deuxieme nombre : ");
	scanf("%d", &b);

	if (strcmp(Operation, add) == 0)
	{
		Somme = Addition(a,b);
		printf("Le resultat de l'addition est : %d ", Somme);
	}
	else
	{
		Difference = Soustraction(a,b);
		printf("Le resultat de la soustaction est : %d ", Difference);
	}
}

