#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char cores[6] = {'P', 'B', 'V', 'A', 'R', 'M'}; 

int temRepeticao(char entrada[]) {
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (entrada[i] == entrada[j]) {
                return 1; 
            }
        }
    }
    return 0; 
}

void avaliarTentativa(char tentativa[], char senha[]) {
    char resultado[4];
    int acertos = 0;

    for (int i = 0; i < 4; i++) {
        if (tentativa[i] == senha[i]) {
            resultado[i] = 'x';
            acertos++;
        } else {
            int achou = 0;
            for (int j = 0; j < 4; j++) {
                if (tentativa[i] == senha[j]) achou = 1;
            }
            resultado[i] = achou ? 'o' : '_';
        }
    }

    printf("Resultado: ");
    for (int i = 0; i < 4; i++) {
        printf("%c ", resultado[i]);
    }
    printf("\n");

    if (acertos == 4) {
        printf(" Parabéns! Você acertou a senha!\n");
    }
}

void jogarComSenhaAleatoria() {
    char senha[4];
    int usada[6] = {0};

    for (int i = 0; i < 4; i++) {
        int indice;
        do {
            indice = rand() % 6;
        } while (usada[indice]);
        senha[i] = cores[indice];
        usada[indice] = 1;
    }

    int tentativas = 0;
    int venceu = 0;

    while (tentativas < 10 && !venceu) {
        char tentativa[5];
        printf("\nTentativa %d - Digite 4 letras (P, B, V, A, R, M): ", tentativas + 1);
        scanf("%s", tentativa);

        if (strlen(tentativa) != 4) {
            printf(" Digite exatamente 4 letras!\n");
            continue;
        }

        if (temRepeticao(tentativa)) {
            printf(" Tentativa inválida. Não pode repetir letras.\n");
            continue;
        }

        char resultado[4];
        int acertos = 0;

        for (int i = 0; i < 4; i++) {
            if (tentativa[i] == senha[i]) {
                resultado[i] = 'x';
                acertos++;
            } else {
                int achou = 0;
                for (int j = 0; j < 4; j++) {
                    if (tentativa[i] == senha[j]) achou = 1;
                }
                resultado[i] = achou ? 'o' : '_';
            }
        }

        printf("Resultado: ");
        for (int i = 0; i < 4; i++) {
            printf("%c ", resultado[i]);
        }
        printf("\n");

        if (acertos == 4) {
            venceu = 1;
            printf(" Parabéns! Você acertou a senha!\n");
        }

        tentativas++;
    }

    if (!venceu) {
        printf(" Você perdeu! A senha era: ");
        for (int i = 0; i < 4; i++) {
            printf("%c ", senha[i]);
        }
        printf("\n");
    }
}

void jogarEscolhendoSenha() {
    char senha[5];
    printf("\nDigite sua senha secreta (4 letras diferentes - P, B, V, A, R, M): ");
    scanf("%s", senha);

    if (strlen(senha) != 4) {
        printf(" Senha inválida. Deve ter 4 letras.\n");
        return;
    }

    if (temRepeticao(senha)) {
        printf(" Senha invalida. nao possivel reppetir letras.\n");
        return;
    }

    int tentativas = 0;
    int venceu = 0;

    while (tentativas < 10 && !venceu) {
        char tentativa[5];
        printf("\nTentativa %d - Digite 4 letras (P, B, V, A, R, M): ", tentativas + 1);
        scanf("%s", tentativa);

        if (strlen(tentativa) != 4) {
            printf(" Digite exatamente 4 letras!\n");
            continue;
        }

        if (temRepeticao(tentativa)) {
            printf(" Tentativa inválida. Não pode repetir letras.\n");
            continue;
        }

        char resultado[4];
        int acertos = 0;

        for (int i = 0; i < 4; i++) {
            if (tentativa[i] == senha[i]) {
                resultado[i] = 'x';
                acertos++;
            } else {
                int achou = 0;
                for (int j = 0; j < 4; j++) {
                    if (tentativa[i] == senha[j]) achou = 1;
                }
                resultado[i] = achou ? 'o' : '_';
            }
        }

        printf("Resultado: ");
        for (int i = 0; i < 4; i++) {
            printf("%c ", resultado[i]);
        }
        printf("\n");

        if (acertos == 4) {
            venceu = 1;
            printf(" Você venceu! Adivinhou a senha!\n");
        }

        tentativas++;
    }

    if (!venceu) {
        printf(" Você perdeu! A senha era: ");
        for (int i = 0; i < 4; i++) {
            printf("%c ", senha[i]);
        }
        printf("\n");
    }
}

int main() {
    int opcao;
    srand(time(NULL)); 

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Jogar escolhendo a senha\n");
        printf("2 - Jogar com senha aleatória\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                jogarEscolhendoSenha();
                break;
            case 2:
                jogarComSenhaAleatoria();
                break;
            case 3:
                printf("?? Saindo do jogo. Até mais!\n");
                break;
            default:
                printf("? Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
