#include<stdio.h>

int main(){
    int x;
    float y;
    double total;
    scanf("%d", &x);
    scanf("%f", &y);

    total = x/y;

    printf("%.3lf km/l\n", total);

    return 0;
}