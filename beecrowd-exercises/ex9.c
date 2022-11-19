#include <stdio.h>
 
int main() {
    
    char nome[10];
    double salario,total,vendas,comissao;

    scanf("%s", nome);
	scanf("%lf", &salario);
	scanf("%lf", &vendas);

    comissao = vendas * 0.15;
    total = salario + comissao;
    
   printf("TOTAL = R$ %.2f\n",total);

    return 0;
}