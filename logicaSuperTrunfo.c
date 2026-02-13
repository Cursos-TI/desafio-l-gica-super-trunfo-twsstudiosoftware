#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3: Desenvolvendo a Lógica do Jogo
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    /* ======================
       Cartas previamente cadastradas
       ====================== */

    /* Carta 1 */
    char pais1[30] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 1900.0;
    int pontos1 = 60;

    /* Carta 2 */
    char pais2[30] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 640.0;
    int pontos2 = 40;

    /* Cálculo da densidade demográfica */
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    /* ======================
       Menu interativo
       ====================== */
    printf("=== COMPARACAO DE CARTAS ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o atributo para comparacao: ");
    scanf("%d", &opcao);

    printf("\nComparacao entre %s e %s\n\n", pais1, pais2);

    /* ======================
       Comparacao com switch
       ====================== */
    switch (opcao) {

        case 1: /* População */
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: /* Área */
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: /* PIB */
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: /* Pontos turísticos */
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);

            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: /* Densidade demográfica (regra invertida) */
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.4f hab/km²\n", pais1, densidade1);
            printf("%s: %.4f hab/km²\n", pais2, densidade2);

            /* Menor densidade vence */
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Reinicie o programa e escolha uma opcao valida.\n");
    }

    return 0;
}
