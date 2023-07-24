/*
 * Nome do arquivo: jogo_da_velha.c
 * Descrição: Jogo infanto-juvenil conhecido como Jogo da Velha, onde 2 usuário jogam, cada um precisa fazer 3 pontos em uma linha reta horizontal, 
 * vertical ou perpendicular.
 * Autor: Igor França
 * Data de criação: 24 de julho de 2023
 */

#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
    printf("++++++++++++++++++++++++++++\n");
    printf("+          ~~*~~           +\n");
    printf("+   ~# JOGO DA VELHA #~    +\n");
    printf("+          ~~*~~           +\n");
    printf("++++++++++++++++++++++++++++\n");
    printf("+          ~~*~~           +\n");
    printf("+   INDICES GUIA DO JOGO   +\n");
    printf("+        1 | 2 | 3         +\n");
    printf("+        4 | 5 | 6         +\n");
    printf("+        7 | 8 | 9         +\n");
    printf("+          ~~*~~           +\n");
    printf("++++++++++++++++++++++++++++\n\n");
}

int main (){
    int i, j, linha=3, coluna=3, game;
    char jogo[linha][coluna];

    do{
        cabecalho();
        for (i=0; i<linha; i++){//Inicializar o jogo
            for (j=0; j<coluna; j++){
                jogo[i][j] = '*';
            }
        }
        for (i=0; i<linha; i++){//Mostrar o jogo inicial vazio
            printf("\n");
            for (j=0; j<coluna; j++){
                printf("%c ", jogo[i][j]);
            }
        }
        printf("\n\n");    
    } while (game != 0);
    system ("pause");
    return 0;
}