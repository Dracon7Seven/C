#include <stdio.h>
#include <locale.h>
int main() {
    int n, termo1 = 0, termo2 = 1, proximoTermo;
	setlocale(LC_ALL,"Portuguese");
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O %do termo da sequência de Fibonacci é: %d\n", n, termo1);
    } else if (n == 1) {
        printf("O %do termo da sequência de Fibonacci é: %d\n", n, termo2);
    } else {
        for (int i = 2; i <= n; i++) {
            proximoTermo = termo1 + termo2;
            termo1 = termo2;
            termo2 = proximoTermo;
        }
        printf("O %do termo da sequência de Fibonacci é: %d\n", n, proximoTermo);
    }

    return 0;
}

