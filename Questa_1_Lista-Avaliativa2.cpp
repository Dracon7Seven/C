#include <stdio.h>
#include <locale.h>
int main() {
    int a, b, c, d, diferenca;
	setlocale(LC_ALL,"Portuguese");
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    printf("Digite o valor de D: ");
    scanf("%d", &d);

    diferenca = (a * b) - (c * d);

    printf("DIFERENÇA = (%d * %d - %d * %d)\n", a, b, c, d);
    printf("DIFERENÇA = (%d)\n", diferenca);

    return 0;
}

