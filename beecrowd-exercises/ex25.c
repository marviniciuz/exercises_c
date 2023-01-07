#include <stdio.h>
#include <math.h>

float main()
{
    double A,B,C;
    double R1,R2,delta;

    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);

    if (A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else{
        double delta = sqrt((B*B)-4*A*C);
        R1 = (-B + delta) / (2 * A);
        R2 = (-B - delta) / (2 * A);

        printf("R1 = %1.5f\n",R1);
        printf("R2 = %1.5f\n",R2);
    }
    
    return 0;
}

