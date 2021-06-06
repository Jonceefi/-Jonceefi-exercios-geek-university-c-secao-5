#include<stdio.h>
#include<math.h>
float valor_harmonico(int n){
    float soma = 0;
    int i;
    for (i = 1; i < n+1; ++i) {
        soma = soma + 1/(float)i; 
    }
 
    return soma;
}
 
 
int main(int argc, char *argv[])
{   
    float soma,n;  
 
    printf("valor n: ");
    scanf("%f",&n);
    soma = valor_harmonico(n);
    printf("%.2f valor soma \n",soma);
    return 0;
}