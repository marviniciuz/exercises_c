#include <stdio.h>
#include <time.h>

int main()
{   
    int H,M,S,N;
    int hora;
    hora = 3600;

    scanf("%d",&N);
    
    H = (N/hora);

    M = (N-(hora*H))/60;

    S = (N-(hora*H)-(M*60));

    printf("%d:%d:%d\n",H,M,S);

}