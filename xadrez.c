#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8
#define MOV_CAVALO 1 // Cada movimento do Cavalo se dá em "L"

int main() {
   // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimento da Torre (%d casas):", MOV_TORRE);
    for (int i = 1; i <= MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimento do Bispo (%d casas):", MOV_BISPO);
    int j = 1;
    while (j <= MOV_BISPO) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimento da Rainha (%d casas):", MOV_RAINHA);
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= MOV_RAINHA);
    printf("\n");
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    printf("Movimento do Cavalo:\n");
    for (int dx = -2; dx <= 2; dx++) {
        for (int dy = -2; dy <= 2; dy++) {
            if ((dx * dx + dy * dy) == 5) {
                printf("Movimento em L: (%d, %d)\n", dx, dy);
            }
        }
    }
    printf("\n");
    
    return 0;
}
