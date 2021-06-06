#include <stdio.h>

int main()
{
	int i = 0;
	while(i != 100000)
	{
		printf("%d\n",i);
		i = i + 1000;
	}
	printf("100000\nFIM!");
	return 0;
}
