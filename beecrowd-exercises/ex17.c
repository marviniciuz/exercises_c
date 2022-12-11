#include <stdio.h>

int main () {
    float veloc, tempo, litros;
    scanf("%f", &tempo);
    scanf("%f", &veloc);

    litros=(tempo*veloc)/12;
    //tempo multiplica por velocidade e dividie por 12 que o km 
    printf("%.3f\n", litros);
    return 0;
}