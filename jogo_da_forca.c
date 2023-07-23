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
    char palavra_misteriosa[] = {"camiseta"}, letra[1], letras_certas[sizeof(palavra_misteriosa)], letras_erradas[sizeof(palavra_misteriosa)];
    memset (letras_certas, '_', sizeof(palavra_misteriosa)); //Inicialização do vetor letras_certas com vários "_"

    //Declarações de variáveis
    int i, max = sizeof(palavra_misteriosa), tentativas = sizeof(palavra_misteriosa), vitoria = 1, controle = sizeof(palavra_misteriosa);

    //Início do código
    do{//Laço de repetição para executar até o fim do jogo
        cabecalho();
        printf("Informe uma letra: "); //Solicitando a letra para o usuário
        scanf(" %c", &letra[0]); //Entrada da letra pelo jogador
        for (i=0; i<max; i++){ //Laço para verificar se a letra informada pelo jogador está na palavra
            if (letra[0] == palavra_misteriosa[i]){ //Condição para achar a letra na palavra
                letras_certas[i] = letra[0]; //Caso encontre a letra na palavra, a letra certa é arquivada em outro Vetor, na mesma posicao encontrada
                vitoria++; //Contador de acertos para verificar o fim do jogo
            }
        }
        if (controle  ){
                tentativas--; //Contador de erros para verificar o fim do jogo
                letras_erradas[i] = letra[0]; //Arquivamento das letras erradas que foram tentadas
                if (tentativas > 0) //condição para acertar o plural da palavra CHANCES
                    printf("Voce possui mais %i chances.\n", tentativas); //Mensagem da quantidade de chances que ainda restam
                else
                    printf("Voce possui somente mais %i chance.\n", tentativas); //Mensagem da quantidade de chances que ainda restam
            }

        printf("Palavra: "); 
        for (i=0; i<max; i++){// Laço para imprimir as letras acertadas pelo usuário
            printf("%c", letras_certas[i]);
        }
        printf("\n");
        printf("Letras erradas: "); 
        for (i=0; i<max; i++){// Laço para imprimir as letras erradas pelo usuário
            printf("%c", letras_erradas[i]);
        }
        printf("\n");
        if (vitoria == sizeof(palavra_misteriosa)) // Condição de verificação do fim do jogo
            printf("Parabéns você acertou a palavra!\n"); //Mensagem de parabenização por ter vencido o jogo
    } while (tentativas != 0);
    printf("GAME-OVER\n"); // Mensagem de perda do jogo
    system ("pause");
    return 0;
}