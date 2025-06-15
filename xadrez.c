#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
  
  
   char torre[50];
   char bispo[50];
   char rainha[50];
   int i, peca;
 
   
   printf("ESCOLHA A VARIVEL PARA SABER QUANTAS VEZES ELA MOVE...\n");
   printf("1. TORRE\n");
     printf("2. BISPO\n");
       printf("3. RAINHA\n");
            scanf("%d", &peca);   

            // switch para selecionar o tipo de peça
   switch (peca)
   {
            case 1:
                for ( i = 1; i <= 5; i++)
                    {
                            printf("Direita\n", torre);
                    }
    break;
            case 2:
                        for ( i = 1; i <= 5; i++)
                    {
                            printf("Cima, Direita\n", bispo);
                    }
    break;
            case 3:
                        for ( i = 1; i <= 8; i++)
                    {
                            printf("Esquerda\n", rainha);
                    }
    break;
            default: 
                printf ("Opção invalida...");
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
