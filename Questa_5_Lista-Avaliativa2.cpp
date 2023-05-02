#include <stdio.h>
#include <locale.h>
int main() {
    int num;
	setlocale(LC_ALL,"Portuguese");
    printf("Digite um número positivo: ");
    scanf("%d", &num);

    printf("Os divisores do número %d sao: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

