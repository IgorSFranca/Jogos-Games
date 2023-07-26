/*
 * Nome do arquivo: par_ou_impar.c
 * Descrição: Jogo do Par ou Ímpar
 * Autor: Igor França
 * Data de criação: 26 de julho de 2023
 */

#include <stdio.h>
#include <stdlib.h> //Biblioteca para gerar um número aleatório
#include <time.h> //Biblioteca complementar para gerar o número aleatório
#include <unistd.h> //Biblioteca para uso do sleep
#include <ctype.h> //Biblioteca para transformar as letras em minúsculas

void cabecalho(){
    printf(" ++++++++++++++++++++++++++++\n");
    printf(" +          ~~*~~           +\n");
    printf(" +  ~#   PAR-ou-IMPAR   #~  +\n");
    printf(" +          ~~*~~           +\n");
    printf(" ++++++++++++++++++++++++++++\n");
    printf(" +     FACA SUA ESCOLHA     +\n");
    printf(" + [1] IMPAR                +\n");
    printf(" + [2] PAR                  +\n");
    printf(" ++++++++++++++++++++++++++++\n\n");
}

void animacao_resultado(){
    sleep(1);
    printf("~ PAR\n");
    sleep(1);
    printf("~~ ou\n");
    sleep(1);
    printf("~~~ IMPAR\n");
}

int main (){
    int escolha_pc, escolha_usuario;
    char resp = 's';

    do{
    system ("cls"); //Limpeza da tela a cada nova jogada
    srand((unsigned)time(NULL)); //determina a semente do número aleatório. A cada execução ele gera um número diferente
    escolha_pc = rand()%2+1; //gerando o número aleatório pelo computador

    //solicitação da jogada do usuário
    cabecalho();
    printf("Faca a sua jogada: ");
    scanf("%i", &escolha_usuario);

    animacao_resultado();
    

    } while (resp == 's');

    return 0;
}

