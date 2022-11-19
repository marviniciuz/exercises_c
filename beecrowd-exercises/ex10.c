#include <stdio.h>
 
int main() {
    
    int cod1,num1,cod2,num2;
    float valor1, valor2, valorf;
     

    scanf("%d %d %f", &cod1, &num1, &valor1);
	scanf("%d %d %f", &cod2, &num2, &valor2);
    
    valorf = valor1 * num1 + valor2 * num2; // ou valorf = (valor1 * num1) + (valor2 * num2);

    printf("VALOR A PAGAR: R$ %.2f\n", valorf);

    return 0;
}