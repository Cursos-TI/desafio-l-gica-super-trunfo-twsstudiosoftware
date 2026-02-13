#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3: Desenvolvendo a Lógica do Jogo
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    /* ======================
       Cartas pré-cadastradas
       ====================== */

    char pais1[] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 1900.0;
    int pontos1 = 60;
    float densidade1 = populacao1 / area1;

    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 640.0;
    int pontos2 = 40;
    float densidade2 = populacao2 / area2;

    int escolha1, escolha2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    /* ======================
       Menu do primeiro atributo
       ====================== */
    printf("=== COMPARACAO DE CARTAS ===\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &escolha1);

    /* Atribui valores do primeiro atributo */
    switch (escolha1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontos1; valor1_c2 = pontos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    /* ======================
       Menu dinâmico do segundo atributo
       ====================== */
    printf("\nEscolha o SEGUNDO atributo:\n");

    if (escolha1 != 1) printf("1 - Populacao\n");
    if (escolha1 != 2) printf("2 - Area\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos Turisticos\n");
    if (escolha1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &escolha2);

    if (escolha2 == escolha1) {
        printf("Erro: atributo repetido!\n");
        return 0;
    }

    /* Atribui valores do segundo atributo */
    switch (escolha2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontos1; valor2_c2 = pontos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    /* ======================
       Ajuste da regra da densidade
       (menor valor vence)
       ====================== */
    float soma1 = 0;
    float soma2 = 0;

    soma1 += (escolha1 == 5) ? (1 / valor1_c1) : valor1_c1;
    soma2 += (escolha1 == 5) ? (1 / valor1_c2) : valor1_c2;

    soma1 += (escolha2 == 5) ? (1 / valor2_c1) : valor2_c1;
    soma2 += (escolha2 == 5) ? (1 / valor2_c2) : valor2_c2;

    /* ======================
       Resultado final
       ====================== */
    printf("\n=== RESULTADO FINAL ===\n");
    printf("%s -> Soma: %.2f\n", pais1, soma1);
    printf("%s -> Soma: %.2f\n", pais2, soma2);

    printf("\nResultado: %s\n",
           (soma1 > soma2) ? pais1 :
           (soma2 > soma1) ? pais2 :
           "Empate!");

    return 0;
}
