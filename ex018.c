#include<stdio.h>

int main()
{
	int i,n,n1,maior,aux;
	i = 0;
	maior = 0;
	aux = 0;

	printf("Digite quantas números ira digitar.\n");
	fflush(stdout);
	scanf("%d",&n);
	do
	{
		printf("\nDigite um número:\n");
		fflush(stdout);
		scanf("%d",&n1);
			if (n1 > maior)
			{
				maior = n1;
				aux = 0;
			}
			if( n1 == maior)
			{
				aux = aux +1;
			}
		i++;
	}while(i != n);
	printf("\nO numero maior eh: %d", maior);
	printf("\nO numero %d foi digitado %d vezes",maior,aux);
	return 0;
}
