#include <stdio.h>

int main(int argc, char** argv)
{
	int i,ddb,dda,soma;
	int jubileulevadois,aux;
	int jubileu = 0;
	for(i = 1000; i < 9999; i++)
	{
		ddb = i%100;
		dda = i/100;
		soma = dda + ddb;
		jubileulevadois = soma*soma;
		if(jubileulevadois == i)
		{
			jubileu = jubileu+1;
		}
		aux+= jubileu; 
		i++;
	}
	printf("%d\n", jubileu);
	printf("%d\n", ddb);
	printf("%d\n", dda);
	printf("%d\n", soma);
	printf("%d\n", aux);
	return 0;
}