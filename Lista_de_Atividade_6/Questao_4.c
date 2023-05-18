#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO_MAX 100

typedef struct {
    int valores[TAMANHO_MAX];
    int topo;
} Pilha;

void inicializarPilha(Pilha* pilha) {
    pilha->topo = -1;
}

int pilhaVazia(Pilha* pilha) {
    return pilha->topo == -1;
}

int pilhaCheia(Pilha* pilha) {
    return pilha->topo == TAMANHO_MAX - 1;
}

void empilhar(Pilha* pilha, int valor) {
    if (pilhaCheia(pilha)) {
        printf("Erro: A pilha está cheia.\n");
        return;
    }

    pilha->topo++;
    pilha->valores[pilha->topo] = valor;
}

int desempilhar(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        printf("Erro: A pilha está vazia.\n");
        return -1;
    }

    int valor = pilha->valores[pilha->topo];
    pilha->topo--;

    return valor;
}

int main() {
    int* ponteiro1 = malloc(sizeof(int));
    int* ponteiro2 = malloc(sizeof(int));
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o valor do primeiro ponteiro: ");
    scanf("%d", ponteiro1);

    printf("Digite o valor do segundo ponteiro: ");
    scanf("%d", ponteiro2);

    Pilha pilha;
    inicializarPilha(&pilha);

    empilhar(&pilha, *ponteiro1);
    empilhar(&pilha, *ponteiro2);

    printf("\nValores presentes na pilha:\n");
    while (!pilhaVazia(&pilha)) {
        int valor = desempilhar(&pilha);
        printf("%d\n", valor);
    }

    free(ponteiro1);
    free(ponteiro2);

    return 0;
}
