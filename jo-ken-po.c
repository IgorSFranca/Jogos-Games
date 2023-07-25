/*
 * Nome do arquivo: jo-ken-po.c
 * Descrição: Jogo do Jokenpô
 * Autor: Igor França
 * Data de criação: 25 de julho de 2023
 */

#include <stdio.h>
#include <stdlib.h> //biblioteca para gerar um número aleatório
#include <time.h> //biblioteca complementar para gerar o número aleatório
#include <unistd.h> //biblioteca para usar o Sleep
#include <ctype.h> //biblioteca para jogar a resposta para minúsculo

void cabecalho(){
    printf("++++++++++++++++++++++++++++\n");
    printf("+          ~~*~~           +\n");
    printf("+   ~#   JO-KEN-PO   #~    +\n");
    printf("+          ~~*~~           +\n");
    printf("++++++++++++++++++++++++++++\n");
    printf("+     FACA SUA ESCOLHA     +\n");
    printf("[1] PEDRA                  +\n");
    printf("[2] PAPEL                  +\n");
    printf("[3] TESOURA                +\n");
    printf("++++++++++++++++++++++++++++\n\n");
}

int main (){
  int jogada_pc = rand() % 3 + 1, jogada_usuario;
  char resp = 's';
  srand(time(NULL)); //determina a semente do número aleatório. A cada execução ele gera um número diferente
  do {
    system ("cls");
    cabecalho();
    printf("Faca a sua jogada: ");
    scanf("%i", &jogada_usuario);
    switch (jogada_usuario){
      case 1: //Pedra
      case 2: //Papel
      case 3: //Tesoura
      default: 
        printf("Jogada nao encontrada.\n");
        break;
    } 
    printf("Deseja jogar novamente [s/n]? ");
    scanf(" %c", &resp);
    resp = tolower(resp);
  } while (resp == 's');
  system("pause");
  return 0;
}