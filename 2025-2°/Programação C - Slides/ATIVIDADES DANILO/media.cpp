#include <stdio.h>
#include <string.h>

struct Disciplina {
    char nome[50];
    float nota1;
    float nota2;
    float media;
};

int main() {
    int opcao;
    struct Disciplina d1, d2;

    do {
        printf("\nMenu:\n");
        printf("1) Comparar nota\n");
        printf("2) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nDigite o nome da primeira disciplina: ");
            scanf(" %[^\n]", d1.nome);
            printf("Digite a nota 1: ");
            scanf("%f", &d1.nota1);
            printf("Digite a nota 2: ");
            scanf("%f", &d1.nota2);
            d1.media = (d1.nota1 + d1.nota2) / 2;

            printf("\nDigite o nome da segunda disciplina: ");
            scanf(" %[^\n]", d2.nome);
            printf("Digite a nota 1: ");
            scanf("%f", &d2.nota1);
            printf("Digite a nota 2: ");
            scanf("%f", &d2.nota2);
            d2.media = (d2.nota1 + d2.nota2) / 2;

            if (d1.media > d2.media) {
                printf("\nA disciplina %s tem uma média maior que a disciplina %s\n", d1.nome, d2.nome);
            } else if (d2.media > d1.media) {
                printf("\nA disciplina %s tem uma média maior que a disciplina %s\n", d2.nome, d1.nome);
            } else {
                printf("\nAs disciplinas %s e %s estão com a mesma média\n", d1.nome, d2.nome);
            }
        } else if (opcao != 2) {
            printf("\nOpção inválida. Tente novamente.\n");
        }

    } while (opcao != 2);

    printf("\nPrograma finalizado.\n");
    return 0;
}
