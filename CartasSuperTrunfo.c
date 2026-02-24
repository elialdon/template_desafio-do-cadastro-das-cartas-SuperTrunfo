#include <stdio.h>

typedef struct {
    char codigo[4];          
    char nome[30];           
    long int populacao;      
    float area;              
    double pib;              
    int pontosTuristicos;    
    float densidade;         
    double pibPerCapita;     
    double superPoder;       
} Carta;

int main() {
    // Cartas já preenchidas com dados reais
    Carta cartas[4] = {
        {"A01", "SaoPaulo", 11451999, 1521.0, 1200000.0, 10, 0, 0, 0},
        {"A02", "RioDeJaneiro", 6211223, 1200.0, 400000.0, 58, 0, 0, 0},
        {"B01", "Ceara", 8794957, 148894.0, 213601.0, 17, 0, 0, 0},
        {"B02", "Goias", 7056495, 340243.0, 300000.0, 10, 0, 0, 0}
    };

    // Cálculos automáticos
    for (int i = 0; i < 4; i++) {
        cartas[i].densidade = cartas[i].populacao / cartas[i].area;
        cartas[i].pibPerCapita = (cartas[i].pib * 1000000000) / cartas[i].populacao;
        cartas[i].superPoder = cartas[i].populacao + cartas[i].area + cartas[i].pib + cartas[i].pontosTuristicos + cartas[i].pibPerCapita;
    }

    // Exibição das cartas
    printf("\n===== Cartas Cadastradas =====\n");
    for (int i = 0; i < 4; i++) {
        printf("\nCarta %s - %s\n", cartas[i].codigo, cartas[i].nome);
        printf("População: %ld\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2lf bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontosTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n", cartas[i].densidade);
        printf("PIB per Capita: %.2lf R$\n", cartas[i].pibPerCapita);
        printf("Super Poder: %.2lf\n", cartas[i].superPoder);
    }

    // Comparação entre duas cartas
    int c1, c2;
    printf("\nDigite o índice da primeira carta (0 a 3): ");
    scanf("%d", &c1);
    printf("Digite o índice da segunda carta (0 a 3): ");
    scanf("%d", &c2);

    printf("\n===== Comparação =====\n");

    // População
    if (cartas[c1].populacao > cartas[c2].populacao)
        printf("População: %s vence\n", cartas[c1].nome);
    else
        printf("População: %s vence\n", cartas[c2].nome);

    // Área
    if (cartas[c1].area > cartas[c2].area)
        printf("Área: %s vence\n", cartas[c1].nome);
    else
        printf("Área: %s vence\n", cartas[c2].nome);

    // PIB
    if (cartas[c1].pib > cartas[c2].pib)
        printf("PIB: %s vence\n", cartas[c1].nome);
    else
        printf("PIB: %s vence\n", cartas[c2].nome);

    // Pontos turísticos
    if (cartas[c1].pontosTuristicos > cartas[c2].pontosTuristicos)
        printf("Pontos turísticos: %s vence\n", cartas[c1].nome);
    else
        printf("Pontos turísticos: %s vence\n", cartas[c2].nome);

    // Densidade populacional (menor vence)
    if (cartas[c1].densidade < cartas[c2].densidade)
        printf("Densidade Populacional: %s vence\n", cartas[c1].nome);
    else
        printf("Densidade Populacional: %s vence\n", cartas[c2].nome);

    // PIB per Capita
    if (cartas[c1].pibPerCapita > cartas[c2].pibPerCapita)
        printf("PIB per Capita: %s vence\n", cartas[c1].nome);
    else
        printf("PIB per Capita: %s vence\n", cartas[c2].nome);

    // Super Poder
    if (cartas[c1].superPoder > cartas[c2].superPoder)
        printf("Super Poder: %s vence\n", cartas[c1].nome);
    else
        printf("Super Poder: %s vence\n", cartas[c2].nome);

    return 0;
}
