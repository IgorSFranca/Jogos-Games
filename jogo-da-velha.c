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
void inicial_animation(char player1[], char player2[]);
void game_animation();

int main (){
    int option;
    char player1[] = {"Player 1"};
    char player2[] = {"Player 2"};

    do{
        system ("cls");
        header();
        header_menu();
        select_option(&option);
        switch (option){
            case 1:
                inicial_animation(player1, player2);
                game_animation();
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

void inicial_animation(char player1[], char player2[]){
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
    printf("                                 \n");
    printf("                                 \n");
    printf(" Player one: %s\n", player1);
    printf(" Player two: %s\n", player2);
    printf("                                 \n");
    printf("=================================\n");
}

void game_animation(){
    
}