#include <stdio.h>//blilioteca

int main(){
	int a, b, soma;//3variaveis inteiras 
	int *p1	, *p2 , *p3;//ponteiros para cada uma das palavras(ponteiros->é uma variável) a diferença para uma variavel normal é o armazenamento em cada uma 
	
	p1 = &a;//ponteiro p1 aponta para a variavel a 
	p2 = &b;//ponteiro p2 aponta para a variavel b 
	p3 = &soma;//pronteiro p3 aponta para a varival soma 
	
	//pedir para o usuario digitar 	dois numeros
	printf("digite o primeiro numero: ");//pede o primeiro numero
	scanf("%d",p1);//guarda o valor digitado na variável a usando o ponteiro
	
	printf("digite o segundo numero: ");//solicite o segundo numero 
	scanf("%d",p2);//guarda o valor digitado na variável b usando o ponteiro
	
	*p3 = *p1 + *p2; //soma o p1 e o p2 
	
	//imprime a conta no formato pedido 
	printf("%d + %d = %d\n", *p1, *p2, *p3);//exibe os valores usando os ponteiros 
	
	return 0;//finaliza 
}
