
//1) Criar um algoritmo receba a média de um aluno e mostre a situação do aluno: 
//a. Aprovado ? média maior ou igual a 5; 
//b. Exame ? média entre 3 e 5; 
//c. Reprovado ? média menor do que 3; 


#include <stdio.h>

int main() {
    float media;
    
    printf("Digite a média do aluno: ");
    scanf("%f", &media);
    
    if(media >= 5) {
        printf("Aluno aprovado.\n");
    }
    else if(media >= 3 && media < 5) {
        printf("Aluno em exame.\n");
    }
    else {
        printf("Aluno reprovado.\n");
    }
    
    return 0;
}

