#include <stdio.h> //biblioteca padr�o para entrada e sa�da de dados

int main() {
	int numeros[20]; //array para armazenar os 20 n�meros pares
	int i = 0; //vari�vel de controle para contar quantos n�meros j� foram digitados
	int numero; //vari�vel para armazenar temporariamente o n�mero digitado
	int soma = 0; //vari�vel para acumular a soma dos n�meros pares

	//loop que continua at� que os 20 n�meros pares sejam digitados
	while (i < 20) {
		printf("digite o %do numero par: ", i + 1); //solicita ao usu�rio que digite um n�mero
		scanf("%d", &numero); //l� o n�mero digitado

		//verifica se o n�mero � par
		if (numero % 2 == 0) {
			numeros[i] = numero; //armazena o n�mero em um array (array -> uma vari�vel que possui v�rios valores)
			soma += numero; //adiciona o n�mero � soma total
			i++; //incrementa o contador para passar ao pr�ximo n�mero
		} else {
			//se o n�mero n�o for par, exibe uma mensagem de erro
			printf("numero digitado nao eh par\n");
		}
	}

	//calcular a m�dia dos n�meros digitados
	float media = soma / 20.0; //usa 20.0 para garantir que o resultado seja float
	printf("a media dos numeros digitados eh: %.2f\n", media); //exibe a m�dia com duas casas decimais

	return 0; //finaliza o programa
}
