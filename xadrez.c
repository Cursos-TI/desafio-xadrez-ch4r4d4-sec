#include <stdio.h>

// Definição das constantes para os movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8
#define MOV_CAVALO 1

// Função recursiva para movimentação do Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimentação da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    int i, j;

    // Movimentação do Bispo (diagonal superior direita usando recursão)
    printf("Movimentacao do Bispo:\n");
    moverBispo(MOV_BISPO);
    printf("\n");

    // Movimentação da Torre (para a direita usando recursão)
    printf("Movimentacao da Torre:\n");
    moverTorre(MOV_TORRE);
    printf("\n");

    // Movimentação da Rainha (para a esquerda usando recursão)
    printf("Movimentacao da Rainha:\n");
    moverRainha(MOV_RAINHA);
    printf("\n");
    
    // Movimentação do Cavalo (L: duas casas para cima e uma para a direita)
    printf("Movimentacao do Cavalo:\n");
    for (i = 0, j = 0; i < 2 || j < 1; i++) {
        if (i < 2) {
            printf("Cima\n");
        }
        if (i == 1) {
            j++;
            printf("Direita\n");
            break;
        }
    }
    printf("\n");
    
    return 0;
}
