#include <stdio.h>

int main() {

    printf("===== DESAFIO BATALHA NAVAL =====\n\n");


       PARTE 1 – POSICIONAMENTO BÁSICO
     

    // Navio vertical com 3 partes (coordenadas x, y)
    int navioVertical[3][2] = {
        {2, 1},
        {3, 1},
        {4, 1}
    };

    // Navio horizontal com 4 partes (coordenadas x, y)
    int navioHorizontal[4][2] = {
        {6, 5},
        {6, 6},
        {6, 7},
        {6, 8}
    };

    // Exibindo o navio vertical
    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", navioVertical[i][0], navioVertical[i][1]);
    }

    // Exibindo o navio horizontal
    printf("\nCoordenadas do navio horizontal:\n");
    for (int i = 0; i < 4; i++) {
        printf("(%d, %d)\n", navioHorizontal[i][0], navioHorizontal[i][1]);
    }

    printf("\n");



     TABULEIRO 10x10 E 4 NAVIOS 
     

    // Criando tabuleiro 10x10 preenchido com 0
    int tabuleiro[10][10] = {0};

    // Navio horizontal
    for (int j = 2; j < 6; j++) {
        tabuleiro[1][j] = 3;
    }

    // Navio vertical
    for (int i = 3; i < 7; i++) {
        tabuleiro[i][4] = 3;
    }

    // Navio diagonal principal
    for (int k = 0; k < 4; k++) {
        tabuleiro[6 + k][1 + k] = 3;
    }

    // Navio diagonal secundária
    for (int k = 0; k < 4; k++) {
        tabuleiro[6 + k][6 - k] = 3;
    }

    // Exibindo o tabuleiro completo
    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n");


     HABILIDADES ESPECIAIS 
       
    
       Habilidade: CONE
       ------------------- */
    int cone[3][5] = {0};
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < 5; j++) {
        cone[2][j] = 1;
    }

    printf("Habilidade em CONE:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    /* -------------------
       Habilidade: OCTAEDRO
       ------------------- */
    int octaedro[3][5] = {0};
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    printf("Habilidade em OCTAEDRO:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    /* -------------------
       Habilidade: CRUZ
       ------------------- */
    int cruz[3][5] = {0};
    cruz[0][2] = 1;
    for (int j = 0; j < 5; j++) {
        cruz[1][j] = 1;
    }
    cruz[2][2] = 1;

    printf("Habilidade em CRUZ:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
