/*
 * Nome do arquivo: jogo-de-calcular.c
 * Descrição: Aplicação que tem o objetivo de desenvolver e estimular o cálculo direto do seu usuário. O jogador tem a opção de escolher níveis de jogo
 * (fácil, médio e difícil) e se quer trabalhar com as operações básicas individualmente (adição, subtração, multiplicação e divisão).
 * Autor: Igor França
 * Data de criação: 21 de outubro de 2023
 * 
 * 
 * 01. Função ranking
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void cabecalho();
void menu_inicial();
void menu_dificuldade();
void menu_operacao();
void encerramento();
void mostrar_configuracoes(int, int, int);
void resultado_final(int, int);
int jogo_geral(int, int, int);
int jogo_adicao(int, int, int);
int jogo_subtracao(int, int, int);
int jogo_multiplicacao(int, int, int);
int jogo_divisao(int, int, int);
int opcao();
int selecionar_dificuldade();
int selecionar_operacao();
int quantidade_rodadas();
int fnumero_aleatorio(int);

int main (){
    srand(time(NULL)); //inicialização da semente
    
    int opcao_inicial;
    int opcao_dificuldade = 0;
    int opcao_operacao = 0;
    int qtd_rodadas = 0;
    int resultado;

    do{
        system ("cls");
        cabecalho();
        menu_inicial();
        opcao_inicial = opcao();
        switch (opcao_inicial){
            case 1:
                if (opcao_operacao == 1){
                    resultado = jogo_adicao(opcao_dificuldade, opcao_operacao, qtd_rodadas);
                    resultado_final(resultado, opcao_dificuldade);
                    break;
                }
                else if (opcao_operacao == 2){
                    resultado = jogo_subtracao(opcao_dificuldade, opcao_operacao, qtd_rodadas);
                    resultado_final(resultado, opcao_dificuldade);
                    break;
                }
                else if (opcao_operacao == 3){
                    resultado = jogo_multiplicacao(opcao_dificuldade, opcao_operacao, qtd_rodadas);
                    resultado_final(resultado, opcao_dificuldade);
                    break;
                }
                else if (opcao_operacao == 4){
                    resultado = jogo_divisao(opcao_dificuldade, opcao_operacao, qtd_rodadas);
                    break;
                }
            case 2: 
                opcao_dificuldade = selecionar_dificuldade();
                break;
            case 3:
                opcao_operacao = selecionar_operacao();
                break;
            case 4: 
                qtd_rodadas = quantidade_rodadas();
                break;
            case 5:
                mostrar_configuracoes(opcao_dificuldade, opcao_operacao, qtd_rodadas);
                system ("pause");
                break;
            case 6:
                encerramento();
                break;
            default:
                printf("Opcao nao encontrada.\n");
                printf("Informe novamente.\n");
                system ("pause");
                break;
        }
    } while (opcao_inicial != 6);

    return 0;
}

void cabecalho(){
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                  ~ # ~                \n");
    printf("       ~ #  JOGO DE CALCULAR # ~       \n");
    printf("                  ~ # ~                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void menu_inicial(){
    printf("              MENU PRINCIPAL           \n");
    printf(" [1] INICIAR                           \n");
    printf(" [2] SELECIONAR DIFICULDADE            \n");
    printf(" [3] SELECIONAR OPERACAO MATEMATICA    \n");
    printf(" [4] SELECIONAR QUANTIDADE DE RODADAS  \n");
    printf(" [5] MOSTRAR CONFIGURACOES             \n");
    printf(" [6] ENCERRAR                          \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void menu_dificuldade(){
    printf("               DIFICULDADE             \n");
    printf(" [1] FACIL                             \n");
    printf(" [2] MEDIO                             \n");
    printf(" [3] DIFICIL                           \n");
    printf(" [4] VOLTAR                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void menu_operacao(){
    printf("                OPERACAO               \n");
    printf(" [1] ADICAO                            \n");
    printf(" [2] SUBTRACAO                         \n");
    printf(" [3] MULTIPLICACAO                     \n");
    printf(" [4] DIVISAO                           \n");
    printf(" [5] VOLTAR                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
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
                printf("Opcao invalida\n");
                system ("pause");
                break;
        }
        if (opcao >=1 && opcao <= 4){
            printf("Deseja confirmar a opcao? [1 SIM][0 NAO] ");
            scanf("%i", &confirmacao);
        }
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

int selecionar_operacao(){
    int opcao;
    int confirmacao = 0;
    do{
        system ("cls");
        cabecalho();
        menu_operacao();

        printf("Informe a operacao que deseja treinar: ");
        scanf("%i", &opcao);
        switch (opcao){
            case 1:
                printf("Operacao escolhida: ADICAO\n");
                break;
            case 2: 
                printf("Operacao escolhida: SUBTRACAO\n");
                break;
            case 3: 
                printf("Operacao escolhida: MULTIPLICACAO\n");
                break;
            case 4:
                printf("Operacao escolhida: DIVISAO\n");
                break;
            case 5:
                printf("VOLTAR\n");
                break;
            default:
                printf("Opcao invalida\n");
                system("pause");
                break;
        }

        if (opcao >=1 && opcao <= 4){
            printf("Deseja confirmar a opcao? [1 SIM][0 NAO] ");
            scanf("%i", &confirmacao);
        }
    } while (confirmacao != 1);

    return opcao;
}

void mostrar_configuracoes(int opcao_dificuldade, int opcao_operacao, int qtd_rodadas){
    system ("cls");
    cabecalho();
    printf("      CONFIGURACOES ARMAZENADAS    \n");

    printf(" DIFICULDADE: ");
    if (opcao_dificuldade == 0)
        printf(" NAO SELECIONADA\n");
    else if (opcao_dificuldade == 1)
        printf("FACIL\n");
    else if (opcao_dificuldade == 2)
        printf("MEDIO\n");
    else if (opcao_dificuldade == 3)
        printf("DIFICIL\n");

    printf(" OPERACAO: ");
    if (opcao_operacao == 0)
        printf(" NAO SELECIONADA\n");
    else if (opcao_operacao == 1)
        printf("ADICAO\n");
    else if (opcao_operacao == 2)
        printf("SUBTRACAO\n");
    else if (opcao_operacao == 3)
        printf("MULTIPLICACAO\n");
    else if (opcao_operacao == 4)
        printf("DIVISAO\n");

    printf(" RODADAS: ");
    if (qtd_rodadas == 0)
        printf(" NAO SELECIONADA\n");
    else
        printf("%i\n", qtd_rodadas);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

int quantidade_rodadas(){
    int rodadas;
    int confirmacao = 0;

    system ("cls");
    cabecalho();
    do{
        printf("DESEJA QUANTAS RODADAS DE PERGUNTAS? ");
        scanf("%i", &rodadas);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

        printf("Deseja confirmar a opcao? [1 SIM][0 NAO] ");
        scanf("%i", &confirmacao);
    } while (confirmacao != 1);

    return rodadas;
}

int jogo_adicao(int opcao_dificuldade, int opcao_operacao, int qtd_rodadas){
    int i;
    int resposta;
    int numero_aleatorio;
    int soma = 0;

    system("cls");
    cabecalho();

    //validação se todas as configurações estão informadas
    if (opcao_dificuldade == 0 || opcao_operacao == 0 || qtd_rodadas == 0)
        return -1;

    for (i=0; i<qtd_rodadas-1; i++){
        if (i==0){
            printf("Quanto eh %i ", numero_aleatorio=fnumero_aleatorio(opcao_dificuldade));
            soma+= numero_aleatorio;
            printf("+ %i? ", numero_aleatorio=fnumero_aleatorio(opcao_dificuldade));
            soma+= numero_aleatorio;
            scanf("%i", &resposta);
        }
        if (i>=1)
            soma+=numero_aleatorio;
        if (resposta == soma)
            printf("Parabens!\n");
        else if (resposta != soma)
            return -2;
        printf("Agora, o resultado + %i. Quanto fica? ", numero_aleatorio=fnumero_aleatorio(opcao_dificuldade));
        scanf("%i", &resposta);
        if (i==qtd_rodadas-2)
            return 0;
    }
}

int fnumero_aleatorio(int opcao_dificuldade){
    //intervalo
    int min = 1;
    int max;
    int numero_aleatorio;

    if (opcao_dificuldade == 1){
        max = 10;
    }
    else if (opcao_dificuldade == 2){
        max = 50;
    }
    else if (opcao_dificuldade == 3){
        max = 1000;
    }

    Sleep(1); //gerando um atraso na geração no número

    numero_aleatorio = rand()%(max-min + 1) + min; //Geração do númrero no intervalo

    return numero_aleatorio;
}

void resultado_final(int resultado, int opcao_dificuldade){
    if (resultado == 0){
        system ("cls");
        cabecalho();
        if (opcao_dificuldade == 1){
            printf("\n");
            printf("PARABENS! VOCE VENCEU!\n");
            printf("Mas tambem, tava mamao com acucar neh!\n");
            printf("Voce CONSEGUE mais do que isso!\n");
            system("pause");
        }
        else if (opcao_dificuldade == 2){
            printf("\n");
            printf("PARABENS! VOCE VENCEU!\n");
            printf("Eh, este estava um pouquinho mais dificil.\n");
            printf("Agora, se desafie de verdade!\n");
            system ("pause");
        }
        else if (opcao_dificuldade == 3){
            printf("\n");
            printf("PARABENS! CALCULADORA HUMANA!\n");
            printf("VOCE EH O BICHAO MESMO!\n");
            printf("Ja pode postar o print no status do Instagram.\n");
            system ("pause");
        }
    }
    if (resultado == -1){
            printf("Existem configuracoes faltantes!\n");
            printf("Inclua ou encerre o jogo\n");
            system ("pause");
    }
    if (resultado == -2){
        system ("cls");
        cabecalho();
        printf("Nao foi dessa vez, nao desista, tente de novo!\n");
        system ("pause");

    }
}

int jogo_subtracao(int opcao_dificuldade, int opcao_operacao, int qtd_rodadas){
    int i;
    int resposta;
    int numero_aleatorio;
    int total = 0;

    system("cls");
    cabecalho();

    //validação se todas as configurações estão informadas
    if (opcao_dificuldade == 0 || opcao_operacao == 0 || qtd_rodadas == 0)
        return -1;

    for (i=0; i<qtd_rodadas-1; i++){
        if (i==0){
            printf("Quanto eh %i ", numero_aleatorio=fnumero_aleatorio(opcao_dificuldade));
            total+= numero_aleatorio;
            printf("- %i? ", numero_aleatorio=fnumero_aleatorio(opcao_dificuldade));
            total-= numero_aleatorio;
            scanf("%i", &resposta);
        }
        if (i>=1)
            total-=numero_aleatorio;
        if (resposta == total)
            printf("Parabens!\n");
        else if (resposta != total)
            return -2;
        printf("Agora, o resultado - %i. Quanto fica? ", numero_aleatorio=fnumero_aleatorio(opcao_dificuldade));
        scanf("%i", &resposta);
        if (i==qtd_rodadas-2)
            return 0;
    }
}

int jogo_multiplicacao(int opcao_dificuldade, int opcao_operacao, int qtd_rodadas){
    int i;
    int resposta;
    int numero_aleatorio;
    int total = 0;

    system("cls");
    cabecalho();

    //validação se todas as configurações estão informadas
    if (opcao_dificuldade == 0 || opcao_operacao == 0 || qtd_rodadas == 0)
        return -1;

    for (i=0; i<qtd_rodadas-1; i++){
        if (i==0){
            printf("Quanto eh %i ", numero_aleatorio=fnumero_aleatorio(opcao_dificuldade));
            total+= numero_aleatorio;
            printf("* %i? ", numero_aleatorio=fnumero_aleatorio(opcao_dificuldade));
            total*= numero_aleatorio;
            scanf("%i", &resposta);
        }
        if (i>=1)
            total*=numero_aleatorio;
        if (resposta == total)
            printf("Parabens!\n");
        else if (resposta != total)
            return -2;
        printf("Agora, o resultado * %i. Quanto fica? ", numero_aleatorio=fnumero_aleatorio(opcao_dificuldade));
        scanf("%i", &resposta);
        if (i==qtd_rodadas-2)
            return 0;
    }
}

int jogo_divisao(int opcao_dificuldade, int opcao_operacao, int qtd_rodadas){
    int i;
    int resposta;
    int numero_aleatorio1;
    int numero_aleatorio2;
    int total = 0;

    numero_aleatorio1 = fnumero_aleatorio(opcao_dificuldade);
    numero_aleatorio2 = fnumero_aleatorio(opcao_dificuldade);

    // verificação se o n1 é maior que n2, para que a divisão não dê fracionada.
    while (numero_aleatorio1 > numero_aleatorio2){
        numero_aleatorio1 = fnumero_aleatorio(opcao_dificuldade);
    }

    // verificação se a divisão é inteira, por que se não for, não vai ser possível acertar
    while (numero_aleatorio2%numero_aleatorio1 != 0){
        numero_aleatorio2 = fnumero_aleatorio(opcao_dificuldade);
    }

    system("cls");
    cabecalho();

    //validação se todas as configurações estão informadas
    if (opcao_dificuldade == 0 || opcao_operacao == 0 || qtd_rodadas == 0)
        return -1;

    for (i=0; i<qtd_rodadas-1; i++){
        if (i==0){
            printf("Quanto eh %i ", numero_aleatorio2);
            printf("/ %i? ", numero_aleatorio1);
            scanf("%i", &resposta);
            total = (numero_aleatorio2/numero_aleatorio1);
        }
        if (i>=1)
            total/=numero_aleatorio2;
        if (resposta == total)
            printf("Parabens!\n");
        else if (resposta != total)
            return -2;
        printf("Agora, o resultado / %i. Quanto fica? ", numero_aleatorio2=fnumero_aleatorio(opcao_dificuldade));
        scanf("%i", &resposta);
        if (i==qtd_rodadas-2)
            return 0;
    }
}