#include <stdio.h>
#include <locale.h>
int main() {
   int num, soma = 0;
   float media;
   setlocale(LC_ALL,"Portuguese");
   for (int i = 1; i <= 10; i++) {
      printf("Digite o %d� n�mero: ", i);
      scanf("%d", &num);
      soma += num;
   }

   media = (float) soma / 10;
   printf("\nA m�dia dos n�meros digitados � %.2f\n", media);
   
   return 0;
}

