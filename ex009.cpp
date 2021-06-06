#include <stdio.h>

int main()
{
	
	int i,n;
	printf("Digite um número");
	fflush(stdout);
	scanf("%d", &n);
	
	while(n != 0 )
	{
		if (n%2 != 0)
		{
			printf("%d\n",n);
		}
		n--;
	}
}