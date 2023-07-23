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
    //Declarações de vetores
    char palavra_misteriosa[] = {"camiseta"}, letra[1], letras_certas[sizeof(palavra_misteriosa)-1], letras_erradas[sizeof(palavra_misteriosa)-1];
    memset (letras_certas, '_', sizeof(palavra_misteriosa)-1); //Inicialização do vetor letras_certas com vários "_"

    //Declarações de variáveis
    int i, max = sizeof(palavra_misteriosa)-1, chances = sizeof(palavra_misteriosa)-1, vitoria = 1, controle, tentativas = 0;

    //Início do código
    do{//Laço de repetição para executar até o fim do jogo
        cabecalho();
        printf("Informe uma letra: "); //Solicitando a letra para o usuário
        scanf(" %c", &letra[0]); //Entrada da letra pelo jogador
        for (i=0; i<max; i++){ //Laço para verificar se a letra informada pelo jogador está na palavra
            controle = 0; //Inicialização da variável de controle de erros
            if (letra[0] == palavra_misteriosa[i]){ //Condição para achar a letra na palavra
                letras_certas[i] = letra[0]; //Caso encontre a letra na palavra, a letra certa é arquivada em outro Vetor, na mesma posicao encontrada
                vitoria++; //Contador de acertos para verificar o fim do jogo
            }
        }
        printf("Palavra: "); 
        for (i=0; i<max; i++){// Laço para imprimir as letras acertadas pelo usuário
            printf("%c", letras_certas[i]);
        }
        printf("\n");
        if (vitoria == sizeof(palavra_misteriosa)) // Condição de verificação do fim do jogo
            printf("Parabéns você acertou a palavra!\n"); //Mensagem de parabenização por ter vencido o jogo
    } while (chances != 0);
    printf("GAME-OVER\n"); // Mensagem de perda do jogo
    system ("pause");
    return 0;
}