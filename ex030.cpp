#include <stdio.h>

int main()
{
	int n = 5;
	int i = 1;
	int soma = 0;
	int soma2 = 0;
	while (i != n+1)
	{	
		int aux = i;
		if (i%2 == 0 )
			i = i*(-1);
		soma = soma + i;
		i = aux;
		i++; 
	}
	i = 1;
	while (i != n+1)
	{
		int aux = i;
		if (i%2 > 0)
			soma2 = soma2 + i;
		i = aux;
		i++;
	}
	printf("%d\n",soma);
	printf("%d",soma2);
}