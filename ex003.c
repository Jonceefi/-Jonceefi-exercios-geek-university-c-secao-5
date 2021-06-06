#include <stdio.h>

int main()
{
	int i = 0, i1 = 0, i2 = 0;
	printf("For");
	for (i = 1; i <= 10; i++)
	{
		printf("%d", i);

	}
	printf("\nWhile");
	while( i1 != 10 )
	{
		i1 = i1 + 1;
		printf("%d", i1);

	}
	printf("\nDo while");
	do
	{
		i2 = i2+1;
		printf("%d", i2);
	}while ( i2 != 0);
	return 0;
}
