#include <stdio.h>

int main()
{
    double N;

    scanf("%.2f",&N);
    
    printf("%d\n",N);
    
    printf("%.2f nota(s) de R$ 100,00\n",N/100);
    (N = N % 100);
    printf("%.2f nota(s) de R$ 50,00\n",N/50);
    N = N % 50;
    printf("%.2f nota(s) de R$ 20,00\n",N/20);
    N = N % 20;
    printf("%.2f nota(s) de R$ 10,00\n",N/10);
    N = N % 10;
    printf("%.2f nota(s) de R$ 5,00\n",N/5);
    N = N % 5;
    printf("%.2f nota(s) de R$ 2,00\n",N/2);
    N = N % 2;
    printf("%.2f moeda(s) de R$ 1.00\n",N/1);
    N = N % 1;
    printf("%.2f moeda(s) de R$ 1.00\n",N/0,50);
    N = N % 0,50;
 
    return 0;
}