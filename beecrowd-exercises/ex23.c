#include <stdio.h>

int main()
{
    int A,B,C,D;

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);


    if (A % 2 != 0)
    {
        printf("Valores nao aceitos\n");
    }
    
    else if (B > C && D > A)
    {
        printf("Valores aceitos\n");
    }
    else if ((C + D > A + B) > 0)
    {
        printf("Valores aceitos\n");
    }
    else 
    printf("Valores nao aceitos\n");

    return 0;
}