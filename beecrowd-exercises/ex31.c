#include <stdio.h>

int main()
{
    float nota1,nota2,nota3,nota4;
    float media,exame,total;
    
    scanf("%f%f%f%f",&nota1,&nota2,&nota3,&nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Media: %.1f\n",media);

    if (media >= 5.0 && media <= 6.9){ 
            printf("Aluno em exame.\n");
            scanf("%f",&exame);
            total = (exame + media)/2;       
    }

    if (media >= 5.0 && media <= 6.9){
            printf("Nota do exame: %.1f\n",exame);
    
        if (total >= 5.0){   
            printf("aluno aprovado\n"); 
            printf("Media: %.1f\n",total);    
    }else{
            printf("Aluno reprovado\n");
            printf("Media: %.1f\n",total);      
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