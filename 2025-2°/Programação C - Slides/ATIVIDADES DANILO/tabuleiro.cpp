#include <iostream>
#include <cstdlib> 

#define TAM 4

void imprimirTabuleiro(char* tabuleiro) {
    std::cout << "\nTabuleiro:\n";
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            std::cout << *(tabuleiro + i * TAM + j) << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

bool casaVazia(char* tabuleiro, int linha, int coluna) {
    return *(tabuleiro + linha * TAM + coluna) == '_';
}

void jogar() {
    char tabuleiro[TAM][TAM];
    char* pTabuleiro = &tabuleiro[0][0];

    int* pJogadas = (int*) malloc(sizeof(int));
    char* pJogador = (char*) malloc(sizeof(char));

    if (pJogadas == NULL || pJogador == NULL) {
        std::cerr << "Erro ao alocar memória!" << std::endl;
        return;
    }

    *pJogadas = 0;
    *pJogador = 'X';

    for (int i = 0; i < TAM * TAM; i++) {
        *(pTabuleiro + i) = '_';
    }

    imprimirTabuleiro(pTabuleiro);

    while (*pJogadas < TAM * TAM) {
        int linha, coluna;

        std::cout << "Jogador " << *pJogador << "\n";
        std::cout << "Digite linha (0 a 3): ";
        std::cin >> linha;
        std::cout << "Digite coluna (0 a 3): ";
        std::cin >> coluna;

        if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM) {
            std::cout << "Coordenadas inválidas! Tente novamente.\n";
            continue;
        }

        if (!casaVazia(pTabuleiro, linha, coluna)) {
            std::cout << "Essa casa já está ocupada! Jogue novamente.\n";
            continue;
        }

        *(pTabuleiro + linha * TAM + coluna) = *pJogador;
        (*pJogadas)++;

        imprimirTabuleiro(pTabuleiro);

        *pJogador = (*pJogador == 'X') ? 'O' : 'X';
    }

    std::cout << "Fim de jogo! Todas as casas foram preenchidas.\n\n";

    std::cout << "Jogadas totais: " << *pJogadas << "\n";
    std::cout << "Último jogador a jogar: " << ((*pJogador == 'X') ? 'O' : 'X') << "\n";

    free(pJogadas);
    free(pJogador);
}

int main() {
    int* pOpcao = (int*) malloc(sizeof(int));

    if (pOpcao == NULL) {
        std::cerr << "Erro ao alocar memória!" << std::endl;
        return 1;
    }

    do {
        std::cout << "=== Mini Jogo de Tabuleiro ===\n";
        std::cout << "1) Jogar\n";
        std::cout << "2) Sair\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> *pOpcao;

        switch (*pOpcao) {
            case 1:
                jogar();
                break;
            case 2:
                std::cout << "Saindo do jogo. Até mais, Cami!\n";
                break;
            default:
                std::cout << "Opção inválida! Tente novamente.\n";
        }
    } while (*pOpcao != 2);

    free(pOpcao);
    return 0;
}
