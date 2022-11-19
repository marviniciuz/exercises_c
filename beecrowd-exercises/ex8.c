#include <stdio.h>
 
int main() {
    
    int num,horas;
    float salario,x;

    scanf("%d %d %f", &num , &horas , &salario);
    
    x = salario * horas;  
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n",x);

    return 0;
}