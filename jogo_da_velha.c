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
    printf("++++++++++++++++++++++++++++\n\n");
    
}

int main (){
    cabecalho();

    system ("pause");
    return 0;
}