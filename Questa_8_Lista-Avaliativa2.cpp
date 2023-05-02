#include <stdio.h>
#include <locale.h>
int main() {
    int num, maior, menor;
	setlocale(LC_ALL,"Portuguese");
    scanf("%d", &num);
    maior = num;
    menor = num;

    while (num >= 0) {
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
        scanf("%d", &num);
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);

    return 0;
}

