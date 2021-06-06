#include <stdio.h>

int main(int argc, char** argv)
{
	int l=1,n=6,tf=0,aux = 1;
	while (l != n+1)
	{
		tf = 0;
		while(tf != l)
		{
			printf("%d ",aux);
			aux++;
			tf++;
		}
		printf("\n");
		l++;
	}
	return 0;
}