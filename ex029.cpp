#include <stdio.h>

int main()
{
	float soma = 0;
	for(int div=1;div <=5;div++)
	{	
		float fat = 1;
		for(float i = (2*div);i >0; i--)
		{
			fat*=i;
		}
		float d = div/ fat;
		soma += d;
	}
	printf("%.4f", soma);
	return 0;	   	
}