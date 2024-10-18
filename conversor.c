#include <stdio.h>
#include <ctype.h>

int main(void) {
    char escolha;
    int subEscolha;
    double origem, destino;
    printf("Escolha qual conversao:\n");
    do {
        printf("a. Comprimento\n");
        printf("b. Temperatura\n");
        printf("c. Peso\n");
        printf("d. Volume\n");
        printf("e. Instrucao de Uso(Ainda em Processo...)\n");
        printf("f. Sair\n");
        scanf(" %c", &escolha);
        printf("\n");
        escolha = tolower(escolha);
        switch (escolha)
        {
        case 'a':
            printf("Escolha a unidade de origem:\n1. km\n2. metros\n");
            printf("Escolha a unidade de destino:\n1. milhas\n2. pes\n");
            scanf("%d", &subEscolha);
            printf("Insira o valor a ser convertido: ");
            scanf("%lf", &origem);
            if (subEscolha == 1) {
                destino = origem * 0.62;
                printf("Valor convertido: %.2lf\n", destino);
            }
            else {
                destino = origem * 3.28;
                printf("Valor convertido: %.2lf\n", destino);
            }
            break;
        case 'b':
            printf("Converter Celsius para:\n1. Fahrenheit\n2. Kelvin\n");
            scanf("%d", &subEscolha);
            printf("Insira o valor a ser convertido: ");
            scanf("%lf", &origem);
            if (subEscolha == 1) {
                destino = (origem * 9 / 5) + 32;
                printf("Valor convertido: %.2lf\n", destino);
            }
            else {
                destino = origem + 273.15;
                printf("Valor convertido: %.2lf\n", destino);
            }
            break;
        case 'c':
            printf("Escolha a unidade de origem:\n1. quilograma\n2. grama\n");
            printf("Escolha a unidade de destino:\n1. libras\n2. oncas\n");
            scanf("%d", &subEscolha);
            printf("Insira o valor a ser convertido: ");
            scanf("%lf", &origem);
            if (subEscolha == 1) {
                destino = origem * 2.20;
                printf("Valor convertido: %.2f\n", destino);
            }
            else {
                destino = origem * 0.03;
                printf("Valor convertido: %.2f\n", destino);
            }
            break;
        case 'd':
            printf("Escolha a unidade de origem:\n1. litros\n2. mililitros\n");
            printf("Escolha a unidade de destino:\n1. gal\n2. oz(onca liquida/ounces)\n");
            scanf("%d", &subEscolha);
            printf("Insira o valor a ser convertido: ");
            scanf("%lf", &origem);
            if (subEscolha == 1) {
                destino = origem * 0.26;
                printf("Valor convertido: %.2lf\n", destino);
            }
            else {
                destino = origem * 0.03;
                printf("Valor convertido: %.2lf\n", destino);
            }
            break;
        case 'f':
            return 0;
            break;
        default:
            printf("Escolha invalida!\n");
            break;
        }
    } while (escolha != 'f');
}
