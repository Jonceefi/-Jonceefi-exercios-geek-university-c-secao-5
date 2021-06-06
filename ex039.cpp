#include <stdio.h>

int main(int argc, char** argv)
{
	float h, b, a; 
	printf(" = = ARÉA DO TRIANGULO = = ");
	printf("\nDigite o valor da base:\n");
	fflush(stdout);
	scanf("%f",&b);
	fflush(stdout);
		while (b <= 0)
		{
			printf("\n!!!VALOR INVÁLIDO DIGITE NOVAMENTE:!!!\n");
			fflush(stdout);
			scanf("%f",&b);
		}		  		
	printf("\nDigite o valor da altura:\n");
	scanf("%f",&h);
		while (h <= 0)
		{
			printf("\n!!!VALOR INVÁLIDO DIGITE NOVAMENTE:!!!\n");
			scanf("%f",&h);
		}
	a = b*h;
	a = a/2;
	printf("\nO valor da area e de: %.1f",a);	
	printf("\nO valor de b: %.1f",b);
	printf("\nO valor de h: %.1f",h);
	
	return 0;
}