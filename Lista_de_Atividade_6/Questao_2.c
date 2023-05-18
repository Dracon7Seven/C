#include <stdio.h>
#include <locale.h>
void minhaFuncao(int *ptr) {
    *ptr = *ptr * 2;
}

int main() {
    int numero;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Valor antes da chamada da função: %d\n", numero);

    int *ponteiro = &numero;
    minhaFuncao(ponteiro);

    printf("Valor após a chamada da função: %d\n", numero);

    return 0;
}
