#include <stdio.h>
#include <string.h> // Para strcmp()

int main() {
    // Variáveis para as cartas (mantidas da versão anterior)
    int populacao1, pontosturisticos1;
    float area1, pib1;
    char estado1[50];
    char codigo1[50];
    char cidade1[50];
    
    int populacao2, pontosturisticos2;
    float area2, pib2;
    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    
    // Variáveis calculadas
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;
    
    int opcao;
    int comparacao;

    // Cadastro das cartas (mantido da versão anterior)
    printf("Desafio Super Trunfo - Países\n");
    printf("Tema 2 - Menu Interativo\n\n");

    printf("\nCarta 1:\n");
    printf("Digite o Estado (ex: Goiás): ");
    scanf("%s", estado1);
    printf("Digite o Código (ex: G01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da Cidade (ex: Goiânia): ");
    scanf("%s", cidade1);
    printf("Digite a População (ex: 12000 habitantes): ");
    scanf("%d", &populacao1);
    printf("Digite a Área (ex: 21142.20 km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (ex: 40321322.22 Reais): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos (ex: 15): ");
    scanf("%d", &pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Digite o Estado (ex: Goiás): ");
    scanf("%s", estado2);
    printf("Digite o Código (ex: G01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da Cidade (ex: Goiânia): ");
    scanf("%s", cidade2);
    printf("Digite a População (ex: 12000 habitantes): ");
    scanf("%d", &populacao2);
    printf("Digite a Área (ex: 21142.20 km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (ex: 40321322.22 Reais): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos (ex: 15): ");
    scanf("%d", &pontosturisticos2);

    // Cálculos
    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;
    superpoder1 = pontosturisticos1 + populacao1 + pib1 + area1;
    superpoder2 = pontosturisticos2 + populacao2 + pib2 + area2;

    // Menu interativo
    do {
        printf("\n=== MENU DE COMPARAÇÃO ===\n");
        printf("1. Comparar por População\n");
        printf("2. Comparar por Área\n");
        printf("3. Comparar por PIB\n");
        printf("4. Comparar por Pontos Turísticos\n");
        printf("5. Comparar por Densidade Demográfica\n");
        printf("6. Comparar por PIB per Capita\n");
        printf("7. Comparar por Superpoder\n");
        printf("8. Exibir todas as comparações\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        printf("\n=== RESULTADO ===\n");
        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("Carta 2: %s (%s)\n", cidade2, estado2);

        switch(opcao) {
            case 1: // População
                printf("Atributo: População\n");
                printf("%s: %d habitantes\n", cidade1, populacao1);
                printf("%s: %d habitantes\n", cidade2, populacao2);
                comparacao = populacao1 - populacao2;
                break;
                
            case 2: // Área
                printf("Atributo: Área\n");
                printf("%s: %.2f km²\n", cidade1, area1);
                printf("%s: %.2f km²\n", cidade2, area2);
                comparacao = (area1 > area2) ? 1 : -1;
                if (area1 == area2) comparacao = 0;
                break;
                
            case 3: // PIB
                printf("Atributo: PIB\n");
                printf("%s: %.2f reais\n", cidade1, pib1);
                printf("%s: %.2f reais\n", cidade2, pib2);
                comparacao = (pib1 > pib2) ? 1 : -1;
                if (pib1 == pib2) comparacao = 0;
                break;
                
            case 4: // Pontos Turísticos
                printf("Atributo: Pontos Turísticos\n");
                printf("%s: %d pontos\n", cidade1, pontosturisticos1);
                printf("%s: %d pontos\n", cidade2, pontosturisticos2);
                comparacao = pontosturisticos1 - pontosturisticos2;
                break;
                
            case 5: // Densidade Demográfica (regra invertida)
                printf("Atributo: Densidade Demográfica (menor valor vence)\n");
                printf("%s: %.2f hab/km²\n", cidade1, densidadepopulacional1);
                printf("%s: %.2f hab/km²\n", cidade2, densidadepopulacional2);
                comparacao = (densidadepopulacional1 < densidadepopulacional2) ? 1 : -1;
                if (densidadepopulacional1 == densidadepopulacional2) comparacao = 0;
                break;
                
            case 6: // PIB per Capita
                printf("Atributo: PIB per Capita\n");
                printf("%s: %.2f reais/hab\n", cidade1, pibpercapita1);
                printf("%s: %.2f reais/hab\n", cidade2, pibpercapita2);
                comparacao = (pibpercapita1 > pibpercapita2) ? 1 : -1;
                if (pibpercapita1 == pibpercapita2) comparacao = 0;
                break;
                
            case 7: // Superpoder
                printf("Atributo: Superpoder\n");
                printf("%s: %.2f pontos\n", cidade1, superpoder1);
                printf("%s: %.2f pontos\n", cidade2, superpoder2);
                comparacao = (superpoder1 > superpoder2) ? 1 : -1;
                if (superpoder1 == superpoder2) comparacao = 0;
                break;
                
            case 8: // Todas as comparações
                printf("\n--- Todas as Comparações ---\n");
                
                // População
                printf("\nPopulação:\n");
                printf("%s: %d\n%s: %d\n", cidade1, populacao1, cidade2, populacao2);
                if (populacao1 > populacao2) printf("Vencedor: %s\n", cidade1);
                else if (populacao2 > populacao1) printf("Vencedor: %s\n", cidade2);
                else printf("Empate!\n");
                
                // Área
                printf("\nÁrea:\n");
                printf("%s: %.2f\n%s: %.2f\n", cidade1, area1, cidade2, area2);
                if (area1 > area2) printf("Vencedor: %s\n", cidade1);
                else if (area2 > area1) printf("Vencedor: %s\n", cidade2);
                else printf("Empate!\n");
                
                // PIB
                printf("\nPIB:\n");
                printf("%s: %.2f\n%s: %.2f\n", cidade1, pib1, cidade2, pib2);
                if (pib1 > pib2) printf("Vencedor: %s\n", cidade1);
                else if (pib2 > pib1) printf("Vencedor: %s\n", cidade2);
                else printf("Empate!\n");
                
                // Pontos Turísticos
                printf("\nPontos Turísticos:\n");
                printf("%s: %d\n%s: %d\n", cidade1, pontosturisticos1, cidade2, pontosturisticos2);
                if (pontosturisticos1 > pontosturisticos2) printf("Vencedor: %s\n", cidade1);
                else if (pontosturisticos2 > pontosturisticos1) printf("Vencedor: %s\n", cidade2);
                else printf("Empate!\n");
                
                // Densidade Demográfica (regra invertida)
                printf("\nDensidade Demográfica (menor vence):\n");
                printf("%s: %.2f\n%s: %.2f\n", cidade1, densidadepopulacional1, cidade2, densidadepopulacional2);
                if (densidadepopulacional1 < densidadepopulacional2) printf("Vencedor: %s\n", cidade1);
                else if (densidadepopulacional2 < densidadepopulacional1) printf("Vencedor: %s\n", cidade2);
                else printf("Empate!\n");
                
                // PIB per Capita
                printf("\nPIB per Capita:\n");
                printf("%s: %.2f\n%s: %.2f\n", cidade1, pibpercapita1, cidade2, pibpercapita2);
                if (pibpercapita1 > pibpercapita2) printf("Vencedor: %s\n", cidade1);
                else if (pibpercapita2 > pibpercapita1) printf("Vencedor: %s\n", cidade2);
                else printf("Empate!\n");
                
                // Superpoder
                printf("\nSuperpoder:\n");
                printf("%s: %.2f\n%s: %.2f\n", cidade1, superpoder1, cidade2, superpoder2);
                if (superpoder1 > superpoder2) printf("Vencedor: %s\n", cidade1);
                else if (superpoder2 > superpoder1) printf("Vencedor: %s\n", cidade2);
                else printf("Empate!\n");
                
                comparacao = 0; // Para não mostrar o resultado padrão
                break;
                
            case 0:
                printf("Saindo do programa...\n");
                break;
                
            default:
                printf("Opção inválida!\n");
                comparacao = 0;
        }

        // Exibe o resultado (exceto para opção 8 e inválidas)
        if (opcao >= 1 && opcao <= 7) {
            if (comparacao > 0) {
                printf("Vencedor: %s\n", cidade1);
            } else if (comparacao < 0) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
        }
    } while (opcao != 0);

    return 0;
}
