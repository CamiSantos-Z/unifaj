#include <stdio.h>

void imprimir_informacoes(int vetor[5], int matriz[5][5]) {
    int i, j;

    printf("Array unidimensional:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    printf("Array bidimensional:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int vetor[5];
    int matriz[5][5];
    int i, j;

    printf("Digite 5 numeros para o array unidimensional:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++) {         
        for (j = 0; j < 5; j++) {     
            matriz[i][j] = vetor[j] * (i + 1);
        }
    }

    imprimir_informacoes(vetor, matriz);

    return 0;
}
