# include<stdio.h>

void menu(){
    printf("------MENU------\n");
    printf("1 - MEDIA DO ALUNO\n");
    printf("2 - PRESENCA DO ALUNO\n");
    printf("Digite a opcao desejada: ");
}

float media_aritmetica (float nota_1, float nota_2){
    return (nota_1 + nota_2)/2;
}

int main(){
    int opcao, presenca;
    float nota_1, nota_2, media;

    menu();
    scanf("%d", &opcao);
    switch(opcao){
        case 1: 
        printf("\n ---MEDIA DO ALUNO---\n");
        printf("Digite sua primeira nota: ");
        scanf("%f", &nota_1);
        printf("Digite sua segunda nota: ");
        scanf("%f", &nota_2);
        media = media_aritmetica (nota_1, nota_2); // substituir essa equação
        printf("A media final do aluno: %.2f", media);
        break;

        case 2: 
        printf("\n ---PRESENCA ALUNO---\n");
        printf("Digite a presença do aluno (0-100): ");
        scanf("%d", &presenca);
        if(presenca > 74 && presenca < 101 ){
            printf("Aluno Aprovado com %d%%", presenca);
        }else if(presenca > 100 || presenca < 0 ){
            printf("Presenca invalida");
        }else{
            printf("Aluno reprovado!");
        }
        break;

        default: 
        printf("Opcao invalida!");
    }
    
     return 0;
}