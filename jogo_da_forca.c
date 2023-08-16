/*
 * Nome do arquivo: jogo_da_forca.c
 * Descrição: Jogo info-juvenil da foca, onde o usuário tenta adivinhar a palavra escondida. A cada tentativa errada, o usuário
 * perde um ponto de vida.
 * Autor: Igor França
 * Datas:
 *      Criação: 22 de julho de 2023;
 *      Modularização: 11/08/2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Biblioteca para manipulação de strings
#include <ctype.h>  //Colocas as letras todas em minúsculas
#include <windows.h> //Utilização do sleep

// protótipos
void cabecalho();
void animacao(int);
void imprimir_certas(char letras_certas[], int);
void imprimir_tentativas(char letras_tentadas[], int);
void verifica_fim(int, int);
void capta_letra(char letra[]);
void verifica_letra(int *, int, char palavra_misteriosa[], char letras_certas[], char letra[], int *vitoria, int posicao, char letras_tentadas[]);
void imprime_tentativas_restantes(int);

int main()
{
    // declaração de variáveis
    char palavra_misteriosa[] = {"camiseta"};
    char letra[1];
    char letras_certas[strlen(palavra_misteriosa)];
    char letras_tentadas[30];
    memset(letras_certas, '_', strlen(palavra_misteriosa) - 1);
    int max = strlen(palavra_misteriosa);
    int chances = 6;
    int vitoria = 0;
    int posicao = 0;

    // execução do jogo
    do
    {
        animacao(chances);
        imprime_tentativas_restantes(chances);
        imprimir_certas(letras_certas, max);
        imprimir_tentativas(letras_tentadas, posicao);
        capta_letra(letra);
        system("cls");
        verifica_letra(&chances, max, palavra_misteriosa, letras_certas, letra, &vitoria, posicao, letras_tentadas);
        posicao++; // Posicionamento da letra na exibição das tentativas
        if (vitoria == sizeof(palavra_misteriosa) - 1) // Condição para dar um Break caso o usuário acerte a palavra antes de finalizar as tentativas
            break;
    } while (chances != 0);
    animacao(chances);
    verifica_fim(vitoria, max);
    return 0;
}

// procedimentos e funções
void cabecalho(){
    printf("============================\n");
    printf("           ~~*~~            \n");
    printf("    ~# JOGO DA FORCA #~     \n");
    printf("           ~~*~~            \n");
    printf("============================\n\n");
}

void animacao(int chances){
    int i;
    if (chances == 0){
        char corda[5] = {'|', '/', '|', '\\', '|'};
        char cabeca[5][5] = {" o", "o", " o", "  o", " o"};
        char tronco[5][6] = {" /|\\", "/|\\", " /|\\", "  /|\\", " /|\\"};
        char pernas[5][6] = {" / \\", "/ \\", " / \\", "  / \\", " / \\"};
        for (i=0; i<5; i++){
            cabecalho();
            printf("  ==================        \n");
            printf("  ||//             %c       \n", corda[i]);
            printf("  ||/             %s        \n", cabeca[i]);
            printf("  ||             %s         \n", tronco[i]);
            printf("  ||             %s         \n", pernas[i]);
            printf("  ||                        \n");
            printf("  -------------------       \n");
            Sleep(100);
            system ("cls");
        }
        cabecalho();
        printf("  ==================        \n");
        printf("  ||//             |        \n");
        printf("  ||/              o        \n");
        printf("  ||              /|\\      \n");
        printf("  ||              / \\      \n");
        printf("  ||                        \n");
        printf("  -------------------       \n");
    }
    if (chances == 1){
        char corda[5] = {'|', '/', '|', '\\', '|'};
        char cabeca[5][5] = {" o", "o", " o", "  o", " o"};
        char tronco[5][6] = {" /|\\", "/|\\", " /|\\", "  /|\\", " /|\\"};
        char pernas[5][6] = {" / ", "/ ", " / ", "  / ", " / "};
        for (i=0; i<5; i++){
            cabecalho();
            printf("  ==================        \n");
            printf("  ||//             %c       \n", corda[i]);
            printf("  ||/             %s        \n", cabeca[i]);
            printf("  ||             %s         \n", tronco[i]);
            printf("  ||             %s         \n", pernas[i]);
            printf("  ||                        \n");
            printf("  -------------------       \n");
            Sleep(100);
            system ("cls");
        }
        cabecalho();
        printf("  ==================        \n");
        printf("  ||//             |        \n");
        printf("  ||/              o        \n");
        printf("  ||              /|\\      \n");
        printf("  ||              /         \n");
        printf("  ||                        \n");
        printf("  -------------------       \n");
    }
    if (chances == 2){
        char corda[5] = {'|', '/', '|', '\\', '|'};
        char cabeca[5][5] = {" o", "o", " o", "  o", " o"};
        char tronco[5][6] = {" /|\\", "/|\\", " /|\\", "  /|\\", " /|\\"};
        for (i=0; i<5; i++){
            cabecalho();
            printf("  ==================        \n");
            printf("  ||//             %c       \n", corda[i]);
            printf("  ||/             %s        \n", cabeca[i]);
            printf("  ||             %s         \n", tronco[i]);
            printf("  ||                        \n");
            printf("  ||                        \n");
            printf("  -------------------       \n");
            Sleep(100);
            system ("cls");
        }
        cabecalho();
        printf("  ==================        \n");
        printf("  ||//             |        \n");
        printf("  ||/              o        \n");
        printf("  ||              /|\\      \n");
        printf("  ||                        \n");
        printf("  ||                        \n");
        printf("  -------------------       \n");
    }
    if (chances == 3){
        char corda[5] = {'|', '/', '|', '\\', '|'};
        char cabeca[5][5] = {" o", "o", " o", "  o", " o"};
        char tronco[5][6] = {" /|", "/|", " /|", "  /|", " /|"};
        for (i=0; i<5; i++){
            cabecalho();
            printf("  ==================        \n");
            printf("  ||//             %c       \n", corda[i]);
            printf("  ||/             %s        \n", cabeca[i]);
            printf("  ||             %s         \n", tronco[i]);
            printf("  ||                        \n");
            printf("  ||                        \n");
            printf("  -------------------       \n");
            Sleep(100);
            system ("cls");
        }
        cabecalho();
        printf("  ==================        \n");
        printf("  ||//             |        \n");
        printf("  ||/              o        \n");
        printf("  ||              /|        \n");
        printf("  ||                        \n");
        printf("  ||                        \n");
        printf("  -------------------       \n");
    }
    if (chances == 4){
        char corda[5] = {'|', '/', '|', '\\', '|'};
        char cabeca[5][5] = {" o", "o", " o", "  o", " o"};
        char tronco[5][6] = {" /", "/", " /", "  /", " /"};
        for (i=0; i<5; i++){
            cabecalho();
            printf("  ==================        \n");
            printf("  ||//             %c       \n", corda[i]);
            printf("  ||/             %s        \n", cabeca[i]);
            printf("  ||             %s         \n", tronco[i]);
            printf("  ||                        \n");
            printf("  ||                        \n");
            printf("  -------------------       \n");
            Sleep(100);
            system ("cls");
        }
        cabecalho();
        printf("  ==================        \n");
        printf("  ||//             |        \n");
        printf("  ||/              o        \n");
        printf("  ||              /         \n");
        printf("  ||                        \n");
        printf("  ||                        \n");
        printf("  -------------------       \n");
    }
    if (chances == 5){
        char corda[5] = {'|', '/', '|', '\\', '|'};
        char cabeca[5][5] = {" o", "o", " o", "  o", " o"};
        for (i=0; i<5; i++){
            cabecalho();
            printf("  ==================        \n");
            printf("  ||//             %c       \n", corda[i]);
            printf("  ||/             %s        \n", cabeca[i]);
            printf("  ||                        \n");
            printf("  ||                        \n");
            printf("  ||                        \n");
            printf("  -------------------       \n");
            Sleep(100);
            system ("cls");
        }
        cabecalho();
        printf("  ==================        \n");
        printf("  ||//             |        \n");
        printf("  ||/              o        \n");
        printf("  ||                        \n");
        printf("  ||                        \n");
        printf("  ||                        \n");
        printf("  -------------------       \n");
    }
    if (chances == 6){
            cabecalho();
            printf("  ==================        \n");
            printf("  ||//             |        \n");
            printf("  ||/                       \n");
            printf("  ||                        \n");
            printf("  ||                        \n");
            printf("  ||                        \n");
            printf("  -------------------       \n");
        }
    }

void imprimir_certas(char letras_certas[], int max)
{
    int i;
    printf("\nPalavra: ");
    for (i = 0; i < max; i++)
    {
        printf("%c", letras_certas[i]);
    }
    printf("\n");
}

void imprimir_tentativas(char letras_tentadas[], int posicao)
{
    int i;
    printf("Tentativas: ");
    for (i = 0; i < posicao; i++)
    {
        printf("%c", letras_tentadas[i]);
    }
    printf("\n");
}

void capta_letra(char letra[]){
    printf("Informe uma letra: ");
    scanf(" %c", &letra[0]);
    letra[0] = tolower(letra[0]);
}

void verifica_letra(int *chances, int max, char palavra_misteriosa[], char letras_certas[], char letra[], int *vitoria, int posicao, char letras_tentadas[]){
    int i, deducao_chance = 0, cont_certas = 0;
    for (i = 0; i < max; i++){ // Laço para verificar se a letra informada pelo jogador está na palavra
        if (letra[0] == palavra_misteriosa[i]){
            if (letra[0] != letras_certas[i]){
                cont_certas++;
                if (cont_certas == 1){
                    *vitoria = *vitoria + 1; // Contador de acertos para verificar o fim do jogo
                }
            }
            letras_certas[i] = letra[0];
            deducao_chance++;
        }
    }
    if (deducao_chance == 0)
        *chances = *chances - 1;
    for (i = posicao; i < 30; i++){ // Arquivamento das tentativas
        letras_tentadas[i] = letra[0];
    }
}

void verifica_fim(int vitoria, int max)
{
    if (vitoria == max)
    { // Condição de verificação do fim do jogo
        printf("=====================================================\n");
        printf("                         ~#~                         \n");
        printf("                       PARABENS!                     \n");
        printf("               Voce acertou a palavra!               \n");
        printf("                     Fim de jogo                     \n");
        printf("                         ~#~                         \n");
        printf("=====================================================\n");
    }
    else
    {
        printf("=====================================================\n");
        printf("                         ~#~                         \n");
        printf("                     FIM DE JOGO                     \n");
        printf("             Voce nao acertou a palavra!             \n");
        printf("                         ~#~                         \n");
        printf("=====================================================\n");
    }
}

void imprime_tentativas_restantes(int chances)
{
    printf(" Voce tem %i tentativas\n", chances);
}