#include <stdio.h> //biblioteca padrão para entrada e saída de dados

int main() {
	int numeros[20]; //array para armazenar os 20 números pares
	int i = 0; //variável de controle para contar quantos números já foram digitados
	int numero; //variável para armazenar temporariamente o número digitado
	int soma = 0; //variável para acumular a soma dos números pares

	//loop que continua até que os 20 números pares sejam digitados
	while (i < 20) {
		printf("digite o %do numero par: ", i + 1); //solicita ao usuário que digite um número
		scanf("%d", &numero); //lê o número digitado

		//verifica se o número é par
		if (numero % 2 == 0) {
			numeros[i] = numero; //armazena o número em um array (array -> uma variável que possui vários valores)
			soma += numero; //adiciona o número à soma total
			i++; //incrementa o contador para passar ao próximo número
		} else {
			//se o número não for par, exibe uma mensagem de erro
			printf("numero digitado nao eh par\n");
		}
	}

	//calcular a média dos números digitados
	float media = soma / 20.0; //usa 20.0 para garantir que o resultado seja float
	printf("a media dos numeros digitados eh: %.2f\n", media); //exibe a média com duas casas decimais

	return 0; //finaliza o programa
}
