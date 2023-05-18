#include <stdio.h>
#include <locale.h>
int main() {
    int numero;
    int* ponteiro;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    ponteiro = &numero;
    *ponteiro = 7;

    printf("O valor armazenado no ponteiro é: %d\n", *ponteiro);

    return 0;
}
