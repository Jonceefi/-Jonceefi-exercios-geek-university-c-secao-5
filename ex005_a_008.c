#include <stdio.h>

int main()
{
	int i,n,s,m, maior;
	s = 0;
	i = 0;
	maior = 0;
	printf("->CALCULADORA DE INTEIROS NÃO NEGATIVOS<-");
	while(i != 3)
	{
		printf("\nDigite um número:");
		fflush(stdout);
		scanf("%d",&n);
		while (n <= 0)
		{
			printf("\nNão abrange números negativos, Digite novamente:");
			fflush(stdout);
			scanf("%d",&n);
		}

		i++;
		s = n + s;
		if (n > maior)
		{
			maior = n;
		}
	}
	m = s/3;
	printf("A soma é:\%d\nA média é:%d",s,m);
	printf("\nO maior digitado foi: %d",maior);
	return 0;
}
