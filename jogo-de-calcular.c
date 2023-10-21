/*
 * Nome do arquivo: jogo-de-calcular.c
 * Descrição: Aplicação que tem o objetivo de desenvolver e estimular o cálculo direto do seu usuário. O jogador tem a opção de escolher níveis de jogo
 * (fácil, médio e difícil) e se quer trabalhar com as operações básicas individualmente (adição, subtração, multiplicação e divisão).
 * Autor: Igor França
 * Data de criação: 21 de outubro de 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void cabecalho();
void menu_inicial();
void menu_dificuldade();
void menu_operacao();

int main (){

    return 0;
}

void cabecalho(){
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("               ~ # ~               \n");
    printf("    ~ #  JOGO DE CALCULAR # ~      \n");
    printf("               ~ # ~               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void menu_inicial(){
    printf("             MENU PRINCIPAL        \n");
    printf(" [1] INICIAR                       \n");
    printf(" [2] SELECIONAR DIFICULDADE        \n");
    printf(" [3] SELECIONAR OPERACAO MATEMATICA\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void menu_dificuldade(){
    printf("              DIFICULDADE          \n");
    printf(" [1] FACIL                         \n");
    printf(" [2] MEDIO                         \n");
    printf(" [3] DIFICIL                       \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void menu_operacao(){
    printf("               OPERACAO            \n");
    printf(" [1] ADICAO                        \n");
    printf(" [2] SUBTRACAO                     \n");
    printf(" [3] MULTIPLICACAO                 \n");
    printf(" [4] DIVISAO                       \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}