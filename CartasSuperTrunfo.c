#include <stdio.h>

// Desafio Super Trunfo - Nível Mestre
// Implementando Comparações Avançadas com Atributos Múltiplos

int main(){
    // Área para definição das variáveis das cartas
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float superPoder1, superPoder2;

    // Variáveis para a lógica do jogo
    int opcao1, opcao2;
    float valor1_atb1, valor2_atb1; // atb= atibuto
    float valor1_atb2, valor2_atb2; // atb= atibuto
    float soma1, soma2;
    char nome_atb1[30], nome_atb2[30]; // atb= atibuto

    // CADASTRO DAS CARTAS (Mantido dos desafios anteriores)
    
    printf("===== CARTA 01 =====\n");
    printf("Digite o Nome do Estado: ");
    scanf("%s", estado1);    
    printf("Digite o Código: ");
    scanf("%s", codigo1);    
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", cidade1);    
    printf("Digite a População: ");
    scanf("%d", &populacao1);   
    printf("Digite a Área (Km2): ");
    scanf("%f", &area1);    
    printf("Digite o PIB: ");
    scanf("%f", &pib1);    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos1); 

    printf("===== CARTA 02 =====\n");
    printf("Digite o Nome do Estado: ");
    scanf("%s", estado2);    
    printf("Digite o Código: ");
    scanf("%s", codigo2);    
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", cidade2);    
    printf("Digite a População: ");
    scanf("%d", &populacao2);   
    printf("Digite a Área (Km2): ");
    scanf("%f", &area2);    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos2); 

    // Cálculos matemáticos
    densidade1 = (float) populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibpercapita1 + (1.0f / densidade1);
    
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibpercapita2 + (1.0f / densidade2);

    
    // Seleção de atributos
    printf("\n=== SELECIONE O PRIMEIRO ATRIBUTO ===\n");
    printf("1 - População\n");
    printf("2 - Área (km²)\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Mapeia a primeira escolha
    switch (opcao1) {
        case 1:
            sprintf(nome_atb1, "População");
            valor1_atb1 = (float)populacao1; valor2_atb1 = (float)populacao2;
            break;
        case 2:
            sprintf(nome_atb1, "Área (km²)");
            valor1_atb1 = area1; valor2_atb1 = area2;
            break;
        case 3:
            sprintf(nome_atb1, "PIB");
            valor1_atb1 = pib1; valor2_atb1 = pib2;
            break;
        case 4:
            sprintf(nome_atb1, "Pontos Turísticos");
            valor1_atb1 = (float)pontos1; valor2_atb1 = (float)pontos2;
            break;
        case 5:
            sprintf(nome_atb1, "Densidade Demográfica");
            valor1_atb1 = densidade1; valor2_atb1 = densidade2;
            break;
        default:
            printf("Erro: Opção inválida. Encerrando programa.\n");
            return 1;
    }


    // Seleção de atributos

    printf("\n=== SELECIONE O SEGUNDO ATRIBUTO ===\n");
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área (km²)\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turísticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao2);

    // Validação da escolha de atributos
    if (opcao1 == opcao2) {
        printf("Erro: Você não pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    // Mapeamento da segunda escolha

    switch (opcao2) {
        case 1:
            sprintf(nome_atb2, "População");
            valor1_atb2 = (float)populacao1; valor2_atb2 = (float)populacao2;
            break;
        case 2:
            sprintf(nome_atb2, "Área (km²)");
            valor1_atb2 = area1; valor2_atb2 = area2;
            break;
        case 3:
            sprintf(nome_atb2, "PIB");
            valor1_atb2 = pib1; valor2_atb2 = pib2;
            break;
        case 4:
            sprintf(nome_atb2, "Pontos Turísticos");
            valor1_atb2 = (float)pontos1; valor2_atb2 = (float)pontos2;
            break;
        case 5:
            sprintf(nome_atb2, "Densidade Demográfica");
            valor1_atb2 = densidade1; valor2_atb2 = densidade2;
            break;
        default:
            printf("Erro: Opção inválida. Encerrando programa.\n");
            return 1;
    }

    // processo da soma

    soma1 = (opcao1 == 5 ? (1.0f / valor1_atb1) : valor1_atb1) + (opcao2 == 5 ? (1.0f / valor1_atb2) : valor1_atb2);
    soma2 = (opcao1 == 5 ? (1.0f / valor2_atb1) : valor2_atb1) + (opcao2 == 5 ? (1.0f / valor2_atb2) : valor2_atb2);

    // exibição  

 
    printf("         Resultado do confronto          \n");
    printf("=========================================\n");
    printf("Cartas: %s (%s) vs %s (%s)\n\n", cidade1, estado1, cidade2, estado2);

    // Exibição dos atributos individualmente
    printf("Atributo 1: %s\n", nome_atb1);

    printf(" - %s: %.2f\n", cidade1, valor1_atb1);
    printf(" - %s: %.2f\n", cidade2, valor2_atb1);
    
    if (opcao1 == 5) {
        printf(" Vencedor do atributo 1: %s\n\n", (valor1_atb1 < valor2_atb1) ? cidade1 : (valor1_atb1 > valor2_atb1 ? cidade2 : "Empate"));
    } else {
        printf(" Vencedor do atributo 1: %s\n\n", (valor1_atb1 > valor2_atb1) ? cidade1 : (valor1_atb1 < valor2_atb1 ? cidade2 : "Empate"));
    }

    printf("Atributo 2: %s\n", nome_atb2);

    printf(" - %s: %.2f\n", cidade1, valor1_atb2);
    printf(" - %s: %.2f\n", cidade2, valor2_atb2);
    
    if (opcao2 == 5) {
        printf(" Vencedor do atributo 2: %s\n\n", (valor1_atb2 < valor2_atb2) ? cidade1 : (valor1_atb2 > valor2_atb2 ? cidade2 : "Empate"));
    } else {
        printf(" Vencedor do atributo 2: %s\n\n", (valor1_atb2 > valor2_atb2) ? cidade1 : (valor1_atb2 < valor2_atb2 ? cidade2 : "Empate"));
    }

    // Confronto Final
    printf("=========================================\n");
    printf("Soma dos pontos:\n");
    printf(" -- %s: %.2f\n", cidade1, soma1);
    printf(" -- %s: %.2f\n", cidade2, soma2);
    printf("=========================================\n");

    // Decisão final
    if (soma1 > soma2) {
        printf("Resultado final: %s venceu o combate!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Resultado final: %s venceu o combate!\n", cidade2);
    } else {
        printf("Resultado final: Empate!\n");
    }

    return 0;
}