#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	float n,serie = 0,seriesoma= 0;

	printf("Digite o valor:");
	fflush(stdout);
	scanf("%f",&n);

	for (i = 1; i <n+1; i++)
	{
		serie = 1/(float)i;
		seriesoma = serie + seriesoma;

	}

	printf("%.2f",serie);

	return 0;
}
