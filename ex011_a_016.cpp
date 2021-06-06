#include <stdio.h>

int main()
{
	int i,n,aux;
	i = 0;
	printf("Digite o numero:");
	fflush(stdout);
	scanf("%d", &n);
	printf("CONTADOR CRESCENTE: \n");
	while (i != n+1)
	{
		printf("%d ",i);
		i++;
	}
	aux = n;
	printf("\n\n");
	printf("CONTADOR DECRESCENTE: \n");
	while( aux != -1) 
	{
		printf("%d ", aux);
		aux--;
	}
	printf("\n\n");
	i = 0;
	printf("PARES CRESCENTE: \n");
	while(i != n)
	{
		if (i%2 == 0)
		{
			printf("%d ", i);
		}
		i ++;
	}
	printf("\n\n");
	i = 0;
	printf("IMPARES CRECENTE: \n");
	while(i != n+1)
	{-
		if (i%2 != 0)
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n\n");
}