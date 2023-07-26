/*
 * Nome do arquivo: par_ou_impar.c
 * Descrição: Jogo do Par ou Ímpar
 * Autor: Igor França
 * Data de criação: 26 de julho de 2023
 */

#include <stdio.h>
#include <stdlib.h> //Biblioteca para gerar um número aleatório
#include <time.h> //Biblioteca complementar para gerar o número aleatório
#include <ctype.h> //Biblioteca para transformar as letras em minúsculas
#include <windows.h> //Biblioteca para uso do sleep

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
    Sleep(600);
    printf("~ PAR\n");
    Sleep(600);
    printf("~~ ou\n");
    Sleep(600);
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

    switch (escolha_usuario){
        case 1://Usuario escolheu IMPAR
            if (escolha_pc == escolha_usuario){
                printf("O computador mostrou 1 e voce mostrou 1.\n");
                printf("VOCE PERDEU!\n");
            }
            else{
                printf("O computador mostrou 2 e voce mostrou 1.\n");
                printf("VOCE GANHOU!\n");
            }
            break;
        case 2://Usuario escolheu PAR
            if (escolha_pc == escolha_usuario){
                printf("O computador mostrou 2 e voce mostrou 2.\n");
                printf("VOCE GANHOU!\n");
            }
            else{
                printf("O computador mostrou 1 e voce mostrou 2.\n");
                printf("VOCE PERDEU!\n");
            }
            break;
        default:
            printf("Opcao nao encontrada.\n");
            break;
    }
    printf("\nDeseja jogar novamente [s/n]: ");
    scanf(" %c", &resp);
    resp = tolower(resp);
    } while (resp == 's');

    return 0;
}

