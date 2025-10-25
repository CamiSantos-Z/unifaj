#include <stdio.h> //biblioteca padrão para entrada e saída de dados

int main(){
	int matriz[4][5]; //array bidimensional 4x5 para armazenar os valores
	int i, j; //variáveis auxiliares para os loops
	int numero; //variável para armazenar temporariamente o número digitado
	
	//pedir para o usuário digitar os 5 primeiros números (linha 0)
	for (j = 0; j < 5; j++){
		printf("digite o numero para a primeira linha: ", j + 1); //pedindo para colocar o numero
		scanf("%d", &numero); //le o numero digitado
		matriz[0][j] = numero; //armazena na primeira linha 
	}
	//preencher a segunda linha com o dobro dos valores da primeira linha 
	for (j = 0; j < 5; j++){
		matriz[1][j] = matriz[0][j] * 2; //multiplica por 2 e armazena na segunda linha
	}
	//pedir para o usuário digitar os 5 próximos números (linha 2)
	for (j = 0; j < 5; j++){
		printf("digite o numero para a terceira linha: ", j + 6); //pedindo para colocar o numero
		scanf("%d", &numero); //lê o número digitado
		matriz[2][j] = numero; //armazena na terceira linha
	}
	//preencher a quarta linha com a soma das 3 linhas anteriores
	for (j = 0; j < 5; j++){
		matriz[3][j] = matriz[0][j] + matriz[1][j] + matriz[2][j]; //soma os valores das 3 linhas
	}
	//imprimir a matriz criada
	printf("\nimprimindo a matriz:\n"); //mensagem antes da matriz
	for (i = 0; i < 4; i++){ //loop pelas linhas
		for (j = 0; j < 5; j++){ //loop pelas colunas
			printf("%d ", matriz[i][j]); //imprime o valor da posição
		}
		printf("\n"); //quebra de linha após cada linha da matriz
	}
	return 0; //finaliza o programa
}
