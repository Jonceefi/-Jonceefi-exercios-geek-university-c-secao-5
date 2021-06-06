#include <stdio.h>

int main(int argc, char** argv)
{
	int i,c,soma = 0;
	printf("Digite um numero:\n");
	scanf("%d",&i);
	
	for (c = 0; c < i; c++)
	{
		if (c%2 != 0 || c%3 != 0 || c%5 != 0 || c%5 != 5 || c%7 != 0)
	 		soma+= c;	 		  		  		
	}
	
	if (i == 1|| i == 0)
	{
		printf("\nNao se enquadram na regra de numeros primos\n");
	}
	else if(i == 2|| i==3 || i == 5 || i ==7)
	{
		printf("\nNumero primo\n");
	}	
	else if (i%2 == 0 || i%3 == 0 || i%5 == 0 || i%5 == 5 || i%7 == 0)
	{
		printf("Numero nao primo\n");
	}
	else
	{
		printf("\nNumero primo\n");	
	}
	printf("%d",soma);
	
	
	return 0;
}