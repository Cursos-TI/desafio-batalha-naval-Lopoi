#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    // Dados do tabuleiro
    int altura_tabuleiro = 10;
    int largura_tabuleiro = 10;
    int tabuleiro[largura_tabuleiro][altura_tabuleiro];
    // tamanhos dos navios
    int navio_horizontal_tamanho = 3;
    int navio_vertical_tamanho = 4;
    // Posição inicial dos navios (x, y) (iniciando de 0)
    int navio_horizontal_posicao[2] = {1, 2};
    int navio_vertical_posicao[2] = {4, 5};

    // Validação da posição dos navios
    if (navio_vertical_posicao[0] >= largura_tabuleiro || navio_vertical_posicao[1] >= altura_tabuleiro ||
        navio_vertical_posicao[1] + navio_vertical_tamanho >= altura_tabuleiro ||
        navio_horizontal_posicao[0] >= largura_tabuleiro || navio_horizontal_posicao[1] >= altura_tabuleiro ||
        navio_horizontal_posicao[0] + navio_horizontal_tamanho >= largura_tabuleiro)
    {
        printf("Navios em posições inválidas\n");
        return 0;
    }

    // Montar tabuleiro
    for (int y = 0; y < altura_tabuleiro; y++)
    {
        for (int x = 0; x < largura_tabuleiro; x++)
        {
            int sobreposicao = 0;
            if (x >= navio_horizontal_posicao[0] && x < navio_horizontal_posicao[0] + navio_horizontal_tamanho && y == navio_horizontal_posicao[1])
            {
                tabuleiro[x][y] = 3;
                sobreposicao++;
            }
            if (y >= navio_vertical_posicao[1] && y < navio_vertical_posicao[1] + navio_vertical_tamanho && x == navio_vertical_posicao[0])
            {
                tabuleiro[x][y] = 3;
                sobreposicao++;
            }
            // validação de sobreposição
            if(sobreposicao == 2){
                printf("Navios se sobrepõe\n");
                return 0;
            }
            if(sobreposicao == 0)
            {

                tabuleiro[x][y] = 0;
            }
        }
    }

    // Mostrar tabuleiro
    for (int y = 0; y < altura_tabuleiro; y++)
    {
        for (int x = 0; x < largura_tabuleiro; x++)
        {
            if (x == largura_tabuleiro - 1)
            {
                printf(" %d\n", tabuleiro[x][y]);
            }
            else
            {
                printf(" %d |", tabuleiro[x][y]);
            }
        }
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
