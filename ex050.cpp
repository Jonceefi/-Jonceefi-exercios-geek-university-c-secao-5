#include <stdio.h>

int main(int argc, char** argv)
{
	float c = 1.50;
	float z = 1.10;
	float altc, altz;
	int i = 1; 
	do
	{
		altc = 0.02;
		altz = 0.03;
		c += altc;
		z += altz;
		i++; 
	}while(z < c);
	printf("%.2f\n",c);
	printf("%.2f\n",z);
	printf("%.d\n",i);
	return 0;
}
