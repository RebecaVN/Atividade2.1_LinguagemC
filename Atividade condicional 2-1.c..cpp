
//1) Criar um algoritmo receba a m�dia de um aluno e mostre a situa��o do aluno: 
//a. Aprovado ? m�dia maior ou igual a 5; 
//b. Exame ? m�dia entre 3 e 5; 
//c. Reprovado ? m�dia menor do que 3; 


#include <stdio.h>

int main() {
    float media;
    
    printf("Digite a m�dia do aluno: ");
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

