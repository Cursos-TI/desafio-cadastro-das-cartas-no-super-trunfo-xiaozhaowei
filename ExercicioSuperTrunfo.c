#include <stdio.h>

/* 
 * Função principal do programa
 * Objetivo: Cadastrar duas cartas para o jogo "Super Trunfo - Países" com informações como estado, código, cidade, população, área, PIB e pontos turísticos
 * Retorna: 0 em caso de sucesso
 */
int main() {
    // Variáveis para a Carta 1
    int populacao1, pontosturisticos1;    // População (em habitantes) e número de pontos turísticos
    float area1, pib1;                    // Área (em km²) e PIB (em reais)
    char estado1[50];                     // Nome do estado (ex.: Goiás)
    char codigo1[50];                     // Código da carta (ex.: G01)
    char cidade1[50];                     // Nome da cidade (ex.: Goiânia)

    // Variáveis para a Carta 2
    int populacao2, pontosturisticos2;    // População (em habitantes) e número de pontos turísticos
    float area2, pib2;                    // Área (em km²) e PIB (em reais)
    char estado2[50];                     // Nome do estado (ex.: Goiás)
    char codigo2[50];                     // Código da carta (ex.: G01)
    char cidade2[50];                     // Nome da cidade (ex.: Goiânia)

    // Exibe o título e o tema do programa
    printf("Desafio Super Trunfo - Países\n");
    printf("Tema 1 - Cadastro das Cartas\n");

    // Cadastro da Carta 1
    printf("\nCarta 1:\n");

    printf("Digite o Estado (ex: Goiás): ");
    scanf("%s", estado1);                 // Lê o nome do estado como string

    printf("Digite o Código (ex: G01): ");
    scanf("%s", codigo1);                 // Lê o código como string

    printf("Digite o nome da Cidade (ex: Goiânia): ");
    scanf("%s", cidade1);                 // Lê o nome da cidade como string

    printf("Digite a População (ex: 12000 habitantes): ");
    scanf("%d", &populacao1);             // Lê a população em número de habitantes

    printf("Digite a Área (ex: 21142.20 km²): ");
    scanf("%f", &area1);                  // Lê a área em km²

    printf("Digite o PIB (ex: 40321322.22 Reais): ");
    scanf("%f", &pib1);                   // Lê o PIB em reais

    printf("Digite o Número de Pontos Turísticos (ex: 15): ");
    scanf("%d", &pontosturisticos1);      // Lê o número de pontos turísticos

    // Cadastro da Carta 2
    printf("\nCarta 2:\n");

    printf("Digite o Estado (ex: Goiás): ");
    scanf(" %s", estado2);                // Lê o nome do estado como string (espaço evita buffer residual)

    printf("Digite o Código (ex: G01): ");
    scanf("%s", codigo2);                 // Lê o código como string

    printf("Digite o nome da Cidade (ex: Goiânia): ");
    scanf("%s", cidade2);                 // Lê o nome da cidade como string

    printf("Digite a População (ex: 12000 habitantes): ");
    scanf("%d", &populacao2);             // Lê a população em número de habitantes

    printf("Digite a Área (ex: 21142.20 km²): ");
    scanf("%f", &area2);                  // Lê a área em km²

    printf("Digite o PIB (ex: 40321322.22 Reais): ");
    scanf("%f", &pib2);                   // Lê o PIB em reais

    printf("Digite o Número de Pontos Turísticos (ex: 15): ");
    scanf("%d", &pontosturisticos2);      // Lê o número de pontos turísticos

    //Exibe as cartas com os dados cadastrados da Carta 1
    printf("\nCarta 1\n");
    
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d Habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    //Exibe as cartas com os dados cadastrados da Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d Habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);





    
    return 0;                             // Finaliza o programa com sucesso
}