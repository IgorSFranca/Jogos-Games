/*
 * Nome do arquivo: jo-ken-po.c
 * Descrição: Jogo do Jokenpô
 * Autor: Igor França
 * Data de criação: 25 de julho de 2023
 */

#include <stdio.h>
#include <stdlib.h> //biblioteca para gerar um número aleatório
#include <time.h> //biblioteca complementar para gerar o número aleatório
#include <windows.h> //biblioteca para usar o Sleep
#include <ctype.h> //biblioteca para jogar a resposta para minúsculo

void cabecalho(){
    printf(" ++++++++++++++++++++++++++++\n");
    printf(" +          ~~*~~           +\n");
    printf(" +   ~#   JO-KEN-PO   #~    +\n");
    printf(" +          ~~*~~           +\n");
    printf(" ++++++++++++++++++++++++++++\n");
    printf(" +     FACA SUA ESCOLHA     +\n");
    printf(" + [1] PEDRA                +\n");
    printf(" + [2] PAPEL                +\n");
    printf(" + [3] TESOURA              +\n");
    printf(" ++++++++++++++++++++++++++++\n\n");
}

void animacao_resultado(){
    Sleep(600);
    printf("~ JO\n");
    Sleep(600);
    printf("~~ KEN\n");
    Sleep(600);
    printf("~~~ PO\n");
}

int main (){
  int jogada_pc, jogada_usuario;
  char resp = 's';

  do {
    system ("cls"); //Limpeza da tela a cada nova jogada
    srand((unsigned)time(NULL)); //determina a semente do número aleatório. A cada execução ele gera um número diferente
    jogada_pc = rand()%3+1; //gerando o número aleatório pelo computador

    //solicitação da jogada do usuário
    cabecalho();
    printf("Faca a sua jogada: ");
    scanf("%i", &jogada_usuario);

    animacao_resultado();

    //Busca para correspondência da jogada
    switch (jogada_usuario){
      case 1: //Escolha do usuário: Pedra
        if (jogada_pc == 1){
          printf("Escolha do Computador: Pedra.\n");
          printf("Houve um EMPATE!\n");
          printf("\n");
        }
        else if (jogada_pc == 2){
          printf("Escolha do Computador: Papel.\n");
          printf("Voce PERDEU!\n");
          printf("\n");
        }
        else{
          printf("Escolha do Computador: Tesoura.\n");
          printf("Voce GANHOU! PARABENS!\n");
          printf("\n");
        }
        break;
      case 2: //Escolha do usuário: Papel
        if (jogada_pc == 1){
          printf("Escolha do Computador: Pedra.\n");
          printf("Voce GANHOU! PARABENS!\n");
          printf("\n");
        }
        else if (jogada_pc == 2){
          printf("Escolha do Computador: Papel.\n");
          printf("Houve um EMPATE!\n");
          printf("\n");
        }
        else{
          printf("Escolha do Computador: Tesoura.\n");
          printf("Voce PERDEU!\n");
          printf("\n");
        }
        break;
      case 3: //Escolha do usuário: Tesoura
        if (jogada_pc == 1){
          printf("Escolha do Computador: Pedra.\n");
          printf("Voce PERDEU!\n");
          printf("\n");
        }
        else if (jogada_pc == 2){
          printf("Escolha do Computador: Papel.\n");
          printf("Voce GANHOU! PARABENS!\n");
          printf("\n");
        }
        else{
          printf("Escolha do Computador: Tesoura.\n");
          printf("Houve um EMPATE!\n");
          printf("\n");
        }
        break;
      default: 
        printf("Jogada nao encontrada.\n");
        break;
    } 

    //Continuar o jogo
    printf("Deseja jogar novamente [s/n]? ");
    scanf(" %c", &resp);
    resp = tolower(resp);
  } while (resp == 's');
  return 0;
}