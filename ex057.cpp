#include<stdio.h>
 
 int main(int argc, char** argv)
 {
	int i,n1,n2,n;
	n1 = 5;
	n2 = 15 ;
	n = 0;
	for(i=n1; i < n2; i++)
	{
		if(i%2>0||i%3>0||i%5>0||i%7>0)
			n += 1; 
			printf("%d ",n);	 	
	}
	printf("Tem se %d",n);	 
	 return 0;
 }