#include <stdio.h>
#include <string.h>
#include "header.h"


//-------------------------------------------------------------------------------------------------------------------------------------//

int main(void)
{
	char Operateurs[] = "+ - /  * ";
	char Operateur[2];
	char OperateurDiv[2] = "/";
	char OperateurAdd[2] = "+";
	char OperateurSous[2] = "-";
	char OperateurMul[2] = "*";
	float a,b,Somme,Difference, Produit, Quotient;
//-------------------------------------------------------------------------------------------------------------------------------------------------

	printf("Ecrivez Votre Operation (ex 1 + 2) : ");
	scanf("%f %s %f", &a,Operateur, &b);
	while ( strstr(Operateurs, Operateur) == NULL || strcmp(Operateur, OperateurDiv) == 0 && b == 0 )
	{
		printf("Veillez entrez un Vrai Operateur(+ ou - ou / ou *) ou n'essayez pas de diviser par 0 : ");
		scanf("%f %s %f", &a,Operateur, &b);
	}
	

	if (strcmp(Operateur, OperateurAdd) == 0)
	{	
		Somme = Addition(a,b);
		printf("Le resultat de l'addition est : %.2f ", Somme);
	}
	else if (strcmp(Operateur, OperateurSous) == 0)
	{
		Difference = Soustraction(a,b);
		printf("Le resultat de la soustraction est ; %.2f ", Difference);
	}
	else if (strcmp(Operateur, OperateurMul) == 0)
	{
		Produit = Multiplication(a,b);
		printf("Le resultat de la multiplication est : %.2f ", Produit);
	}
	else if (strcmp(Operateur, OperateurDiv) == 0)
	{
		Quotient = Division(a,b);
		printf("Le resultat de la division est : %.2f ", Quotient);
	}
	return 0;
}

