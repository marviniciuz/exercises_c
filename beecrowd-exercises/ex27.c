#include <stdio.h>

int main()
{
    float num;

    scanf("%f",&num);

  if (num <= 25)
  {
    printf("intervalos ([0,25]\n");
  }
  else if (num <= 50 )
  {
    printf("intervalos ([25,50]\n");
  }
  else if (num <= 75)
  {
    printf("intervalos ([50,75]\n");
  }
 else if (num <= 75)
  {
    printf("intervalos ([50,75]\n");
  }
  else if (num <= 100)
  {
    printf("intervalos ([75,100]\n");
  }
  else if(num <){
    printf("Fora de intervalo\n");
  }

    return 0;
}