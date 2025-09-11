#include <stdio.h>
#include <stdlib.h>

// Função recursiva para movimentação do Bispo
void bispo(int passos, int maxPassos) {
    if (passos > maxPassos) return;


    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Diagonal Direita\n", passos);
        }
    }
    
    bispo(passos + 1, maxPassos);
}

// Função para movimentação da Torre (loop simples)
void torre(int casas) {
    for (int i = 1; i <= casas; i++) {
        printf("Direita\n", i);
    }
}

// Função para movimentação da Rainha (loop simples)
void rainha(int casas) {
    for (int i = 1; i <= casas; i++) {
        printf("Esquerda\n", i); 
    }
}

// Função para movimentação do Cavalo (loops aninhados e múltiplas variáveis)
void cavalo(int repeticoes) {
    for (int i = 1; i <= repeticoes; i++) {
         // Loop para as duas casas para cima
        for (int up = 1; up <= 2; up++) {
            printf("Para cima\n", up);
        }
        // Loop para uma casa para direita
        for (int right = 1; right <= 1; right++) {
            printf("Direita\n", right);
        }
        printf("---- Movimento concluido ----\n", i);
    }
}


int main() {
    int opcao, peca;

    printf("=================================\n");
    printf("       JOGO DE XADREZ\n");
    printf("=================================\n");

    do {
        printf("Menu:\n");
        printf("1 - Iniciar jogo\n");
        printf("2 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Escolha a peca:\n");
            printf("1 - Torre\n");
            printf("2 - Bispo\n");
            printf("3 - Rainha\n");
            printf("4 - Cavalo\n");
            printf("Escolha: ");
            scanf("%d", &peca);

            switch (peca) {
                case 1:
                    printf("Movimentacao da Torre:\n");
                    torre(5);
                    break;
                case 2:
                    printf("Movimentacao do Bispo:\n");
                    bispo(1, 5);
                    break;
                case 3:
                    printf("Movimentacao da Rainha:\n");
                    rainha(8);
                    break;
                case 4:
                    printf("Movimentacao do Cavalo:\n");
                    cavalo(1);
                    break;
                default:
                    printf("Opcao invalida!\n");
                    break;
            }
        } else if (opcao != 2) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 2);

    printf("Saindo do jogo...\n");
    return 0;
}
