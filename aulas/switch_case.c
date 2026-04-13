# include<stdio.h>

int main(){
    int opcao;
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1: 
        printf("Selecinado a opcao 1");
        break;

        case 2: 
        printf("Selecionado a opcao 2");
        break;

        default: 
        printf("Opcao invalida!");
    }
    
     return 0;
}