/*
 * Nome do arquivo: jogo-da-velha.c
 * Descrição: Jogo infanto-juvenil chamado Jogo da velha. O objetivo do jogo é marcar três quadrados consecutivos na horizontal, vertical ou
 * transversal, antes que o jogador adversário faça o mesmo. 
 * Autor: Igor França
 * Data de criação: 31 de outubro 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void header();
void header_options();
void header_menu();
void select_option(int*);
void create_players(char player1[], char player2[]);
void inicial_animation();
void game_animation(char game[3][3]);
void gameplay(int move_player1[][2], int move_player2[][2], char player1[], char player2[], char game[3][3]);
void print_players(char player1[], char player2[]);

int main (){
    int option;
    char player1[] = {"Player 1"};
    char player2[] = {"Player 2"};
    char game[3][3] = {
        {'_','_','_'},
        {'_','_','_'},
        {'_','_','_'}
    }; //Preenche o jogo de acordo com os movimentos
    int move_player1[4][2]; //Arquiva a linha e coluna jogada
    int move_player2[4][2]; //Arquiva a linha e coluna jogada

    do{
        system ("cls");
        header();
        header_menu();
        select_option(&option);
        switch (option){
            case 1:
                inicial_animation();
                gameplay(move_player1, move_player2, player1, player2, game);
                break;
            case 2:
                system ("cls");
                header();
                header_options();
                select_option(&option);
                switch (option){
                    case 1: 
                        create_players(player1, player2);
                    case 2: 
                        break;
                }
                break;
            case 0:
                break;
        }
    } while (option != 0);
    return 0;
}

void header(){
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("            ~ HASH ~             \n");
    printf("              ~#~                \n");
    printf("=================================\n");
}

void header_options(){
    printf("                                 \n");
    printf("           ~ OPTIONS ~           \n");
    printf("                                 \n");
    printf(" [1] Create players              \n");
    printf(" [2] Return                      \n");
    printf("                                 \n");
    printf("=================================\n");
}

void header_menu(){
    printf("                                 \n");
    printf("            ~ MENU ~             \n");
    printf("                                 \n");
    printf(" [1] Start                       \n");
    printf(" [2] Options                     \n");
    printf(" [0] Exit                        \n");
    printf("                                 \n");
    printf("=================================\n");
}

void select_option(int *option){
    int temp;
    printf("Insert option: ");
    scanf("%i", &temp);
    *option = temp;
}

void create_players(char player1[], char player2[]){
    char resp;
    do{
        system("cls");
        header();
        printf("                                 \n");
        printf("          INSERT PLAYERS         \n");
        printf("First Player name: ");
        scanf(" %s", player1);
        printf("Confirm [y/n]: ");
        scanf(" %c", &resp);
    } while (resp != 'y');
    do{
        system("cls");
        header();
        printf("                                 \n");
        printf("          INSERT PLAYERS         \n");
        printf("First Player: Concluded          \n");
        printf("\nSecond Player name: ");
        scanf(" %s", player2);
        printf("Confirm [y/n]: ");
        scanf(" %c", &resp);
    } while (resp != 'y');
}

void inicial_animation(){
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~                        \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~                        \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ J                      \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JO                     \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JOG                    \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JOGO                   \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JOGO                   \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JOGO D                 \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JOGO DA                \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JOGO DA                \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JOGO DA V              \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JOGO DA VE             \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JOGO DA VEL            \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JOGO DA VELH           \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JOGO DA VELHA          \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100); system("cls");
    printf("=================================\n");
    printf("              ~#~                \n");
    printf("        ~ JOGO DA VELHA ~        \n");
    printf("              ~#~                \n");
    printf("=================================\n");
    Sleep(100);

}

void print_players(char player1[], char player2[]){
    printf("                                 \n");
    printf(" Player one: %s\n", player1);
    printf(" Player two: %s\n", player2);
    printf("                                 \n");
    printf("=================================\n");
}

void game_animation(char game[3][3]){
    printf("\n          |           |          \n");
    printf("     %c    |     %c     |     %c   \n", game[0][0], game[0][1], game[0][2]);
    printf("__________|___________|__________\n");
    printf("          |           |          \n");
    printf("     %c    |     %c     |     %c   \n", game[1][0], game[1][1], game[1][2]);
    printf("__________|___________|__________\n");
    printf("          |           |          \n");
    printf("     %c    |     %c     |     %c   \n", game[2][0], game[2][1], game[2][2]);
    printf("          |           |          \n\n");
}

void gameplay(int move_player1[4][2], int move_player2[4][2], char player1[], char player2[], char game[3][3]){
    int round;

    for (round=0; round<4; round++){//iteração das rodadas
        system("cls");
        header();
        print_players(player1, player2);
        game_animation(game);
        printf("                ~~~           \n");
        printf("             Round %i\n", round+1);
        printf("            %s \n", player1);
        printf("Line: ");
        scanf("%i", &move_player1[round][0]);
        printf("Column: ");
        scanf("%i", &move_player1[round][1]);

        printf("\n            %s \n", player2);
        printf("Line: ");
        scanf("%i", &move_player2[round][0]);
        printf("Column: ");
        scanf("%i", &move_player2[round][1]);
    }
}