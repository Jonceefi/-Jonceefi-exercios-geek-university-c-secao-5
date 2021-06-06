#include<stdio.h>
#include<math.h>

float n,e=0,i=1;
float fac(float valor);
int main()
{
	printf("Digite o numero");
	fflush(stdout);
	scanf("%f",&n);
	
	for(i = 1; i < n+1; i++)
	{
		
		e += 1/fac(i);
	}
	printf("%f",e);
	return 0;
}

float fac(float valor)
{
	for(i = 1; n > 1; n--)
	{
		i = i*n;
	}
	return i;
}
