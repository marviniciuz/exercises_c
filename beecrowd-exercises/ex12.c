#include<stdio.h>
 
int main(){
    float A, B, C,tri,ci,tra,qua,re;

    //pi = 3.14159; pode ser declarodo o pi, mas sem declarar funciona 
    scanf("%f %f %f", &A, &B, &C);

    tri = (A * C)/2;
    ci = 3.14159 * (C * C);
    tra = ((A+B) * C)/2;
    qua = B * B;
    re = A * B;
    
    printf("TRIANGULO: %.3f\n", tri);
    printf("CIRCULO: %.3f\n", ci);
    printf("TRAPEZIO: %.3f\n", tra);
    printf("QUADRADO: %.3f\n", qua);
    printf("RETANGULO: %.3f\n", re);

    return 0;
}