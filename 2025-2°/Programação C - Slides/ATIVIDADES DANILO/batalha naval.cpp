#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define NUM_BARCO 5

void imprimirTabuleiro(char tabuleiro[TAM][TAM]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void posicionarBarcos(int barcos[NUM_BARCO][2]) {
    int count = 0;
    while (count < NUM_BARCO) {
        int linha = rand() % TAM;
        int coluna = rand() % TAM;
        int repetido = 0;

        for (int i = 0; i < count; i++) {
            if (barcos[i][0] == linha && barcos[i][1] == coluna) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            barcos[count][0] = linha;
            barcos[count][1] = coluna;
            count++;
        }
    }
}

int verificarAcerto(int linha, int coluna, int barcos[NUM_BARCO][2]) {
    for (int i = 0; i < NUM_BARCO; i++) {
        if (barcos[i][0] == linha && barcos[i][1] == coluna) {
            return 1;
        }
    }
    return 0;
}

int jaAtirou(int linha, int coluna, char tabuleiro[TAM][TAM]) {
    return tabuleiro[linha][coluna] != '_';
}

void jogar() {
    char tabuleiro[TAM][TAM];
    int barcos[NUM_BARCO][2];
    int acertos = 0;
    int tiros = 0;

    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = '_';

    posicionarBarcos(barcos);
    imprimirTabuleiro(tabuleiro);

    while (acertos < NUM_BARCO) {
        int linha, coluna;
        printf("Digite linha (0-4): ");
        scanf("%d", &linha);
        printf("Digite coluna (0-4): ");
        scanf("%d", &coluna);

        if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM) {
            printf("Coordenadas inválidas!\n");
            continue;
        }

        if (jaAtirou(linha, coluna, tabuleiro)) {
            printf("Você já atirou nessa posição!\n");
            continue;
        }

        tiros++;

        if (verificarAcerto(linha, coluna, barcos)) {
            tabuleiro[linha][coluna] = 'x';
            acertos++;
            printf("Acertou um barco!\n");
        } else {
            tabuleiro[linha][coluna] = 'o';
            printf("Errou!\n");
        }

        imprimirTabuleiro(tabuleiro);
    }

    printf("Todos os barcos foram destruídos!\n");
    printf("Posições não atingidas: %d\n\n", TAM * TAM - tiros);
}

int main() {
    int opcao;
    srand(time(NULL));

    do {
        printf("=== Mini Batalha Naval ===\n");
        printf("1) Jogar\n");
        printf("2) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                jogar();
                break;
            case 2:
                printf(" Saindo do jogo. Até mais!\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 2);

    return 0;
}
