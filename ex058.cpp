#include <stdio.h>

int main(int argc, char** argv)
{
	int res,aux2,i;
	int n1 = 10;
	int n2 = 20;
	int aux3 = 0;
	while(n1 < n2)
	{
		i = 1;
		while(i < n1)
		{
			res = n1%i;
			if(res )
			aux2 = aux2 +1;
			i++;
		}
		if(aux2 > 3)
		{
			aux3 = aux3 + 1;
		}
		n1++;
	}
	printf("%d",aux3);
	return 0;
}	
	
	
/*	
	for (aux = n1; aux < n2; aux++)
	{
		aux2 = 0;
		res =0;
		for(i = 1; i < aux; i++)
		{
			res = aux%i;
			if(res > 0)
				aux2 = aux2 + 1;
		}
		if (aux2 > 2)
		{
			aux3 = aux + 1;
		}
	}
	printf("%d", aux3);	
	
	return 0;
}
*/
