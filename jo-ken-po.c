/*
 * Nome do arquivo: jo-ken-po.c
 * Descrição: Jogo do Jokenpô
 * Autor: Igor França
 * Data de criação: 25 de julho de 2023
 */

#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
    printf("++++++++++++++++++++++++++++\n");
    printf("+          ~~*~~           +\n");
    printf("+   ~# JO - KEN - PO #~    +\n");
    printf("+          ~~*~~           +\n");
    printf("++++++++++++++++++++++++++++\n");
    printf("+     FACA SUA ESCOLHA     +\n");
    printf("[1] PEDRA                  +\n");
    printf("[2] PAPEL                  +\n");
    printf("[3] TESOURA                +\n");
    printf("++++++++++++++++++++++++++++\n\n");
}

int main (){
  cabecalho();
  
  system("pause");
  return 0;
}