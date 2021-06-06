#include <stdio.h>

int main(int argc, char** argv)
{
	float soma = 0;
	int n = 99;
	for (int div=1; div < n+1; div= div+2)
	{
		float sum = 1;
		for (float i=1; i < div+1; i++)
		{
			sum = sum + i;
		}
		float d = div/sum;
		soma = soma+d;
	} 
	printf("%f",soma);
	return 0;
}