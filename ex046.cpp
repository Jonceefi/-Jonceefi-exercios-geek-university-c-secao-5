#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int n,random; 
	random = rand() % 1001;
	
	printf("AKINATOR DO RANDOM\nDigite um numero de 1 a 1000:\n");
	scanf("%d",&n);
	
	do
	{
		if(n > random)
		{
			printf("\nO numero e menor: ");
			scanf("%d",&n);	  		  		
		}
		else if (n < random)
		{
			printf("\nO numero e maior: ");	  		  		
			scanf("%d",&n);
		}
	}while(n != random);
	printf("\nParabens!!! Voce acertou!\n");
	printf("O número pensado foi %d",random);
	return 0;
}