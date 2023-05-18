#include <stdio.h>
#include <locale.h>
int main() {
    int numero;
    int *ponteiro;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    ponteiro = &numero;

    printf("Valor antes da troca:\n");
    printf("Número: %d\n", numero);
    printf("Ponteiro: %d\n", *ponteiro);

    int troca = *ponteiro;
    *ponteiro = numero;
    numero = troca;

    printf("Valor após a troca:\n");
    printf("Número: %d\n", numero);
    printf("Ponteiro: %d\n", *ponteiro);

    return 0;
}
