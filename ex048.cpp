#include <stdio.h>

int main(int argc, char** argv)
{
	int i,aux,f,soma;
	i = 1;
	aux = 1;
	do
	{
		f = aux + i;
		aux = i;
		i = f;
		if ( f%2 == 0 )
		{
			soma += f;
		}
	}while( soma < 4000000);
	printf("%d", soma);
	return 0;
}