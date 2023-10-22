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
#include <windows.h>

void cabecalho();
void menu_inicial();
void menu_dificuldade();
void menu_operacao();
int opcao();
int selecionar_dificuldade();
void encerramento();

int main (){
    int opcao_inicial;
    int opcao_dificuldade;
    int opcao_operacao;

    do{
        system ("cls");
        cabecalho();
        menu_inicial();
        opcao_inicial = opcao();
        switch (opcao_inicial){
            case 1:
            case 2: 
                opcao_dificuldade = selecionar_dificuldade();
                printf("Opcao Dificuldade: %i", opcao_dificuldade);
                break;
            case 3:
            case 4: 
                encerramento();
                break;
            default:
                printf("Opcao nao encontrada.\n");
                printf("Informe novamente.\n");
                system ("pause");
                break;
        }
    } while (opcao_inicial != 4);

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
    printf(" [4] ENCERRAR                      \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void menu_dificuldade(){
    printf("              DIFICULDADE          \n");
    printf(" [1] FACIL                         \n");
    printf(" [2] MEDIO                         \n");
    printf(" [3] DIFICIL                       \n");
    printf(" [4] VOLTAR                        \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void menu_operacao(){
    printf("               OPERACAO            \n");
    printf(" [1] ADICAO                        \n");
    printf(" [2] SUBTRACAO                     \n");
    printf(" [3] MULTIPLICACAO                 \n");
    printf(" [4] DIVISAO                       \n");
    printf(" [5] VOLTAR                        \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

int opcao(){
    int opcao;
    printf("Informe a opcao desejada: ");
    scanf("%i", &opcao);
    return opcao;
}

int selecionar_dificuldade(){
    int opcao;
    int confirmacao = 0;
    do{
        system ("cls");
        cabecalho();
        menu_dificuldade();

        printf("Informe a dificuldade que deseja: ");
        scanf("%i", &opcao);
        switch (opcao){
            case 1:
                printf("Dificuldade escolhida: FACIL\n");
                break;
            case 2: 
                printf("Dificuldade escolhida: MEDIO\n");
                break;
            case 3: 
                printf("Dificuldade escolhida: DIFICIL\n");
                break;
            case 4:
                printf("SAIR\n");
                break;
            default:
                printf("Opcao invalida");
                break;
        }

        printf("Deseja confirmar a opcao? [1 SIM][0 NAO]");
        scanf("%i", &confirmacao);
    } while (confirmacao != 1);

    return opcao;
}

void encerramento(){
    int i;
    printf("Encerrando jogo");
    for (i=0; i<3; i++){
        printf(".");
        Sleep(600);
    }
    printf("\n");
    printf("Jogo encerrado.\n");
}