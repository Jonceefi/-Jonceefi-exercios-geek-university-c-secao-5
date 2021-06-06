#include <stdio.h>

int main(int argc, char** argv)
{
	int i=0;
	int soma = 0;
	int solucao;
	while (i < 20)
	{
		i++;
		int aux = i*i;
		soma += aux;
	}
	printf("%d\n",soma);	
	int soma2 = 0;
	int aux = 0;
	int i2 = 0;
	while (i2 < 20)
	{
		i2++;
		soma2 += i2;
		aux = soma2*soma2;		
	}
	printf("%d\n",aux);
	solucao = (aux - soma);
	printf("%d", solucao);

	return 0;
}