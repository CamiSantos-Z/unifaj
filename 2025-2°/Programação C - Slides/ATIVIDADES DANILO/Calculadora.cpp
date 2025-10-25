#include <stdio.h>


void somar() {
    float n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("%.2f + %.2f = %.2f\n\n", n1, n2, n1 + n2);
}

void subtrair() {
    float n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("%.2f - %.2f = %.2f\n\n", n1, n2, n1 - n2);
}

void multiplicar() {
    float n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("%.2f * %.2f = %.2f\n\n", n1, n2, n1 * n2);
}

void dividir() {
    float n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    if (n2 != 0)
        printf("%.2f / %.2f = %.2f\n\n", n1, n2, n1 / n2);
    else
        printf("Erro: divisao por zero nao e permitida.\n\n");
}


void calculadora() {
    int opcao;
    do {
        printf("=== CALCULADORA ===\n");
        printf("1 - Soma (+)\n");
        printf("2 - Subtracao (-)\n");
        printf("3 - Multiplicacao (*)\n");
        printf("4 - Divisao (/)\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: somar(); break;
            case 2: subtrair(); break;
            case 3: multiplicar(); break;
            case 4: dividir(); break;
            default: printf("Opcao invalida. Tente novamente.\n\n");
        }
    } while (opcao < 1 || opcao > 4);
}

void menuPrincipal() {
    int escolha;
    do {
        printf("=== MENU PRINCIPAL ===\n");
        printf("1 - Calculadora\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: calculadora(); break;
            case 2: printf("Saindo...\n"); break;
            default: printf("Opcao invalida. Tente novamente.\n\n");
        }
    } while (escolha != 2);
}

int main() {
    menuPrincipal();
    return 0;
}
