#include <stdio.h>

void calcularNotas(int valor) {
    int notas100 = valor / 100;
    valor %= 100;

    int notas50 = valor / 50;
    valor %= 50;

    int notas20 = valor / 20;
    valor %= 20;

    int notas10 = valor / 10;
    valor %= 10;

    int notas5 = valor / 5;
    valor %= 5;

    int notas2 = valor / 2;
    valor %= 2;

    printf("Notas de R$100: %d\n", notas100);
    printf("Notas de R$50: %d\n", notas50);
    printf("Notas de R$20: %d\n", notas20);
    printf("Notas de R$10: %d\n", notas10);
    printf("Notas de R$5: %d\n", notas5);
    printf("Notas de R$2: %d\n", notas2);
    printf("Valor restante: %d\n", valor);
}

int main() {
    int valor;

    printf("Digite o valor que deseja sacar: ");
    scanf("%d", &valor);

    calcularNotas(valor);

    return 0;
}
