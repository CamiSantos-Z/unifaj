#include <stdio.h> //biblioteca

//definindo a estrutura chamada DataNascimento
struct DataNascimento {
	int dia;    //dia
	int mes;    //mes
	int ano;    //ano
	int hora;   //hora
	int minuto; //minuto
};

int main() {
	struct DataNascimento data; //criando uma variável do tipo DataNascimento
	
	//pedindo para o usuário digitar os dados
	printf("digite o dia: "); //pede o dia 
	scanf("%d", &data.dia);   //le dia 
	
	printf("digite o mes: "); //pede o mes
	scanf("%d", &data.mes);   //le mes
	
	printf("digite o ano: "); //pede ano
	scanf("%d", &data.ano);   //le ano 
	
	printf("digite a hora: "); //pede hora
	scanf("%d", &data.hora);  //le hora
	
	printf("digite o minuto: "); //pede minuto
	scanf("%d", &data.minuto);  //le minuto
	
	//imprime os dados após todos serem digitados
	//se o dia ou mês forem menores que 10, imprime com zero à esquerda
	printf("Data formatada:\n"); //mensagem antes da impressão

	printf("%02d/%02d/%d %02d:%02d\n", data.dia, data.mes, data.ano, data.hora, data.minuto);
	//%02d imprime com dois dígitos, adicionando zero à esquerda se necessário
	
	return 0; //finaliza o programa
}
