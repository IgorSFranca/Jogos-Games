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
#include <ctype.h> //Colocas as letras todas em minúsculas

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
    char palavra_misteriosa[] = {"camiseta"}, letra[1], letras_certas[sizeof(palavra_misteriosa)-1], letras_tentadas[sizeof(palavra_misteriosa)-1] = {""};
    memset (letras_certas, '_', sizeof(palavra_misteriosa)-1); //Inicialização do vetor letras_certas com vários "_"

    //Declarações de variáveis
    int i, max = sizeof(palavra_misteriosa)-1, chances = sizeof(palavra_misteriosa)-1, vitoria = 0, posicao = 0, tentativas = 0;

    //Início do código
    do{//Laço de repetição para executar até o fim do jogo
        cabecalho();
        printf("Palavra: "); 
        for (i=0; i<max; i++){// Laço para imprimir as letras acertadas pelo usuário
            printf("%c", letras_certas[i]);
        }
        printf("\n");
        printf("Tentativas: ");
        for (i=0; i<tentativas; i++){// Laço para imprimir as letras tentadas pelo usuário
            printf("%c", letras_tentadas[i]);
        }
        printf("\n");
        printf("Voce tem %i tentativas.\n", sizeof(palavra_misteriosa)-1-tentativas);//Mostrar a quantidade de tentativas que o usuario possui
        printf("Informe uma letra: "); //Solicitando a letra para o usuário
        scanf(" %c", &letra[0]); //Entrada da letra pelo jogador
        letra[0] = tolower(letra[0]);
        system ("cls"); //Limpar a tela depois de tentar adivinhar a letra
        for (i=0; i<max; i++){ //Laço para verificar se a letra informada pelo jogador está na palavra
            if (letra[0] == palavra_misteriosa[i]){ //Condição para achar a letra na palavra
                letras_certas[i] = letra[0]; //Caso encontre a letra na palavra, a letra certa é arquivada em outro Vetor, na mesma posicao encontrada
                vitoria++; //Contador de acertos para verificar o fim do jogo
            }
        }
        for (i=posicao; i<max; i++){ // Arquivamento das tentativas
            letras_tentadas[i] = letra[0];
        }
        posicao++; //Posicionamento da letra na exibição das tentativas
        tentativas++; //Contagem de tentativas
        if (vitoria == sizeof(palavra_misteriosa)-1) //Condição para dar um Break caso o usuário acerte a palavra antes de finalizar as tentativas
            break;
    } while (tentativas != sizeof(palavra_misteriosa)-1); //O loop se encerra quando encerram as tentativas
    if (vitoria == sizeof(palavra_misteriosa)-1){// Condição de verificação do fim do jogo
        printf("Parabens voce acertou a palavra!\n"); //Mensagem de parabenização por ter vencido o jogo
        printf("Fim de jogo!\n");
    } 
    else{
        printf("Voce nao conseguiu acertar a palavra.\n");//Mensagem por ter perdido o jogo
        printf("Fim de jogo!\n");
    }
    system ("pause");
    return 0;
}