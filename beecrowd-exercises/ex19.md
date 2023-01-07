## Conversão de Tempo

Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato ```horas:minutos:segundos```.

Entrada
O arquivo de entrada contém um valor inteiro ```N```.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.



### Entrada: 
556

### Saida:
0:9:16

1) primeiro temos que saber quantas segundo tem uma hora, para podermos fazer o teste,sendo assim uma hora tem 3600 segundos
2) Agora dividimos o valor digitado pelo usuario por 3600
* ```valor digitado``` (representa segundos) / 3600;
3) Depois de saber o resultado temos que tirar outras provas, então pegamos o resto da divisão entre o valor digitado por 3600
4) agora precisamos saber quantos minutos, ai pegamos o resto da divisão anterior e dividimos por 60, para converter segundos em minutos 
5) Depois pegamos o então pegamos o resto da divisão entre o valor digitado por 3600 e dividimos por 60.

```c
#include <stdio.h>


//1019

int main()
{   
    int H,M,S,N,R;


    scanf("%d",&N);
    
    H = (N/3600); //divide 556 por 3600
    R = N%3600; //pega o valor de

    M = R/60;
    S = R%60;   

    printf("%d:%d:%d\n",H,M,S);

}
```