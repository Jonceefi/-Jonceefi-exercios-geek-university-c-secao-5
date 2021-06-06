#include <stdio.h>

int main(int argc, char** argv)
{
	int n,aux,f,i;
	printf("Digite um numero: \n");
	scanf("%d", &n);
	aux = 1;
	i =1;
	printf("0 1 1 ");
	do
	{ 
		f = i+aux;
		aux= i;
		i = f;
		
		printf("%d ",f);	
	}while(i < n+1);
		
	return 0;
}