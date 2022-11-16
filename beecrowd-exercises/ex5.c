#include <stdio.h>
 
int main() {
    
    double A,B,MEDIA;

    scanf("%lf", &A);
    scanf("%lf", &B);

    MEDIA = ((A*3.5 + B*7.5))/(3.5+7.5) ; // MEDIA = ((A*3.5) + (B*7.5))/(3.5+7.5) ou  MEDIA = ((A*3.5 + B*7.5))/11
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}