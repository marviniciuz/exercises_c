#include <stdio.h>

int main()
{
    int lanche,qtd;
    float total;
    scanf("%d%d",&lanche,&qtd);

    if (lanche == 1)
    {
        total = 4.00 * qtd;
    }
    else if (lanche == 2)
    {
        total = 4.50 * qtd;
    }
    else if (lanche == 3)
    {
        total = 5.00 * qtd;
    }
    else if (lanche == 4)
    {
        total = 2.00 * qtd;  
    }
    else if (lanche == 5)
    {
        total = 1.50 * qtd;
    }

    printf("Total: R$ %.2f\n",total);
    
    return 0;
}