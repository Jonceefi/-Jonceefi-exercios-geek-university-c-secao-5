#include <stdio.h>

int main(int argc, char** argv)
{
	float c,fc = 15;
	float j,fj = 5;
	float i,ac,aj;
	i = 1;
	do
	{
		ac = 1 * 0.02;
		fc += ac;
		aj = 5 * 0.05;
		fj += aj;
		i++;  
	}while(fj < fc);
	 printf("%.2f\n", fc);
	 printf("%.2f\n", fj);
	 printf("%.1f\n", i);
	return 0;
}