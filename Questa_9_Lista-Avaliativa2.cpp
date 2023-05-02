#include <stdio.h>
#include <locale.h>
int main() {
    int opcao, quantidade;
    float valor_total = 0.0;
	setlocale(LC_ALL,"Portuguese");
    while (1) {
        printf("\nMENU DE FRUTAS\n");
        printf("1 => ABACAXI – 5,00 a unidade\n");
        printf("2 => MAÇA – 1,00 a unidade\n");
        printf("3 => PERA – 4,00 a unidade\n");
        printf("0 => ENCERRAR COMPRA\n");
        printf("Digite o código da fruta que deseja comprar: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;
        }

        printf("Digite a quantidade de frutas que deseja comprar: ");
        scanf("%d", &quantidade);

        switch (opcao) {
            case 1:
                valor_total += quantidade * 5.0;
                printf("%d abacaxis adicionados ao carrinho\n", quantidade);
                break;
            case 2:
                valor_total += quantidade * 1.0;
                printf("%d maçãs adicionadas ao carrinho\n", quantidade);
                break;
            case 3:
                valor_total += quantidade * 4.0;
                printf("%d peras adicionadas ao carrinho\n", quantidade);
                break;
            default:
                printf("Opção inválida!\n");
        }
    }

    printf("Valor total da compra: R$%.2f\n", valor_total);

    return 0;
}

