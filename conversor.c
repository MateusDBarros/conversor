#include <stdio.h>
#include <ctype.h>

int main(void)
{  
    char escolha;
    int subEscolha;
    float origem, destino;
    printf("Escolha qual conversao:\n");
    do {
        printf("a. Comprimento\n");
        printf("b. Temperatura\n");
        printf("c. Peso\n");
        printf("d. Volume\n");
        printf("e. Sair\n");
        scanf(" %c", escolha);
        printf("\n");
        escolha = tolower(escolha);
        switch (escolha)
        {
        case 'a':
            printf("Escolha a unidade de origem:\n1. km\n2. metros\n");
            printf("Escolha a unidade de destino:\n1. milhas\n2. pés\n");
            scanf("%d", &subEscolha);
            printf("Insira o valor a ser convertido: ");
            scanf("%d", &origem);
            if (subEscolha == 1){
                destino = origem * 0.62;
                printf("O valor convertido é %.2f", &destino);
            }
            else {
                destino = origem * 3.28;
                printf("O valor convertido é %.2f", &destino);
            }
            break;
        case 'b':
            
            break;
        case 'c':
            
            break;
        case 'd':
            
            break;
        case 'e':
            return 0;
            break;
        
        default:
            printf("Escolha invalida!\n");
            break;
        }

    }while (escolha != 'e');
}