#include <stdio.h> //biblioteca padr�o para entrada e sa�da de dados

int main(){
	int matriz[4][5]; //array bidimensional 4x5 para armazenar os valores
	int i, j; //vari�veis auxiliares para os loops
	int numero; //vari�vel para armazenar temporariamente o n�mero digitado
	
	//pedir para o usu�rio digitar os 5 primeiros n�meros (linha 0)
	for (j = 0; j < 5; j++){
		printf("digite o numero para a primeira linha: ", j + 1); //pedindo para colocar o numero
		scanf("%d", &numero); //le o numero digitado
		matriz[0][j] = numero; //armazena na primeira linha 
	}
	//preencher a segunda linha com o dobro dos valores da primeira linha 
	for (j = 0; j < 5; j++){
		matriz[1][j] = matriz[0][j] * 2; //multiplica por 2 e armazena na segunda linha
	}
	//pedir para o usu�rio digitar os 5 pr�ximos n�meros (linha 2)
	for (j = 0; j < 5; j++){
		printf("digite o numero para a terceira linha: ", j + 6); //pedindo para colocar o numero
		scanf("%d", &numero); //l� o n�mero digitado
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
			printf("%d ", matriz[i][j]); //imprime o valor da posi��o
		}
		printf("\n"); //quebra de linha ap�s cada linha da matriz
	}
	return 0; //finaliza o programa
}
