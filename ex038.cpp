#include <stdio.h>

int main(int argc, char** argv)
{
	int soma = 1000;
	int a;
	for (a = 1;a <1000/3; a++)
	{
		int b;
		for (b = a + 1; b<1000/2;b++)
		{
			int c = soma - a - b;; 
			if(a*a + b*b == c*c)
				printf("A=%d B=%d C=%d",a,b,c);
		}	
	}

	return 0;
}

//#include <math.h>
//#include <stdio.h>

//int main()
//{
//	int sum = 1000;
//   int a;
//    for (a = 1; a <= sum/3; a++)
//    {
//        int b;
//        for (b = a + 1; b <= sum/2; b++)
//        {
//            int c = sum - a - b;
//            if ( a*a + b*b == c*c )
//               printf("a=%d, b=%d, c=%d\n",a,b,c);
//        }
//    }
//    return 0;
//}