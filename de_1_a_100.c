#include <stdio.h>
int main()
{
	int n,i;
	for (i = 0; i < 5; i++)
	{
		printf("Informe um número:");
		fflush(stdout);
		scanf("%d", &n);

		if(n%3 == 0)
		{
			printf("\n%d é multiplo de 3!",n);
		}
	}
	return 0;
}
