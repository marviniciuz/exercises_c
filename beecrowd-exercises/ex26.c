#include <stdio.h>
#include <math.h>

int main()
{
    double A,B,C;
    double delta;

    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);

    if(((B * B) - 4 * A * C) < 0 || A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else{
        delta = sqrt((B*B)-4*A*C);

        printf("R1 = %1.5f\n",(-B + delta) / (2 * A));
        printf("R2 = %1.5f\n",(-B - delta) / (2 * A));
    }
    
    return 0;
}