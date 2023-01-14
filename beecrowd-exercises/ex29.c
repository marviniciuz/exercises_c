#include <stdio.h>

int main()
{
    float N1,N2,N3,N4;
    float media,exame,total;
    
    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);

    media = ((N1*2) + (N2*3) + (N3*4) + (N4*1)) / (2+3+4+1);

    if (media >= 5.0 && media <= 6.9){
            printf("Media: %.1f\n",media);
            printf("Aluno em exame.\n");
            scanf("%f",&exame);
            printf("Nota do exame: %.1f\n",exame);

            total = (exame + media)/2;       
    
    if (total >= 5.0){   
            printf("aluno aprovado\n"); 
            printf("Media final: %.1f\n",total);    
    }else{
            printf("Aluno reprovado\n");
            printf("Media final: %.1f\n",total);      
    }
    }
    
    else if(media >= 7.0){
            printf("Media: %.1f\n",media);
            printf("aluno aprovado\n");
    }

    else if (media < 5.0)
    {
            printf("Media: %.1f\n",media);
            printf("Aluno reprovado\n");
    }
    return 0;  
}