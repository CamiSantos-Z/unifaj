#include <stdio.h>  //biblioteca padrão para entrada e saída de dados
#include <string.h> //biblioteca para manipulação de strings

//definindo a estrutura chamada DataNascimento
struct DataNascimento {
    int dia;    //dia
    int mes;    //mês
    int ano;    //ano
    int hora;   //hora
    int minuto; //minuto
};

//definindo a estrutura chamada NomeCompleto
struct NomeCompleto {
    char nome[50];      //nome com até 50 caracteres
    char sobrenome[100]; //sobrenome com até 100 caracteres
};

//definindo a estrutura chamada Pessoa que contém NomeCompleto e DataNascimento
struct Pessoa {
    struct NomeCompleto nomeCompleto;     //estrutura com nome e sobrenome
    struct DataNascimento dataNascimento; //estrutura com data de nascimento
};

int main() {
    struct Pessoa pessoas[5]; //array unidimensional para armazenar 5 pessoas
    int i; //variável de controle para o loop

    //loop para pedir os dados das 5 pessoas
    for (i = 0; i < 5; i++) {
        printf("digite os dados da Pessoa %d\n", i + 1); //identifica a pessoa

        //pedindo nome
        printf("nome: "); //solicita o nome
        scanf(" %[^\n]", pessoas[i].nomeCompleto.nome); //lê o nome com espaços

        //pedindo sobrenome
        printf("sobrenome: "); //solicita o sobrenome
        scanf(" %[^\n]", pessoas[i].nomeCompleto.sobrenome); //lê o sobrenome com espaços

        //pedindo data de nascimento
        printf("dia: "); //solicita o dia
        scanf("%d", &pessoas[i].dataNascimento.dia); //le o dia

        printf("mes: "); //solicita o mês
        scanf("%d", &pessoas[i].dataNascimento.mes); //le o mês

        printf("ano: "); //solicita o ano
        scanf("%d", &pessoas[i].dataNascimento.ano); //le o ano

        printf("hora: "); //solicita a hora
        scanf("%d", &pessoas[i].dataNascimento.hora); //le a hora

        printf("minuto: "); //solicita o minuto
        scanf("%d", &pessoas[i].dataNascimento.minuto); //le o minuto

        printf("\n"); //pula linha após cada pessoa
    }

    //imprimindo os dados das 5 pessoas
    for (i = 0; i < 5; i++) {
        printf("Pessoa %d\n", i + 1); //identifica a pessoa

        //imprime nome e sobrenome
        printf("nome: %s\n", pessoas[i].nomeCompleto.nome); //exibe o nome
        printf("sobrenome: %s\n", pessoas[i].nomeCompleto.sobrenome); //exibe o sobrenome

        //imprime data de nascimento formatada
        printf("Data de nascimento: %02d/%02d/%d %02d:%02d\n",
    pessoas[i].dataNascimento.dia,
    pessoas[i].dataNascimento.mes,
    pessoas[i].dataNascimento.ano,
    pessoas[i].dataNascimento.hora,
    pessoas[i].dataNascimento.minuto);


        printf("\n"); //pula linha entre pessoas
    }

    return 0; //finaliza 
}
