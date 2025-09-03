#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int jogador, bispo = 0, torre, rainha = 0, casas;     
    int paracima, parabaixo, direita, esquerda;

    
    /*
    torre - for
    bispo - while
    rainha - dowhile
    */
// Menu do Jogo

    printf("Bem vindo ao jogo de Xadrez!\n");
    printf("Selecione uma das opções:\n");
    printf("1 - Jogar\n");
    printf("2 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &jogador);

    if (jogador == 2)
    {
        printf("Saindo do jogo...\n");
        return 1;
    }
    printf("\n");

    // Escolha da peça

    printf("Escolha a peça: \n");
    printf("1 - torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("Escolha: ");
    scanf("%d", &jogador);  
    if (jogador < 1 || jogador > 3)
    {
       printf("Erro na escolha!\n");

       return 2;
    }
      
    switch (jogador)
    {

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    case 1:
        printf("Você escolheu a torre\n");
        printf("Escolha a direção\n");
        printf("1 - Para cima\n");
        printf("Escolha: ");
        scanf("%d", &jogador);

        if (jogador <1 || jogador > 1)    
        {
            printf("Escolha errada!");

        return 3;
        }
        
        printf("Mover quantas casas?\n");
        printf("1 \n");
        printf("2 \n");
        printf("3 \n");
        printf("4 \n");
        printf("5 \n");
        printf("6 \n");
        printf("7 \n");
        printf("8 \n");
        scanf("%d", &casas);

        if (casas <1 || casas > 8)
            { 
                printf("Escolha errada.\n");
            return 4;
            }
        for (torre = 0; torre < casas; torre++)
        {
            printf("Torre para cima %d vezes!\n", casas);
        }
            
        break;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    case 2:
        printf("Você escolheu o Bispo\n");
        printf("Escolha a direção\n");
        printf("1 - Para cima(Direita).\n");
        scanf("%d", &jogador);

        if (jogador < 1 || jogador > 8)    
        {
            printf("Escolha errada!");

        return 5;
        }
        
        printf("Mover quantas casas?\n");
        scanf("%d", &casas);

        if (casas <1 || casas > 8)
            { 
                printf("Escolha errada.\n");
            return 4;
            }
       while (bispo < casas)
       {
        printf("Bispo cima, direita %d vezes!\n", casas);
            bispo++;
       }           
    break;

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    case 3:
        printf("Você escolheu a Rainha\n");
        printf("Escolha a direção\n");
        printf("1 - Esquerda\n");
        scanf("%d", &jogador);
             
        printf("Mover quantas casas?\n");
        scanf("%d", &casas);

        if (casas <1 || casas > 8)
            { 
                printf("Escolha errada.\n");
            return 4;
            }
    do
    {
        printf("Rainha esquerda %d vezes!\n", casas);
            rainha++;
    } while (rainha < casas);
        break;
       
    
    default:
        break;
    }

   
   
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
