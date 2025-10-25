#include <stdio.h>

#define tamanho 3 
int main (){
	
	float matriz [tamanho][tamanho] = {{0.0, 0.1, 0.2},{1.0, 1.1, 1.2},{2.0, 2.1, 2.2}};
	
	int i,j;
	for(i=0; i<tamanho;i++){
		for(j-0;j<tamanho; j++){
			printf("%.1f -", matriz[i][j]);
		}
		printf("\n");
	}
	return 0 
}
