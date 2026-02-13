#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3: Desenvolvendo a Lógica do Jogo
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    /* ======================
       Cadastro das Cartas
       ====================== */

    /* Carta 1 */
    char estado1[3] = "SP";
    char codigo1[4] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;

    /* Carta 2 */
    char estado2[3] = "RJ";
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;

    /* ======================
       Cálculos adicionais
       ====================== */
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    /* ======================
       Comparação de um atributo
       ATRIBUTO ESCOLHIDO: POPULAÇÃO
       ====================== */
    printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
