#include <stdio.h>

int main()
{
    float num;

    scanf("%f",&num);
  
  if (num < 0 ){
  printf("numero invalido");
  }
  else if (num <= 25.0){
    printf("intervalos ([0,25]\n");
  }
  else if (num <= 50.0 ){
    printf("intervalos ([25,50]\n");
  }
  else if (num <= 75.0){
    printf("intervalos ([50,75]\n");
  }
  else if (num <= 100.0){
    printf("intervalos ([75,100]\n");
  }
   return 0;
  } 
  
  