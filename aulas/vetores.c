#include<stdio.h>

int main(){

    int qtd_notas;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &qtd_notas);
    float notas[qtd_notas]; // indice 0 a 1
    float soma;
    for(int i = 0; i < qtd_notas; i++){
        printf("Digite sua nota %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    printf("A media do aluno e: %.2f\n", soma/qtd_notas);
    
    //notas[0] = 10;
    //notas[1]  = 8;

    //float media = (notas[0] + notas[1] + notas[2])/3;

    //printf("A media do aluno e: %.2f", media);

    return 0;
}