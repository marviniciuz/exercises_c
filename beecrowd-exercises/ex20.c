#include <stdio.h>
#include <time.h>


// Segundas para horas divide por 3600
// segundos para minuto divide por 60
//1019

int main()
{   
    int H,M,S,N,R;


    scanf("%d",&N);
    
    H = (N/3600); //divide 556 por 3600
    R = N%3600; //pega o valor de

    M = R/60;
    S = R%60;   

    printf("%d:%d:%d\n",H,M,S);

}