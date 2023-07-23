/*
 * Nome do arquivo: jogo_da_forca.c
 * Descrição: Jogo info-juvenil da foca, onde o usuário tenta adivinhar a palavra escondida. A cada tentativa errada, o usuário 
 * perde um ponto de vida.
 * Autor: Igor França
 * Data de criação: 22 de julho de 2023
 */

#include <stdio.h> //Biblioteca padrão
#include <stdlib.h> //Biblioteca padrão
#include <string.h> //Biblioteca para manipulação de strings

void cabecalho(){
    printf("-----------------------------\n");
    printf("        JOGO DA FORCA\n");
    printf("-----------------------------\n");
    printf("  ==================\n");
    printf("  ||//             |\n");
    printf("  ||/              O\n");
    printf("  ||              /|\\ \n");
    printf("  ||              / \\ \n");
    printf("  ||\n");
    printf("  -------------------\n");

}

int main (){
    char palavra_misteriosa[] = {"camiseta"}, letra[1];
    int i, max = sizeof(palavra_misteriosa);
    do{
        cabecalho();
        printf("Diga uma letra: ");
        scanf(" %c", &letra[0]);
        for (i=0; i<max; i++){


        }
    }
    system ("pause");
    return 0;
}